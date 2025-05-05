#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "mainwindow.h"
#include "wins.h"
#include "gestion_magasin.h"
#include "gestion_produit.h"
#include "gestion_stock.h"
#include "gestion_employe.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();
    void setUserRole(const QString &role); // Nouveau setter pour le rôle

private slots:
    void on_pushButton_11_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_12_clicked();

private:
    Ui::menu *ui;
    wins *winners;
    MainWindow *mariem;
    gestion_magasin *magasin;
    gestion_produit *produit;
    gestion_stock *stock;
    gestion_employe *employe;
    QString currentUserRole; // Variable pour stocker le rôle
};

#endif // MENU_H
