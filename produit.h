#ifndef PRODUIT_H
#define PRODUIT_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlDatabase>  // ✅ Ajout de l'inclusion pour la base de données
#include <QTableWidget>
#include <QMessageBox>
#include <QTableView>

class Produit : public QWidget
{
    Q_OBJECT

public:
    explicit Produit(QWidget *parent = nullptr);

    // Méthodes CRUD
    bool ajouterProduit(int id, const QString &nom, const QString &categorie, double prix, const QString &description, const QString &gamme, const QDate &date_limite, const QDate &saison_fin, int seuil_stock, const QString &est_pack);
    void afficherProduits(QTableView *tableView);
    bool modifierProduit(int id, const QString &nom, const QString &categorie, double prix, const QString &description, const QString &gamme, const QDate &date_limite, const QDate &saison_fin, int seuil_stock, const QString &est_pack);
    bool supprimerProduit(int id);

private:
    QSqlQuery query;
    QSqlDatabase db;  // ✅ Ajout de la connexion à la base de données
};

#endif // PRODUIT_H
