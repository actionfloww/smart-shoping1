#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>
#include "produit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Ajouter_clicked();
    void on_pushButton_Modifier_clicked();
    void on_pushButton_Supprimer_clicked();
    void remplirFormulaireDepuisSelection(const QModelIndex &index);  // Déclaration modifiée

private:
    void afficherProduits();
    void viderFormulaire();  // Déclaration modifiée

    Ui::MainWindow *ui;
    Produit *produit;
};

#endif // MAINWINDOW_H
