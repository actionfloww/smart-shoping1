#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    ui->tableView->setModel(model);

    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir la base de données !");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAjouter_clicked()
{
    // Récupérer les valeurs des champs
    QString idStr = ui->lineEditID->text();
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString email = ui->lineEditEmail->text();
    QString telephoneStr = ui->lineEditTelephone->text();

    // Convertir les chaînes en nombres
    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "ID_CLIENT doit être un nombre valide !");
        return;
    }

    int telephone = telephoneStr.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "TELEPHONE doit être un nombre valide !");
        return;
    }

    // Donner une valeur par défaut à POINT_FIDELITE
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

    // Vérifier si l'ID est vide
    if (idStr.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez entrer un ID client !");
        return;
    }

    // Convertir l'ID en nombre
    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "L'ID client doit être un nombre valide !");
        return;
    }

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

    // Convertir le téléphone en nombre
    int telephone = telephoneStr.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "Le numéro de téléphone doit être un nombre valide !");
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

    // Vérifier si l'ID est vide
    if (idStr.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez entrer un ID client !");
        return;
    }

    // Convertir l'ID en nombre
    bool ok;
    int id = idStr.toInt(&ok);
    if (!ok) {
        QMessageBox::critical(this, "Erreur", "L'ID client doit être un nombre valide !");
        return;
    }

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

    // Exécuter la requête SQL pour supprimer le client
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
    QSqlQuery query("SELECT * FROM CLIENT");
    model->setQuery(query);
    ui->tableView->setModel(model);
}
