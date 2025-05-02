#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QPdfWriter>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QRegularExpression>
#include "client.h"
#include <QVBoxLayout>
#include <QStyle>
#include <QLineEdit>
#include <QVariant>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QUrlQuery>
#include <QJsonDocument>
#include <QJsonObject>
#include <QThread>
#include <QTimer>
#include <QProgressDialog>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChartView>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    model(new QSqlQueryModel(this)),
    modelAchats(new QSqlTableModel(this)),
    smsManager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);


    QAction *searchAction = new QAction(style()->standardIcon(QStyle::SP_FileDialogContentsView), "Rechercher");



    // 2. Ajouter l'action au QLineEdit (côté gauche)
    ui->lineEditRecherche->addAction(searchAction, QLineEdit::LeadingPosition);

    // 3. Optionnel : styliser le QLineEdit
    ui->lineEditRecherche->setPlaceholderText("Rechercher...");
    ui->lineEditRecherche->setStyleSheet(
        "QLineEdit {"
        "    padding-left: 20px;"  // Espace pour l'icône
        "    border: 1px solid #c0c0c0;"
        "    border-radius: 12px;"
        "    height: 24px;"
        "}"
        "QLineEdit:focus {"
        "    border: 1px solid #4d90fe;"
        "}"
        );

    // Icône PDF
    ui->btnPDF->setIcon(style()->standardIcon(QStyle::SP_FileIcon));
    ui->btnPDF->setToolTip("Générer PDF");

    // Icône Statistiques (graphique)
    ui->buttonStats->setIcon(style()->standardIcon(QStyle::SP_FileDialogDetailedView));
    ui->buttonStats->setToolTip("Voir les statistiques");

    // Définir la taille des icônes (optionnel)
    QSize iconSize(24, 24);
    ui->btnPDF->setIconSize(iconSize);
    ui->buttonStats->setIconSize(iconSize);

    // Configuration des modèles
    ui->tableView->setModel(model);

    modelAchats->setTable("ACHAT");
    modelAchats->select();
    ui->tableViewAchats->setModel(modelAchats);
    ui->tableViewAchats->setEditTriggers(QAbstractItemView::NoEditTriggers);

    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir la base de données !");
    }
}



// Fonction pour valider l'ID
bool MainWindow::validateID(const QString &idStr) {
    bool ok;
    int id = idStr.toInt(&ok);
    return ok && id > 0; // L'ID doit être un nombre entier positif
}

// Fonction pour valider le nom ou prénom
bool MainWindow::validateName(const QString &name) {
    QRegularExpression nameRegex("^[a-zA-ZÀ-ÿ\\s'-]+$"); // Autorise les lettres, espaces, apostrophes et traits d'union
    return nameRegex.match(name).hasMatch() && !name.isEmpty();
}

// Fonction pour valider l'email
bool MainWindow::validateEmail(const QString &email) {
    QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    return emailRegex.match(email).hasMatch();
}

// Fonction pour valider le téléphone (8 chiffres exactement)
bool MainWindow::validatePhone(const QString &phoneStr) {
    bool ok;
    int phone = phoneStr.toInt(&ok);
    return ok && phone > 0 && phoneStr.length() == 8; // Le téléphone doit être un nombre de 8 chiffres

}

void MainWindow::on_btnAjouter_clicked()
{
    // Récupérer les valeurs des champs
    QString idStr = ui->lineEditID->text();
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString email = ui->lineEditEmail->text();
    QString telephoneStr = ui->lineEditTelephone->text();

    // Validation de l'ID
    if (!validateID(idStr)) {
        QMessageBox::critical(this, "Erreur", "ID_CLIENT doit être un nombre entier positif !");
        return;
    }

    // Validation du nom
    if (!validateName(nom)) {
        QMessageBox::critical(this, "Erreur", "Le nom ne peut pas être vide et doit contenir uniquement des lettres !");
        return;
    }

    // Validation du prénom
    if (!validateName(prenom)) {
        QMessageBox::critical(this, "Erreur", "Le prénom ne peut pas être vide et doit contenir uniquement des lettres !");
        return;
    }

    // Validation de l'email
    if (!validateEmail(email)) {
        QMessageBox::critical(this, "Erreur", "L'email n'est pas valide !");
        return;
    }

    // Validation du téléphone
    if (!validatePhone(telephoneStr)) {
        QMessageBox::critical(this, "Erreur", "Le numéro de téléphone doit être un nombre valide de 8 chiffres !");
        return;
    }

    // Convertir les valeurs
    int id = idStr.toInt();
    int telephone = telephoneStr.toInt();
    int pointFidelite = 0; // Valeur par défaut

    // Exécuter la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO CLIENT (ID_CLIENT, NOM_CLIENT, PRENOM_CLIENT, EMAIL_CLIENT, TELEPHONE, POINT_FIDELITE) "
                  "VALUES (:id, :nom, :prenom, :email, :telephone, :pointFidelite)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":pointFidelite", pointFidelite);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Client ajouté avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout du client: " + query.lastError().text());
    }
}

void MainWindow::on_btnModifier_clicked()
{
    QString idStr = ui->lineEditID->text();
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString email = ui->lineEditEmail->text();
    QString telephoneStr = ui->lineEditTelephone->text();

    // Validation de l'ID
    if (!validateID(idStr)) {
        QMessageBox::critical(this, "Erreur", "ID_CLIENT doit être un nombre entier positif !");
        return;
    }

    // Validation du nom
    if (!validateName(nom)) {
        QMessageBox::critical(this, "Erreur", "Le nom ne peut pas être vide et doit contenir uniquement des lettres !");
        return;
    }

    // Validation du prénom
    if (!validateName(prenom)) {
        QMessageBox::critical(this, "Erreur", "Le prénom ne peut pas être vide et doit contenir uniquement des lettres !");
        return;
    }

    // Validation de l'email
    if (!validateEmail(email)) {
        QMessageBox::critical(this, "Erreur", "L'email n'est pas valide !");
        return;
    }

    // Validation du téléphone
    if (!validatePhone(telephoneStr)) {
        QMessageBox::critical(this, "Erreur", "Le numéro de téléphone doit être un nombre valide de 8 chiffres !");
        return;
    }

    // Convertir les valeurs
    int id = idStr.toInt();
    int telephone = telephoneStr.toInt();

    // Vérifier si le client existe dans la base de données
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT ID_CLIENT FROM CLIENT WHERE ID_CLIENT = :id");
    checkQuery.bindValue(":id", id);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification de l'existence du client: " + checkQuery.lastError().text());
        return;
    }
    if (!checkQuery.next()) {
        QMessageBox::critical(this, "Erreur", "Aucun client trouvé avec cet ID !");
        return;
    }

    // Exécuter la requête SQL pour mettre à jour le client
    QSqlQuery query;
    query.prepare("UPDATE CLIENT SET NOM_CLIENT = :nom, PRENOM_CLIENT = :prenom, EMAIL_CLIENT = :email, TELEPHONE = :telephone WHERE ID_CLIENT = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Client modifié avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la modification du client: " + query.lastError().text());
    }
}

void MainWindow::on_btnSupprimer_clicked()
{
    QString idStr = ui->lineEditID->text();

    // Vérification si l'ID est valide
    if (idStr.isEmpty() || idStr.toInt() <= 0) {
        QMessageBox::critical(this, "Erreur", "ID_CLIENT doit être un nombre entier positif !");
        return;
    }

    int id = idStr.toInt();

    // Vérifier si le client existe
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT ID_CLIENT FROM CLIENT WHERE ID_CLIENT = :id");
    checkQuery.bindValue(":id", id);
    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la vérification du client: " + checkQuery.lastError().text());
        return;
    }
    if (!checkQuery.next()) {
        QMessageBox::critical(this, "Erreur", "Aucun client trouvé avec cet ID !");
        return;
    }

    // Supprimer les enregistrements liés dans ACHAT pour éviter la violation de contrainte
    QSqlQuery deleteAchat;
    deleteAchat.prepare("DELETE FROM ACHAT WHERE ID_CLIENT = :id");
    deleteAchat.bindValue(":id", id);
    if (!deleteAchat.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression des achats liés: " + deleteAchat.lastError().text());
        return;
    }

    // Supprimer le client après avoir supprimé les achats liés
    QSqlQuery query;
    query.prepare("DELETE FROM CLIENT WHERE ID_CLIENT = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Client supprimé avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression du client: " + query.lastError().text());
    }
}

void MainWindow::on_btnAfficher_clicked()
{
    QSqlQuery query("SELECT ID_CLIENT, NOM_CLIENT, PRENOM_CLIENT, TO_CHAR(TELEPHONE) AS TELEPHONE, POINT_FIDELITE, EMAIL_CLIENT FROM CLIENT");
    model->setQuery(query);
    ui->tableView->setModel(model);
}


void MainWindow::on_lineEditRecherche_textChanged(const QString &arg1)
{
    QString filter = arg1.trimmed();
    QSqlQuery query;

    if (filter.isEmpty()) {
        query.prepare("SELECT * FROM CLIENT");
    } else {
        query.prepare("SELECT * FROM CLIENT WHERE NOM_CLIENT LIKE :filter OR ID_CLIENT LIKE :filter");
        query.bindValue(":filter", "%" + filter + "%");
    }

    if (query.exec()) {
        model->setQuery(query);
        ui->tableView->setModel(model);
    }
}

void MainWindow::on_comboBoxTri_currentIndexChanged(int index)
{
    QString ordre;
    if (index == 0) ordre = "PRENOM_CLIENT ASC";
    else if (index == 1) ordre = "EMAIL_CLIENT ASC";

    QSqlQuery query;
    query.prepare("SELECT * FROM CLIENT ORDER BY " + ordre);
    query.exec();
    model->setQuery(query);
    ui->tableView->setModel(model);
}

void MainWindow::on_btnPDF_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer en PDF", "", "Fichier PDF (*.pdf)");
    if (fileName.isEmpty()) return;

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QString text = "<h2>Liste des Clients</h2><table border='1' cellspacing='0' cellpadding='3'>"
                   "<tr><th>ID</th><th>Nom</th><th>Prénom</th><th>Email</th><th>Téléphone</th></tr>";

    QSqlQuery query("SELECT ID_CLIENT, NOM_CLIENT, PRENOM_CLIENT, EMAIL_CLIENT, TELEPHONE FROM CLIENT");
    while (query.next()) {
        text += "<tr><td>" + query.value(0).toString() + "</td>"
                                                         "<td>" + query.value(1).toString() + "</td>"
                                              "<td>" + query.value(2).toString() + "</td>"
                                              "<td>" + query.value(3).toString() + "</td>"
                                              "<td>" + query.value(4).toString() + "</td></tr>";
    }

    text += "</table>";
    doc.setHtml(text);
    doc.print(&printer);

    QMessageBox::information(this, "Succès", "Le fichier PDF a été généré avec succès !");
}
void MainWindow::on_buttonAchat_clicked() {
    // 1. Validation de l'ID client
    if (!validateID(ui->lineEditID->text())) {
        QMessageBox::warning(this, "Erreur", "ID client invalide");
        return;
    }

    int idClient = ui->lineEditID->text().toInt();

    // 2. Vérification existence client
    if (!Client::clientExiste(idClient)) {
        QMessageBox::warning(this, "Erreur", "Ce client n'existe pas");
        return;
    }

    // 3. Récupération du prochain IDPRODUIT pour ce client
    QSqlQuery maxQuery;
    maxQuery.prepare("SELECT NVL(MAX(IDPRODUIT), 0) + 1 FROM ACHAT WHERE ID_CLIENT = ?");
    maxQuery.addBindValue(idClient);

    if (!maxQuery.exec() || !maxQuery.next()) {
        QMessageBox::critical(this, "Erreur", "Échec récupération ID produit: " + maxQuery.lastError().text());
        return;
    }

    int idProduit = maxQuery.value(0).toInt();

    // 4. Enregistrement de l'achat
    QSqlQuery query;
    query.prepare("INSERT INTO ACHAT (ID_CLIENT, IDPRODUIT, NOMBREACHAT, DATEACHAT) "
                  "VALUES (:idClient, :idProduit, 1, SYSDATE)");
    query.bindValue(":idClient", idClient);
    query.bindValue(":idProduit", idProduit);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Échec enregistrement achat: " + query.lastError().text());
        return;
    }

    // 4. Mise à jour des points de fidélité
    Client::mettreAJourPointsFidelite(idClient);

    // 5. Actualisation de l'affichage
    actualiserInfosClient(idClient);

    QMessageBox::information(this, "Succès", "Achat enregistré et points mis à jour");
}

void MainWindow::actualiserInfosClient(int idClient) {
    QSqlQuery query;
    query.prepare("SELECT POINT_FIDELITE FROM CLIENT WHERE ID_CLIENT = ?");
    query.addBindValue(idClient);

    if (query.exec() && query.next()) {
        ui->lineEditPointFidelite->setText(query.value(0).toString());
    }

    // Actualiser aussi le tableau si nécessaire
    on_btnAfficher_clicked();
}

void MainWindow::mettreAJourAffichagePoints(int idClient) {
    QSqlQuery query;
    query.prepare("SELECT pointFidelite FROM client WHERE ID_CLIENT = :idClient");
    query.bindValue(":idClient", idClient);

    if (query.exec() && query.next()) {
        int points = query.value(0).toInt();

        // Vérifier que l'élément UI existe
        if (ui->lineEditPointFidelite) {
            ui->lineEditPointFidelite->setText(QString::number(points));  // Mettre à jour l'UI
        } else {
            qDebug() << "Erreur : Widget lineEditPointFidelite introuvable.";
        }
    } else {
        qDebug() << "Erreur lors de la récupération des points de fidélité:" << query.lastError().text();
    }
}


MainWindow::~MainWindow()
{
    // Suppression dans l'ordre inverse de déclaration
    delete modelAchats;  // D'abord le modèle achats
    delete model;        // Puis le modèle clients
    delete ui;           // Enfin l'interface
}


void MainWindow::actualiserTableauAchats() {
    modelAchats->select();
    ui->tableViewAchats->resizeColumnsToContents();
}
void MainWindow::on_buttonStats_clicked()
{
    // Récupérer les données
    QSqlQuery query;
    query.prepare("SELECT NOM_CLIENT, POINT_FIDELITE FROM CLIENT WHERE POINT_FIDELITE > 0 ORDER BY POINT_FIDELITE DESC");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Impossible de récupérer les données: " + query.lastError().text());
        return;
    }

    // Créer une série pour le diagramme circulaire
    QPieSeries *series = new QPieSeries();

    // Ajouter les données à la série
    while (query.next()) {
        QString nom = query.value(0).toString();
        int points = query.value(1).toInt();

        QPieSlice *slice = series->append(nom, points);
        slice->setLabelVisible(true); // Afficher les étiquettes
    }

    // Créer le graphique
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Répartition des Points de Fidélité");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Personnaliser l'apparence des tranches
    for (QPieSlice *slice : series->slices()) {
        slice->setExploded(false); // Désactiver l'effet "explosé"
        slice->setLabel(QString("%1 (%2%)").arg(slice->label()).arg(slice->percentage() * 100, 0, 'f', 1));
    }

    // Affichage
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QDialog *dialog = new QDialog(this);
    QVBoxLayout *layout = new QVBoxLayout(dialog);
    layout->addWidget(chartView);
    dialog->setLayout(layout);
    dialog->resize(800, 600);
    dialog->setWindowTitle("Statistiques des Points (Diagramme Circulaire)");
    dialog->exec();
}
void MainWindow::envoyerSMSClientsInactifs()
{
    // 1. Vérification connexion DB
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Pas de connexion à la base de données !");
        return;
    }

    // 2. Requête pour trouver les clients inactifs
    QSqlQuery query;
    query.prepare("SELECT c.ID_CLIENT, c.NOM_CLIENT, c.PRENOM_CLIENT, c.TELEPHONE "
                  "FROM CLIENT c "
                  "WHERE NOT EXISTS ("
                  "    SELECT 1 FROM ACHAT a "
                  "    WHERE a.ID_CLIENT = c.ID_CLIENT "
                  "    AND a.DATEACHAT >= SYSDATE - 30"
                  ") "
                  "AND c.TELEPHONE IS NOT NULL");

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Erreur SQL: " + query.lastError().text());
        return;
    }

    // 3. Envoi des SMS
    int succes = 0, echecs = 0;
    while (query.next()) {
        QString tel = "+216" + query.value(3).toString().trimmed();
        QString message = QString("Cher %1 %2, nous vous offrons 10%% de réduction! Code: PROMO10")
                              .arg(query.value(2).toString())
                              .arg(query.value(1).toString());

        try {
            envoyerSMSTwilio(query.value(0).toInt(), tel, message);
            succes++;
        } catch (...) {
            echecs++;
        }

        QThread::msleep(300); // Pause entre les envois
    }

    QMessageBox::information(this, "Résultat",
                             QString("%1 SMS envoyés, %2 échecs").arg(succes).arg(echecs));
}

void MainWindow::on_btnEnvoyerSMS_clicked()
{
    // Demander confirmation avant d'envoyer les SMS
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation",
                                  "Êtes-vous sûr de vouloir envoyer des SMS à tous les clients inactifs ?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        envoyerSMSClientsInactifs();
    }
}
    enum CustomAttributes {
        ClientIdAttribute = QNetworkRequest::User + 1,
        TelephoneAttribute = QNetworkRequest::User + 2,
        MessageAttribute = QNetworkRequest::User + 3
    };


void MainWindow::envoyerSMSTwilio(int idClient, QString toNumber, const QString& message)
{
    // 1. Nettoyage et validation du numéro
    toNumber = toNumber.trimmed().remove(QRegularExpression("[^0-9+]"));

    if (!toNumber.startsWith("+216") || toNumber.length() != 12) {
        qCritical() << "Numéro invalide:" << toNumber;
        throw std::invalid_argument("Numéro de téléphone invalide");
    }

    // 2. Configuration Twilio
    const QString accountSID = "ACa5d0f611c346c8862ecf9586aaee3efe";
    const QString authToken = "8b3a60816d8974f75f2599de26766cd3";
    const QString fromNumber = "+17158041628";

    // 3. Construction de la requête
    QUrl url(QString("https://api.twilio.com/2010-04-01/Accounts/%1/Messages.json").arg(accountSID));
    QUrlQuery params;
    params.addQueryItem("To", toNumber);
    params.addQueryItem("From", fromNumber);
    params.addQueryItem("Body", message.left(1600));

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    request.setRawHeader("Authorization", "Basic " + QByteArray(QString("%1:%2").arg(accountSID).arg(authToken).toLocal8Bit().toBase64()));

    // 4. Envoi avec timeout
    QNetworkReply* reply = smsManager->post(request, params.toString(QUrl::FullyEncoded).toUtf8());

    QTimer::singleShot(15000, [reply]() {
        if (reply && reply->isRunning()) {
            reply->abort();
            reply->deleteLater();
        }
    });

    // 5. Gestion de la réponse
    connect(reply, &QNetworkReply::finished, [this, reply, idClient, toNumber]() {
        if (reply->error() != QNetworkReply::NoError) {
            qCritical() << "Erreur Twilio:" << reply->errorString();
            return;
        }

        QJsonDocument json = QJsonDocument::fromJson(reply->readAll());
        if (!json.isNull()) {
            qDebug() << "SMS envoyé à" << toNumber << "- Statut:"
                    << json.object().value("status").toString();
        }
        reply->deleteLater();
    });
}

    void MainWindow::onSmsSent(QNetworkReply* reply)
    {
        // 1. Vérifier si la réponse existe
        if (!reply) {
            qCritical() << "Réponse réseau invalide";
            return;
        }

        // 2. Gestion des erreurs
        if (reply->error() != QNetworkReply::NoError) {
            qCritical() << "Erreur réseau:" << reply->errorString();
            reply->deleteLater();
            return;
        }

        // 3. Traitement de la réponse
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonResponse = QJsonDocument::fromJson(responseData);

        if (jsonResponse.isNull()) {
            qWarning() << "Réponse JSON invalide";
        } else {
            qDebug() << "Réponse Twilio:" << jsonResponse.toJson();
        }

        // 4. Nettoyage
        reply->deleteLater();
    }

    void MainWindow::on_btnTestSMS_clicked()
    {
        QString testNumber = "52735465"; // Numéro qui causait le crash
        try {
            envoyerSMSTwilio(999, testNumber, "Message test");
            QMessageBox::information(this, "Test", "SMS envoyé avec succès");
        } catch (...) {
            QMessageBox::critical(this, "Erreur", "Échec d'envoi SMS");
        }
    }
