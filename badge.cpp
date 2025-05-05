#include "badge.h"          // Inclusion du fichier d'en-tête de la classe
#include "ui_badge.h"       // Inclusion du fichier UI généré par Qt
#include <QRegularExpression> // Pour utiliser les expressions régulières
#include <QDateTime>        // Pour obtenir la date et l'heure actuelles
#include <QSqlQuery>        // Pour exécuter des requêtes SQL
#include <QMessageBox>      // Pour afficher des boîtes de message
#include <QSqlError>        // Pour gérer les erreurs SQL
#include "connection.h"     // Pour utiliser la classe de connexion à la base de données
#include "menu.h"
badge::badge(QWidget *parent) :
    QDialog(parent),        // Initialisation de la classe parente
    ui(new Ui::badge)       // Création de l'interface utilisateur
{
    ui->setupUi(this);      // Configuration de l'interface utilisateur
    // Configuration de la table pour afficher les UID et CIN
    ui->tableWidget->setColumnCount(2); // Table à 2 colonnes
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "UID" << "CIN"); // En-têtes
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); // Mode lecture seule
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows); // Sélection par ligne

    // Initialisation de la connexion à la base de données
    connection c;
    if (!c.createconnect()) { // Si la connexion échoue
        QMessageBox::critical(this, "Database Connection", "Failed to connect to the database.");
    } else {
        db = QSqlDatabase::database("projetA"); // Récupère la connexion établie
    }

    // Tentative de connexion à l'Arduino
    int ret = A.connect_arduino();
    switch(ret) {
    case 0: // Connexion réussie
        ui->statusLabel->setText("Connected to Arduino on " + A.getarduino_port_name());
        break;
    case 1: // Arduino disponible mais non connecté
        ui->statusLabel->setText("Arduino available but not connected on " + A.getarduino_port_name());
        break;
    case -1: // Arduino non disponible
        ui->statusLabel->setText("Arduino not available");
        break;
    }

    // Connexion des signaux et slots
    QObject::connect(A.getserial(), SIGNAL(readyRead()), this, SLOT(update_label())); // Pour lire les données
    QObject::connect(ui->enregistrer, SIGNAL(clicked()), this, SLOT(on_enregistrer_clicked())); // Pour le bouton
}

badge::~badge()
{
    delete ui; // Libération de la mémoire de l'interface utilisateur
}

void badge::on_enregistrer_clicked()
{
    // Récupération des valeurs UID et CIN depuis les champs texte
    QString uid = ui->UID->text().trimmed(); // Enlève les espaces en début/fin
    QString cinText = ui->cin->text().trimmed();

    // Validation des données saisies
    if (uid.isEmpty() || cinText.isEmpty()) {
        ui->statusLabel->setText("Please enter a UID and CIN");
        return;
    }

    // Vérification de l'existence du CIN dans la base de données
    bool cinExists = checkCinExists(cinText.toInt());

    if (!cinExists) {
        ui->statusLabel->setText("CIN does not exist in the database.");
        return;
    }

    // Vérification si l'UID est déjà attribué à cet employé
    QSqlQuery query;
    query.prepare("SELECT 1 FROM EMPLOYES WHERE CIN = :cin AND COLUMN1 = :uid");
    query.bindValue(":cin", cinText.toInt()); // Liaison des paramètres
    query.bindValue(":uid", uid);

    if (query.exec() && query.next()) { // Si une correspondance existe déjà
        ui->statusLabel->setText("This UID is already assigned to this employee.");
        return;
    }

    // Mise à jour de l'enregistrement de l'employé avec le nouvel UID
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE EMPLOYES SET COLUMN1 = :uid WHERE CIN = :cin");
    updateQuery.bindValue(":uid", uid);
    updateQuery.bindValue(":cin", cinText.toInt());

    if (!updateQuery.exec()) { // Si la mise à jour échoue
        ui->statusLabel->setText("Failed to update employee record: " + updateQuery.lastError().text());
        return;
    }

    // Ajout d'une nouvelle ligne dans la table d'affichage
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(uid));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(cinText));

    // Affichage du nom de l'employé
    displayEmployeeName(cinText.toInt());

    // Nettoyage des champs et affichage du message de succès
    ui->UID->clear();
    ui->cin->clear();
    ui->statusLabel->setText("UID and CIN registered successfully");
    ui->statusLabel->setStyleSheet("color: green; font-weight: bold;"); // Mise en forme du message
}

bool badge::checkCinExists(int cin) {
    QSqlQuery query;
    query.prepare("SELECT 1 FROM EMPLOYES WHERE CIN = :cin"); // Requête pour vérifier l'existence
    query.bindValue(":cin", cin);

    if (!query.exec()) { // Si l'exécution échoue
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    return query.next(); // Renvoie true si un résultat est trouvé, false sinon
}

bool badge::checkUidMatchesCin(const QString &uid, int cin) {
    QSqlQuery query;
    query.prepare("SELECT 1 FROM EMPLOYES WHERE CIN = :cin AND COLUMN1 = :uid"); // Vérification correspondance
    query.bindValue(":cin", cin);
    query.bindValue(":uid", uid);

    if (!query.exec()) { // Si l'exécution échoue
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    return query.next(); // Renvoie true si un résultat est trouvé, false sinon
}

bool badge::verifyUidInDatabase(const QString &uid, QString &cin) {
    QSqlQuery query;
    query.prepare("SELECT CIN FROM EMPLOYES WHERE COLUMN1 = :uid"); // Recherche du CIN par UID
    query.bindValue(":uid", uid);

    if (!query.exec()) { // Si l'exécution échoue
        qDebug() << "Error executing query:" << query.lastError().text();
        return false;
    }

    if (query.next()) { // Si un résultat est trouvé
        cin = query.value(0).toString(); // Récupération du CIN
        return true;
    }

    return false; // Aucun résultat trouvé
}

void badge::displayEmployeeName(int cin) {
    QSqlQuery query;
    query.prepare("SELECT NOM FROM EMPLOYES WHERE CIN = :cin"); // Recherche du nom par CIN
    query.bindValue(":cin", cin);

    if (!query.exec()) { // Si l'exécution échoue
        qDebug() << "Error executing query:" << query.lastError().text();
        return;
    }

    if (query.next()) { // Si un nom est trouvé
        QString employeeName = query.value(0).toString();
        sendToLCD("NAME:" + employeeName); // Envoi du nom à l'Arduino
    }
}

void badge::sendToLCD(const QString &message)
{
    if (A.getserial()->isWritable()) { // Vérifie si le port série est prêt
        A.getserial()->write(message.toUtf8() + "\n"); // Envoi du message suivi d'un retour à la ligne
        qDebug() << "Sent to LCD:" << message; // Log du message envoyé
    }
}

void badge::logAccess(bool authorized, const QString& uid, const QString& cin)
{
    QDateTime timestamp = QDateTime::currentDateTime(); // Horodatage actuel
    QString logEntry = timestamp.toString("yyyy-MM-dd hh:mm:ss") + " - ";

    if (authorized) { // Si l'accès est autorisé
        logEntry += "Access granted: UID=" + uid + ", CIN=" + cin;
    } else { // Si l'accès est refusé
        logEntry += "Access denied: UID=" + uid;
    }

    qDebug() << logEntry; // Enregistrement du log dans la console
}

void badge::update_label()
{
    data += A.read_from_arduino(); // Lecture des données de l'Arduino

    if (data.contains('\n')) { // Si une ligne complète est reçue
        QString dataStr = QString(data).trimmed();
        qDebug() << "Raw data received:" << dataStr;

        int uidIndex = dataStr.indexOf("UID:"); // Recherche de la balise UID
        if (uidIndex != -1) { // Si la balise est trouvée
            QString uidRaw = dataStr.mid(uidIndex + 4).trimmed(); // Extraction de l'UID
            uidRaw = uidRaw.split('\n')[0].split('\r')[0]; // Nettoyage des caractères spéciaux

            QString normalizedUid = uidRaw;
            normalizedUid.remove(QRegularExpression("[^A-Fa-f0-9]")); // Suppression des caractères non-hexadécimaux
            normalizedUid = normalizedUid.toUpper(); // Conversion en majuscules

            // Vérification si l'UID existe dans la base de données
            QString cin;
            bool found = verifyUidInDatabase(normalizedUid, cin);

            if (found) { // Si l'UID est trouvé dans la base
                ui->statusLabel->setText("Access granted for CIN : " + cin);
                ui->statusLabel->setStyleSheet("color: green; font-weight: bold;"); // Style en vert

                // Recherche de la ligne correspondante dans la table d'affichage
                bool rowFound = false;
                for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
                    QTableWidgetItem* item = ui->tableWidget->item(row, 0);
                    if (!item) continue;

                    QString storedUid = item->text().remove(QRegularExpression("[^A-Fa-f0-9]")).toUpper();
                    if (storedUid == normalizedUid) { // Si l'UID correspond
                        ui->tableWidget->selectRow(row); // Sélection de la ligne
                        rowFound = true;
                        break;
                    }
                }

                // Si non trouvé dans la table, ajout d'une nouvelle ligne
                if (!rowFound) {
                    int row = ui->tableWidget->rowCount();
                    ui->tableWidget->insertRow(row);
                    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(normalizedUid));
                    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(cin));
                    ui->tableWidget->selectRow(row);
                }

                // Affichage du nom de l'employé sur l'écran LCD
                displayEmployeeName(cin.toInt());
                logAccess(true, uidRaw, cin); // Enregistrement de l'accès autorisé
            } else { // Si l'UID n'est pas trouvé
                ui->statusLabel->setText("Access denied - UID not registered: " + uidRaw);
                ui->statusLabel->setStyleSheet("color: red; font-weight: bold;"); // Style en rouge
                sendToLCD("ACCESS DENIED"); // Message de refus d'accès
                logAccess(false, uidRaw, ""); // Enregistrement de l'accès refusé
            }
        }

        data.clear(); // Effacement des données traitées
    }
}

void badge::on_quitter_clicked()
{
    menu *menu1 = new menu();
    configureTransition(menu1, "");
    this->close();
}

void badge::configureTransition(QWidget *window, const QString &title)
{
    window->setWindowTitle(title);
    window->setAttribute(Qt::WA_DeleteOnClose);

    // Animation identique (250ms comme dans MainWindow)
    QPropertyAnimation *animation = new QPropertyAnimation(window, "windowOpacity");
    animation->setDuration(250); // Même durée que configureDialog
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->start(QPropertyAnimation::DeleteWhenStopped);

    window->show();
}
