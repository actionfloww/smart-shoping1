#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class Produit;

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
    void remplirFormulaireDepuisSelection(const QModelIndex &index);
    void on_pushButton_exporter_clicked();
    void on_comboBox_tri_currentIndexChanged(int index);
    void on_pushButton_rechercher_clicked();
    void on_pushButton_renitialiser_clicked();
    void on_pushButton_fonctionalite_clicked();
    void on_pushButton_pack_clicked();
    void afficherNotificationPrix(int nbProduitsModifies);

private:
    void afficherProduits();
    void viderFormulaire();

    Ui::MainWindow *ui;
    Produit *produit;
    QMessageBox *msgBox;
};

#endif // MAINWINDOW_H
