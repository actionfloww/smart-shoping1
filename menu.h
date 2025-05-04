#ifndef MENU_H
#define MENU_H

#include <QDialog>

#include "mainwindow.h"
#include "wins.h"
#include "gestion_magasin.h"
#include "gestion_produit.h"
#include "gestion_stock.h"

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

    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::menu *ui;
    wins *winners;
    MainWindow *mariem;

    gestion_magasin *magasin;
    gestion_produit *produit;
    gestion_stock *stock;
};

#endif // MENU_H
