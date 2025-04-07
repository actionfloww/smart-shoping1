#ifndef PRODUIT_H
#define PRODUIT_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QMessageBox>
#include <QTableView>

class Produit : public QWidget
{
    Q_OBJECT
signals:
    void prixMisAJour(int nbProduitsModifies);
public:
    explicit Produit(QWidget *parent = nullptr);

    // Méthodes CRUD
    bool ajouterProduit(const QString &nom, const QString &categorie, double prix,
                        const QString &description, const QString &gamme,
                        const QDate &date_limite, const QDate &saison_fin,
                        const QString &est_pack);

    void afficherProduits(QTableView *tableView);

    bool modifierProduit(int id, const QString &nom, const QString &categorie, double prix,
                         const QString &description, const QString &gamme,
                         const QDate &date_limite, const QDate &saison_fin,
                         const QString &est_pack);

    bool supprimerProduit(int id);

    void trierParCategorie(QTableView *tableView);
    void trierParPrixDescendant(QTableView *tableView);
    void trierParPack(QTableView *tableView);

    void rechercherProduits(const QString &motCle, QTableView *tableView);

    // Nouvelle méthode pour la gestion dynamique des prix
    void mettreAJourPrixDynamiques(QTableView *tableView);

private:
    double calculerPrixDynamique(double prixOriginal, const QString &categorie,
                                 const QDate &dateLimite, const QDate &saisonFin);
    QSqlQuery query;
    QSqlDatabase db;
};

#endif // PRODUIT_H
