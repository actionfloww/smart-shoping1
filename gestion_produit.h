


#ifndef GESTION_PRODUIT_H
#define GESTION_PRODUIT_H

#include <QMainWindow>
#include <QMessageBox>
#include "serialmanager.h" //arduino
namespace Ui {
class gestion_produit;
}

class Produit;

class gestion_produit : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_produit(QWidget *parent = nullptr);
    ~gestion_produit();

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
    void handleIdChecked(const QString &id, bool exists, const QString &etage); // arduino

private:
    void afficherProduits();
    void viderFormulaire();
    void configureDialog(QWidget *dialog, const QString &title);
    void applyTableViewStyle();

    Ui::gestion_produit *ui;
    Produit *produit;
    QMessageBox *msgBox;
    SerialManager *serialManager;//arduino

};

#endif // gestion_produit_H
