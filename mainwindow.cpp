#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    QString id = ui->lineEditID->text();
    QString nom = ui->lineEditNom->text();
    QString prenom = ui->lineEditPrenom->text();
    QString email = ui->lineEditEmail->text();
    QString telephone = ui->lineEditTelephone->text();
    double totalAchat = ui->lineEditTotalAchat->text().toDouble();
    //QString derniereVisite = ui->dateEditDerniereVisite->text();

    QSqlQuery query;
    query.prepare("INSERT INTO CLIENT (ID, NOM, PRENOM, EMAIL, TELEPHONE, TOTALACHAT) "
                  "VALUES (:id, :nom, :prenom, :email, :telephone, :totalAchat)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":totalAchat", totalAchat);
    //query.bindValue(":derniereVisite", derniereVisite);

    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Client ajouté avec succès !");
    }
}
