#include "gestionstock.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

// Constructeur par défaut
GestionStock::GestionStock() {}

// Constructeur sans id_stock (car auto-incrémenté)
GestionStock::GestionStock(QString nom_produit, int quantite, QString type, double prix_unitaire, QString date_ajout, QString fournisseur) {
    this->nom_produit = nom_produit;
    this->quantite = quantite;
    this->type = type;
    this->prix_unitaire = prix_unitaire;
    this->date_ajout = date_ajout;
    this->fournisseur = fournisseur;
}

GestionStock::GestionStock(int id_stock, QString nom_produit, int quantite, QString type, double prix_unitaire, QString date_ajout, QString fournisseur) {
    this->nom_produit = nom_produit;
    this->quantite = quantite;
    this->type = type;
    this->prix_unitaire = prix_unitaire;
    this->date_ajout = date_ajout;
    this->fournisseur = fournisseur;
    this->id_stock = id_stock;

}


// Méthode pour ajouter un produit
bool GestionStock::ajouter() {
    QSqlQuery query;
    query.prepare("INSERT INTO STOCKS (NOM_PRODUIT, QUANTITE, TYPE, PRIX_UNITAIRE, DATE_AJOUT, FOURNISSEUR) "
                  "VALUES (:nom_produit, :quantite, :type, :prix_unitaire, :date_ajout, :fournisseur)");

    query.bindValue(":nom_produit", nom_produit);
    query.bindValue(":quantite", quantite);
    query.bindValue(":type", type);
    query.bindValue(":prix_unitaire", prix_unitaire);
    query.bindValue(":date_ajout", date_ajout);
    query.bindValue(":fournisseur", fournisseur);

    if (!query.exec()) {
        qDebug() << "SQL Error: " << query.lastError().text();
        return false;
    }

    id_stock = query.lastInsertId().toInt();
    return true;
}

// Méthode pour afficher tous les produits
QList<GestionStock> GestionStock::afficher()
{
    QList<GestionStock> liste;
    QSqlQuery query;

    qDebug() << "Exécution de la requête SELECT...";
    if (!query.exec("SELECT * FROM STOCKS")) {
        qDebug() << "Erreur SQL:" << query.lastError().text();
        qDebug() << "Requête SQL:" << query.lastQuery();
        return liste;
    }

    qDebug() << "Nombre de résultats:" << query.size();

    while (query.next()) {
        liste.append(GestionStock(
            query.value("NOM_PRODUIT").toString(),
            query.value("QUANTITE").toInt(),
            query.value("TYPE").toString(),
            query.value("PRIX_UNITAIRE").toDouble(),
            query.value("DATE_AJOUT").toString(),
            query.value("FOURNISSEUR").toString()
            ));
    }

    qDebug() << "Produits trouvés:" << liste.size();
    return liste;
}

// Méthode pour afficher les produits par type
QList<GestionStock> GestionStock::afficherParType(const QString &type) {
    QList<GestionStock> stockList;
    QSqlQuery query;

    query.prepare("SELECT * FROM STOCKS WHERE TYPE = :type ORDER BY NOM_PRODUIT");
    query.bindValue(":type", type);

    if (!query.exec()) {
        qDebug() << "Erreur tri par type:" << query.lastError().text();
        return stockList;
    }

    while (query.next()) {
        stockList.append(GestionStock(
            query.value("NOM_PRODUIT").toString(),
            query.value("QUANTITE").toInt(),
            query.value("TYPE").toString(),
            query.value("PRIX_UNITAIRE").toDouble(),
            query.value("DATE_AJOUT").toString(),
            query.value("FOURNISSEUR").toString()
            ));
    }
    qDebug() << "Nombre de produits pour" << type << ":" << stockList.size();
    return stockList;
}

// Méthode pour supprimer un produit
bool GestionStock::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM STOCKS WHERE IDSTOCK = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "SQL Error: " << query.lastError().text();
        return false;
    }

    return true;
}

// Méthode pour modifier un produit
bool GestionStock::modifier(int idStock,QString nom_produit, int quantite, QString type, double prix_unitaire, QString date_ajout, QString fournisseur) {
    QSqlQuery query;
    query.prepare("UPDATE STOCKS SET "
                  "NOM_PRODUIT = :nom_produit ,"
                  "QUANTITE = :quantite, "
                  "TYPE = :type, "
                  "PRIX_UNITAIRE = :prix_unitaire, "
                  "DATE_AJOUT = :date_ajout, "
                  "FOURNISSEUR = :fournisseur "
                  "WHERE IDSTOCK=:id");

    query.bindValue(":nom_produit", nom_produit);
    query.bindValue(":quantite", quantite);
    query.bindValue(":type", type);
    query.bindValue(":prix_unitaire", prix_unitaire);
    query.bindValue(":date_ajout", date_ajout);
    query.bindValue(":fournisseur", fournisseur);

    query.bindValue(":id", idStock);

    if (!query.exec()) {
        qDebug() << "SQL Error: " << query.lastError().text();
        return false;
    }

    return true;
}

int GestionStock::GetIDByNomProduitAndFournisseurAndQuantite(QString nom, QString fournisseur, int Quantite)
{
    int id = 0;
    QSqlQuery query;
    query.prepare("SELECT IDSTOCK FROM STOCKS WHERE NOM_PRODUIT=:nom AND FOURNISSEUR=:f AND QUANTITE=:q");

    query.bindValue(":nom", nom);
    query.bindValue(":f", fournisseur); // Corrected placeholder
    query.bindValue(":q", Quantite);

    if (query.exec())
    {
        if (query.next())
        {
            id = query.value(0).toInt();
        }
    }
    else
    {
        // Handle query execution error
        qDebug() << "Query execution error:" << query.lastError().text();
    }

    return id;
}
