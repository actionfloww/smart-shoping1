#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu), winners(nullptr), mariem(nullptr), magasin(nullptr), produit(nullptr), stock(nullptr), employe(nullptr)
{
    ui->setupUi(this);

    produit = new gestion_produit();
    ui->stackedWidget->addWidget(produit);
    ui->stackedWidget->setCurrentWidget(produit);
}

menu::~menu()
{
    delete ui;
}

void menu::setUserRole(const QString &role)
{
    currentUserRole = role.toUpper().trimmed();
    qDebug() << "Received role in menu:" << currentUserRole; // Vérifie le rôle reçu
    // Désactiver les boutons 6 et 5 si l'utilisateur est un employé
    if (currentUserRole == "EMPLOYE") {
        qDebug() << "Disabling buttons 5 and 6 for EMPLOYE role";
        ui->pushButton_6->setEnabled(false); // Bouton pour clients
        ui->pushButton_5->setEnabled(false); // Bouton pour employés
    } else {
        qDebug() << "Role is not EMPLOYE, buttons remain enabled";
    }
}

// Les autres slots restent inchangés
void menu::on_pushButton_11_clicked()
{
    mariem = new MainWindow();
    ui->stackedWidget->addWidget(mariem); // Événement
    ui->stackedWidget->setCurrentWidget(mariem);
}

void menu::on_pushButton_6_clicked()
{
    winners = new wins();
    ui->stackedWidget->addWidget(winners); // Clients
    ui->stackedWidget->setCurrentWidget(winners);
}

void menu::on_pushButton_10_clicked()
{
    magasin = new gestion_magasin();
    ui->stackedWidget->addWidget(magasin);
    ui->stackedWidget->setCurrentWidget(magasin);
}

void menu::on_pushButton_9_clicked()
{
    produit = new gestion_produit();
    ui->stackedWidget->addWidget(produit);
    ui->stackedWidget->setCurrentWidget(produit);
}

void menu::on_pushButton_8_clicked()
{
    stock = new gestion_stock();
    ui->stackedWidget->addWidget(stock);
    ui->stackedWidget->setCurrentWidget(stock);
}

void menu::on_pushButton_5_clicked()
{
    employe = new gestion_employe(); // Employés
    ui->stackedWidget->addWidget(employe);
    ui->stackedWidget->setCurrentWidget(employe);
}

void menu::on_pushButton_12_clicked()
{
    QApplication::quit();
}
