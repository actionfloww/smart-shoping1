#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menu),winners(nullptr),mariem(nullptr)
{
    ui->setupUi(this);
    winners=new wins();
    mariem=new MainWindow();
    ui->stackedWidget->addWidget(winners);
    ui->stackedWidget->addWidget(mariem);

}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_19_clicked(){
    ui->stackedWidget->setCurrentWidget(winners);
}

void menu::on_pushButton_5_clicked(){
    ui->stackedWidget->setCurrentWidget(mariem);
}
