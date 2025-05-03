#ifndef MENU_H
#define MENU_H

#include <QDialog>

#include "mainwindow.h"
#include "wins.h"
#include "gestion_magasin.h"

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

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::menu *ui;
    wins *winners;
    MainWindow *mariem;

    gestion_magasin *magasin;
};

#endif // MENU_H
