#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu),winners(nullptr),mariem(nullptr),magasin(nullptr),produit(nullptr),stock(nullptr)
{
    ui->setupUi(this);
    winners=new wins();

    mariem=new MainWindow();
    ui->stackedWidget->addWidget(winners);
    ui->stackedWidget->addWidget(mariem);


    magasin=new gestion_magasin();
    ui->stackedWidget->addWidget(magasin);

    produit=new gestion_produit();
    ui->stackedWidget->addWidget(produit);

    stock=new gestion_stock();
    ui->stackedWidget->addWidget(stock);

    ui->stackedWidget->setCurrentWidget(produit);


}

menu::~menu()
{
    delete ui;
}



void menu::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentWidget(mariem);

}


void menu::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(winners);

}


void menu::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentWidget(magasin);

}


void menu::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentWidget(produit);

}


void menu::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentWidget(stock);

}

