#ifndef GESTIONSTOCK_H
#define GESTIONSTOCK_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QList>

class GestionStock {
private:
    int id_stock;
    QString nom_produit;
    int quantite;
    QString type;
    double prix_unitaire;
    QString date_ajout;
    QString fournisseur;

public:
    GestionStock();
    GestionStock(int idStock,QString nom_produit, int quantite, QString type,
                 double prix_unitaire, QString date_ajout, QString fournisseur);
    GestionStock(QString nom_produit, int quantite, QString type,
                 double prix_unitaire, QString date_ajout, QString fournisseur);
    // Getters
    int getIdStock() const { return id_stock; }
    QString getNomProduit() const { return nom_produit; }
    int getQuantite() const { return quantite; }
    QString getType() const { return type; }
    double getPrixUnitaire() const { return prix_unitaire; }
    QString getDateAjout() const { return date_ajout; }
    QString getFournisseur() const { return fournisseur; }

    // Méthodes de base de données
    bool ajouter();
    static QList<GestionStock> afficher();
    static QList<GestionStock> afficherParType(const QString &type);
    bool supprimer(int id);
    bool modifier(int idstock,QString nom_produit, int quantite, QString type, double prix_unitaire, QString date_ajout, QString fournisseur);
    int GetIDByNomProduitAndFournisseurAndQuantite(QString nom,QString fournisseur,int Quantite);
};

#endif // GESTIONSTOCK_H
