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
    void rechercherDynamiquement(const QString &text);
    void on_pushButton_fonctionalite_clicked();
    void on_pushButton_pack_clicked();
    void on_comboBox_categorie_currentTextChanged(const QString &text);
    void checkModifications();

private:
    void afficherProduits();
    void viderFormulaire();
    void configureDialog(QWidget *dialog, const QString &title);
    void applyTableViewStyle();

    Ui::MainWindow *ui;
    Produit *produit;
    QMessageBox *msgBox;
};

#endif // MAINWINDOW_H
