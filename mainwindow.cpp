#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->logo->setPixmap(QPixmap("C:\\Users\\MSI\\Documents\\projet\\logo.png"));
    ui->calendar_3->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\calendar.png"));
    ui->analytics_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\analytics.png"));
    ui->P->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\pdf.png"));
    ui->filter->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\filter.png"));
    ui->search_2->setIcon(QPixmap("C:\\Users\\MSI\\Documents\\projet\\search.png"));



    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir la base de données !");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
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

    // Préparation de la requête SQL
    QSqlQuery query;
    query.prepare("INSERT INTO EVENEMENTS ( NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT) "
                  "VALUES ( :nomEvent, :description, :type, TO_DATE(:dateDebut, 'DD/MM/YYYY'), TO_DATE(:dateFin, 'DD/MM/YYYY'), :idProduit)");
    query.bindValue(":nomEvent", nomEvent);
    query.bindValue(":description", description);
    query.bindValue(":type", type);
    query.bindValue(":dateDebut", dateDebut);
    query.bindValue(":dateFin", dateFin);
    query.bindValue(":idProduit", idProduit);

    // Exécution et vérification de la requête
    if (query.exec()) {
        QMessageBox::information(this, "Succès", "Événement ajouté avec succès !");
    } else {
        QMessageBox::critical(this, "Erreur", "Échec de l'ajout de l'événement !");
    }
}
