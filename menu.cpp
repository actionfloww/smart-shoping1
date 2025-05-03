#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu),winners(nullptr),mariem(nullptr),magasin(nullptr)
{
    ui->setupUi(this);
    winners=new wins();
    magasin=new gestion_magasin();

    mariem=new MainWindow();
    ui->stackedWidget->addWidget(winners);
    ui->stackedWidget->addWidget(mariem);
    ui->stackedWidget->addWidget(magasin);

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

