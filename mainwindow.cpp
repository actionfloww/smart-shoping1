#include "mainwindow.h"
#include "Event.h"
#include "ui_mainwindow.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),event(new Event())
{
    ui->setupUi(this);
    ui->logo->setPixmap(QPixmap("C:\\Users\\MSI\\Documents\\projet\\logo.png"));
    ui->calendar_3->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\calendar.png"));
    ui->analytics_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\analytics.png"));
    ui->P->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\pdf.png"));
    ui->sup_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\update.png"));
    ui->filter->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\filter.png"));
    ui->search_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\search.png"));
    ui->sup->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\bin.png"));
    ui->tableView->setModel(event->afficher());
    ui->tableView->resizeColumnsToContents();
    ui->tableView->setStyleSheet(
        "QTableView::item:selected { "
        "background-color: #e27396; "  // Jaune doré
        "color: black; "
        "}"
        );
    connect(ui->sup_2, &QPushButton::clicked, this, &MainWindow::on_sup_2_clicked);
    connect(ui->update, &QPushButton::clicked, this, &MainWindow::on_update_clicked);

    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir la base de données !");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
    delete event;
}


void MainWindow::actualiserTableau()
{
    // Créer un modèle de requête SQL
    QSqlQueryModel *model = new QSqlQueryModel(this);

    // Exécuter une requête pour récupérer les colonnes spécifiques (sans l'ID si non affiché)
    model->setQuery("SELECT NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT FROM EVENEMENTS");

    // Définir les en-têtes de colonnes
    model->setHeaderData(0, Qt::Horizontal, tr("Nom de l'événement")); // NOM_EVENT
    model->setHeaderData(1, Qt::Horizontal, tr("Description"));        // DESCRIPTION
    model->setHeaderData(2, Qt::Horizontal, tr("Type"));               // TYPE
    model->setHeaderData(3, Qt::Horizontal, tr("Date de début"));      // DATE_DEBUT
    model->setHeaderData(4, Qt::Horizontal, tr("Date de fin"));        // DATE_FIN
    model->setHeaderData(5, Qt::Horizontal, tr("Produit"));            // PRODUIT

    // Appliquer le modèle à la QTableView
    ui->tableView->setModel(model);

    // Redimensionner les colonnes pour s'adapter au contenu
    ui->tableView->resizeColumnsToContents();
}


void MainWindow::on_pushButton_clicked()
{

    // Récupération des données depuis les champs de l'interface
    QString idProduit = ui->lineEdit_7->text();
    QString nomEvent = ui->lineEdit_4->text();
    QString description = ui->textEdit_2->toPlainText();
    QString type = ui->lineEdit_6->text();
    QString dateDebut = ui->dateEdit_4->text();
    QString dateFin = ui->dateEdit_3->text();

    // Contrôle de saisie : vérifier que tous les champs sont remplis
    if (idProduit.isEmpty() || nomEvent.isEmpty() || description.isEmpty() || type.isEmpty() || dateDebut.isEmpty() || dateFin.isEmpty()) {
        QMessageBox::warning(this, "Champs vides", "Tous les champs doivent être remplis !");
        return;  // Arrête l'exécution de la fonction si un champ est vide
    }

    // Vérifier que idProduit est un nombre
    bool isNumber;
    idProduit.toInt(&isNumber);
    if (!isNumber) {
        QMessageBox::warning(this, "Erreur de saisie", "L'ID du produit doit être un nombre !");
        return;  // Arrête l'exécution si idProduit n'est pas un nombre
    }

    // Vérifier que nomEvent ne contient pas de chiffres
    QRegularExpression regex("\\d");  // Expression régulière pour détecter les chiffres
    if (nomEvent.contains(regex)) {
        QMessageBox::warning(this, "Erreur de saisie", "Le nom de l'événement ne doit pas contenir de chiffres !");
        return;  // Arrête l'exécution si nomEvent contient des chiffres
    }

    // Vérifier que type est soit "solde", "promotion" ou "réduction"
    QStringList typesValides = {"solde", "promotion", "réduction"};
    if (!typesValides.contains(type.toLower())) {
        QMessageBox::warning(this, "Erreur de saisie", "Le type doit être 'solde', 'promotion' ou 'réduction' !");
        return;  // Arrête l'exécution si le type est invalide
    }

    // Vérification des dates (date de début doit être avant la date de fin)
    QDate debut = QDate::fromString(dateDebut, "dd/MM/yyyy");
    QDate fin = QDate::fromString(dateFin, "dd/MM/yyyy");
    if (debut > fin) {
        QMessageBox::warning(this, "Erreur de date", "La date de début doit être antérieure à la date de fin !");
        return;  // Arrête l'exécution de la fonction si les dates sont invalides
    }

    // Préparation de la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO EVENEMENTS (NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT) "
                  "VALUES (:nomEvent, :description, :type, TO_DATE(:dateDebut, 'DD/MM/YYYY'), TO_DATE(:dateFin, 'DD/MM/YYYY'), :idProduit)");
    query.bindValue(":nomEvent", nomEvent);
    query.bindValue(":description", description);
    query.bindValue(":type", type);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateFin", dateFin);
    query.bindValue(":idProduit", idProduit);

    // Exécution et vérification de la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Événement ajouté avec succès !");
        viderFormulaire();
        ui->tableView->setModel(event->afficher());
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout de l'événement !");
    }

}
void MainWindow::on_tab_affichage_clicked(const QModelIndex &index)
{
    if (!index.isValid()) {
        return;
    }


    QString nomEvent = ui->tableView->model()->data(index.siblingAtColumn(0)).toString();
    QString description = ui->tableView->model()->data(index.siblingAtColumn(1)).toString();
    QString type = ui->tableView->model()->data(index.siblingAtColumn(2)).toString();
    QString dateDebut = ui->tableView->model()->data(index.siblingAtColumn(3)).toString();
    QString dateFin = ui->tableView->model()->data(index.siblingAtColumn(4)).toString();
    QString produit = ui->tableView->model()->data(index.siblingAtColumn(5)).toString();


    ui->lineEdit_4->setText(nomEvent);
    ui->textEdit_2->setPlainText(description);
    ui->lineEdit_6->setText(type);
    ui->dateEdit_4->setDate(QDate::fromString(dateDebut, "yyyy-MM-dd"));
    ui->dateEdit_3->setDate(QDate::fromString(dateFin, "yyyy-MM-dd"));
    ui->lineEdit_7->setText(produit);
    //actualiserTableau();
    ui->tableView->setModel(event->afficher());
}

void MainWindow::on_sup_clicked()
{
    QItemSelectionModel *selection = ui->tableView->selectionModel();

    if (!selection->hasSelection()) {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une ligne à supprimer.");
        return;
    }

    QModelIndex index = selection->currentIndex();

    QString nomEvent = ui->tableView->model()->data(index.siblingAtColumn(0)).toString();

    if (nomEvent.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Nom de l'événement invalide. Veuillez sélectionner une ligne valide.");
        return;
    }

    // Recherche de l'ID de l'événement à partir du nom
    QSqlQuery query;
    query.prepare("SELECT ID_EVENT FROM EVENEMENTS WHERE NOM_EVENT = :nomEvent");
    query.bindValue(":nomEvent", nomEvent);
    query.exec();

    if (query.next()) {
        int eventID = query.value(0).toInt();

        if (eventID <= 0) {
            QMessageBox::warning(this, "Erreur", "ID invalide. Impossible de trouver l'ID pour l'événement.");
            return;
        }

        // Demande de confirmation
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer cet événement ?",
                                      QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            // Créez un objet Event pour supprimer l'événement avec l'ID trouvé

            bool test = event->supprimer(eventID);  // Appel à la méthode de suppression avec la méthode correcte

            if (test) {
                QMessageBox::information(this, "Succès", "Suppression effectuée.");
                ui->tableView->setModel(event->afficher());  // Rafraîchir l'affichage
            } else {
                QMessageBox::critical(this, "Erreur", "Suppression non effectuée. Vérifiez l'ID.");
            }
        }
    } else {
        QMessageBox::warning(this, "Erreur", "Événement non trouvé dans la base de données.");
    }
}



void MainWindow::on_sup_2_clicked()
{
    QString nomEvent = ui->updatee->text().trimmed();

    if (nomEvent.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer le nom de l'événement.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM EVENEMENTS WHERE NOM_EVENT = :nomEvent");
    query.bindValue(":nomEvent", nomEvent);

    if (!query.exec()) {
        QMessageBox::critical(this, "Erreur", "Échec de la récupération des données.\n" );
        return;
    }

    if (query.next()) {
        // Récupérer les données de l'événement
        int idEvent = query.value("ID_EVENT").toInt();
        QString description = query.value("DESCRIPTION").toString();
        QString type = query.value("TYPE").toString();
        QDate dateDebut = query.value("DATE_DEBUT").toDate();
        QDate dateFin = query.value("DATE_FIN").toDate();
        QString produit = query.value("PRODUIT").toString();

        // Remplir les champs du formulaire avec les données récupérées
        ui->textEdit_2->setPlainText(description);
        ui->lineEdit_6->setText(type);
        ui->dateEdit_4->setDate(dateDebut);
        ui->dateEdit_3->setDate(dateFin);
        ui->lineEdit_7->setText(produit);
        ui->lineEdit_4->setText(nomEvent);

        // Stocker l'ID de l'événement pour l'utiliser lors de la mise à jour
        currentEventID = idEvent;
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun événement trouvé avec ce nom.");
    }
}

void MainWindow::on_update_clicked()
{
    // Vérifier si un événement est sélectionné
    if (currentEventID <= 0) {
        QMessageBox::warning(this, "Erreur", "Veuillez charger un événement à modifier.");
        return;
    }

    // Récupérer les données modifiées depuis le formulaire
    QString nomEvent = ui->lineEdit_4->text().trimmed(); // Champ pour le nom de l'événement
    QString description = ui->textEdit_2->toPlainText().trimmed();
    QString type = ui->lineEdit_6->text().trimmed();
    QDate dateDebut = ui->dateEdit_4->date();
    QDate dateFin = ui->dateEdit_3->date();
    QString idProduitStr = ui->lineEdit_7->text().trimmed(); // Renommer pour éviter la redéfinition

    // Vérification des champs obligatoires
    if (nomEvent.isEmpty() || type.isEmpty() || idProduitStr.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }

    // Conversion de idProduitStr (QString) en idProduit (int)
    bool conversionOk;
    int idProduit = idProduitStr.toInt(&conversionOk); // Utiliser un bool pour vérifier la conversion

    if (!conversionOk) {
        QMessageBox::warning(this, "Erreur", "Le champ produit doit contenir un entier valide.");
        return;
    }

    Event event;  // Déclare un objet Event (pas un pointeur)

    // Définition des attributs via les setters
    event.setNomEvent(nomEvent);
    event.setDescription(description);
    event.setType(type);
    event.setDateDebut(dateDebut);
    event.setDateFin(dateFin);
    event.setIdProduit(idProduit);


    // Appeler la méthode de mise à jour
    bool result = event.modifier(currentEventID);

    if (result) {
        QMessageBox::information(this, "Succès", "Événement modifié avec succès !");
        viderFormulaire();
        ui->tableView->setModel(event.afficher());  // Rafraîchir l'affichage
    } else {
        QMessageBox::critical(this, "Erreur", "La modification a échoué.\nDétails : " );
    }


}

void MainWindow::viderFormulaire()
{
    ui->lineEdit_7->clear();
    ui->lineEdit_4->clear();
    ui->textEdit_2->clear();
    ui->lineEdit_6->clear();
    ui->dateEdit_4->setDate(QDate::currentDate());
    ui->dateEdit_3->setDate(QDate::currentDate());
}
