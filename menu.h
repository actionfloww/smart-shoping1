#ifndef MENU_H
#define MENU_H

#include <QDialog>

#include "mainwindow.h"
#include "wins.h"



namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_19_clicked();
    void on_pushButton_5_clicked();

private:
    Ui::menu *ui;
    wins *winners;
    MainWindow *mariem;

};

#endif // MENU_H
