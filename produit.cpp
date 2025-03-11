#include "produit.h"
#include "qdatetime.h"
#include "qsqlerror.h"
#include <QSqlQuery>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QSqlTableModel>

#include "connexion.h"

Produit::Produit(QWidget *parent) : QWidget(parent) {
    // Constructeur (initialisation si nécessaire)
}

bool Produit::ajouterProduit(int id, const QString &nom, const QString &categorie, double prix, const QString &description, const QString &gamme, const QDate &date_limite, const QDate &saison_fin, int seuil_stock, const QString &est_pack) {
    query.prepare("INSERT INTO PRODUITS (IDPRODUIT, NOM, CATEGORIE, PRIX, DESCRIPTION, GAMME, DATE_LIMITE, SAISON_FIN, SOEUIL_STOCK, EST_PACK) "
                  "VALUES (:id, :nom, :categorie, :prix, :description, :gamme, :date_limite, :saison_fin, :seuil_stock, :est_pack)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":categorie", categorie);
    query.bindValue(":prix", prix);
    query.bindValue(":description", description);
    query.bindValue(":gamme", gamme);
    query.bindValue(":date_limite",date_limite);
    query.bindValue(":saison_fin", saison_fin);

    query.bindValue(":seuil_stock", seuil_stock);
    query.bindValue(":est_pack", est_pack);

    if (query.exec()) {
        return true; // Succès
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Échec de l'ajout du produit : " + query.lastError().text());
        return false; // Échec
    }
}

// Afficher les produits
void Produit::afficherProduits(QTableView *tableView) {
    if (!connexion::db.isOpen()) {
        qDebug() << "Erreur : La base de données n'est pas ouverte !";
        return;
    }

    QSqlTableModel *model = new QSqlTableModel(nullptr, connexion::db);
    model->setTable("PRODUITS");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    if (!model->select()) {
        qDebug() << "Erreur lors de la sélection des données :" << model->lastError().text();
        return;
    }

    tableView->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, tr("Catégorie"));
    model->setHeaderData(3, Qt::Horizontal, tr("Prix"));

    tableView->resizeColumnsToContents();
}
// Modifier un produit
bool Produit::modifierProduit(int id, const QString &nom, const QString &categorie, double prix, const QString &description, const QString &gamme, const QDate &date_limite, const QDate &saison_fin, int seuil_stock, const QString &est_pack) {
    query.prepare("UPDATE PRODUITS SET NOM = :nom, CATEGORIE = :categorie, PRIX = :prix, DESCRIPTION = :description, GAMME = :gamme, DATE_LIMITE = :date_limite, SAISON_FIN = :saison_fin, SOEUIL_STOCK = :seuil_stock, EST_PACK = :est_pack "
                  "WHERE IDPRODUIT = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":categorie", categorie);
    query.bindValue(":prix", prix);
    query.bindValue(":description", description);
    query.bindValue(":gamme", gamme);
    query.bindValue(":date_limite", date_limite);
    query.bindValue(":saison_fin", saison_fin);
    query.bindValue(":seuil_stock", seuil_stock);
    query.bindValue(":est_pack", est_pack);

    if (query.exec()) {
        return true; // Succès
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Échec de la modification du produit : " + query.lastError().text());
        return false; // Échec
    }
}

// Supprimer un produit
bool Produit::supprimerProduit(int id) {
    query.prepare("DELETE FROM PRODUITS WHERE IDPRODUIT = :id");
    query.bindValue(":id", id);

    if (query.exec()) {
        return true; // Succès
    } else {
        QMessageBox::critical(nullptr, "Erreur", "Échec de la suppression du produit : " + query.lastError().text());
        return false; // Échec
    }
}
