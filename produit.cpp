#include "produit.h"
#include "qdatetime.h"
#include "qsqlerror.h"
#include <QSqlQuery>
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlRecord>
#include "connexion.h"

Produit::Produit(QWidget *parent) : QWidget(parent) {
    // Constructeur (initialisation si nécessaire)
}

double Produit::calculerPrixDynamique(double prixOriginal, const QString &categorie,
                                      const QDate &dateLimite, const QDate &saisonFin) {
    QDate aujourdhui = QDate::currentDate();
    double nouveauPrix = prixOriginal;

    // Calculer les jours restants pour date limite et fin de saison
    int joursAvantDateLimite = aujourdhui.daysTo(dateLimite);
    int joursAvantFinSaison = aujourdhui.daysTo(saisonFin);

    // Appliquer les règles de réduction
    if (categorie == "Mode & Accessoires" || categorie == "Maison & Décoration") {
        // Réduction basée sur la fin de saison
        if (joursAvantFinSaison <= 14) {
            nouveauPrix = prixOriginal * 0.5; // 50% de réduction
        } else if (joursAvantFinSaison > 14 && joursAvantFinSaison <= 30) {
            nouveauPrix = prixOriginal * 0.75; // 25% de réduction
        }
    }
    else if (categorie == "Alimentation" || categorie == "Beauté & Cosmétiques") {
        // Réduction basée sur la date limite
        if (joursAvantDateLimite <= 14) {
            nouveauPrix = prixOriginal * 0.5; // 50% de réduction
        } else if (joursAvantDateLimite > 14 && joursAvantDateLimite <= 30) {
            nouveauPrix = prixOriginal * 0.75; // 25% de réduction
        }
    }

    return nouveauPrix;
}

void Produit::mettreAJourPrixDynamiques(QTableView *tableView) {
    QSqlQuery query;
    QDate aujourdhui = QDate::currentDate();
    int produitsModifies = 0; // Ajoutez cette déclaration

    if (!query.exec("SELECT IDPRODUIT, CATEGORIE, PRIX, DATE_LIMITE, SAISON_FIN FROM PRODUITS")) {
        qDebug() << "Erreur lors de la récupération des produits:" << query.lastError().text();
        return;
    }

    while (query.next()) {
        int id = query.value(0).toInt();
        QString categorie = query.value(1).toString();
        double prixOriginal = query.value(2).toDouble();
        QDate dateLimite = query.value(3).toDate();
        QDate saisonFin = query.value(4).toDate();

        double nouveauPrix = calculerPrixDynamique(prixOriginal, categorie, dateLimite, saisonFin);

        if (nouveauPrix != prixOriginal) {
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE PRODUITS SET PRIX = :nouveauPrix WHERE IDPRODUIT = :id");
            updateQuery.bindValue(":nouveauPrix", nouveauPrix);
            updateQuery.bindValue(":id", id);

            if (updateQuery.exec()) {
                produitsModifies++; // Incrémentez le compteur seulement si la mise à jour réussit
            } else {
                qDebug() << "Erreur lors de la mise à jour du prix pour le produit" << id
                         << ":" << updateQuery.lastError().text();
            }
        }
    }

    // Déplacez l'émission du signal après la boucle
    if (produitsModifies > 0) {
        emit prixMisAJour(produitsModifies);
    }
}


bool Produit::ajouterProduit(const QString &nom, const QString &categorie, double prix,
                             const QString &description, const QString &gamme,
                             const QDate &date_limite, const QDate &saison_fin,
                             const QString &est_pack) {
    QSqlQuery query;
    QSqlDatabase::database().transaction();

    // 1. Calculer le prix dynamique pour le nouveau produit seulement
    double prixFinal = calculerPrixDynamique(prix, categorie, date_limite, saison_fin);

    // 2. Recherche de l'IDSTOCK (inchangé)
    query.prepare("SELECT IDSTOCK FROM STOCKS WHERE TRIM(NOM_PRODUIT) = TRIM(:nom)");
    query.bindValue(":nom", nom);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Recherche dans STOCKS échouée: " + query.lastError().text());
        QSqlDatabase::database().rollback();
        return false;
    }

    QVariant idStock;
    if (query.next()) {
        idStock = query.value(0);
        qDebug() << "IDSTOCK trouvé:" << idStock;
    } else {
        qDebug() << "Aucun IDSTOCK trouvé, utilisation de NULL";
        idStock = QVariant(QVariant::Int);
    }

    // 3. Insertion du produit avec le prix final calculé
    query.prepare("INSERT INTO PRODUITS (NOM, CATEGORIE, PRIX, DESCRIPTION, GAMME, "
                  "DATE_LIMITE, SAISON_FIN, EST_PACK, IDSTOCK) "
                  "VALUES (:nom, :categorie, :prix, :description, :gamme, "
                  ":date_limite, :saison_fin, :est_pack, :idstock)");

    query.bindValue(":nom", nom);
    query.bindValue(":categorie", categorie);
    query.bindValue(":prix", prixFinal); // Utilisez le prix final calculé seulement pour ce nouveau produit
    query.bindValue(":description", description);
    query.bindValue(":gamme", gamme);
    query.bindValue(":date_limite", date_limite);
    query.bindValue(":saison_fin", saison_fin);
    query.bindValue(":est_pack", est_pack);
    query.bindValue(":idstock", idStock.isNull() ? QVariant(QVariant::Int) : idStock.toInt());

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Échec de l'insertion:\n" + query.lastError().text());
        QSqlDatabase::database().rollback();
        return false;
    }

    QSqlDatabase::database().commit();
    return true;
}

void Produit::afficherProduits(QTableView *tableView) {
    if (!connexion::db.isOpen()) {
        qDebug() << "Erreur : La base de données n'est pas ouverte !";
        return;
    }

    // NE PAS appeler mettreAJourPrixDynamiques() ici
    // Afficher simplement les produits tels qu'ils sont dans la base

    QSqlTableModel *model = new QSqlTableModel(nullptr, connexion::db);
    model->setTable("PRODUITS");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    if (!model->select()) {
        qDebug() << "Erreur lors de la sélection des données :" << model->lastError().text();
        return;
    }

    tableView->setModel(model);
    tableView->resizeColumnsToContents();
}

bool Produit::modifierProduit(int id, const QString &nom, const QString &categorie, double prix,
                              const QString &description, const QString &gamme,
                              const QDate &date_limite, const QDate &saison_fin,
                              const QString &est_pack) {
    QSqlQuery query;
    query.prepare("UPDATE PRODUITS SET NOM = :nom, CATEGORIE = :categorie, PRIX = :prix, "
                  "DESCRIPTION = :description, GAMME = :gamme, DATE_LIMITE = :date_limite, "
                  "SAISON_FIN = :saison_fin, EST_PACK = :est_pack "
                  "WHERE IDPRODUIT = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":categorie", categorie);
    query.bindValue(":prix", prix);
    query.bindValue(":description", description);
    query.bindValue(":gamme", gamme);
    query.bindValue(":date_limite", date_limite);
    query.bindValue(":saison_fin", saison_fin);
    query.bindValue(":est_pack", est_pack);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Échec de la modification du produit : " + query.lastError().text());
        return false;
    }

    return true;
}

bool Produit::supprimerProduit(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM PRODUITS WHERE IDPRODUIT = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Erreur", "Échec de la suppression du produit : " + query.lastError().text());
        return false;
    }
    return true;
}

void Produit::trierParCategorie(QTableView *tableView)
{
    if (!tableView) return;

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PRODUITS ORDER BY CATEGORIE ASC");

    if (model->lastError().isValid()) {
        qDebug() << "Erreur de tri:" << model->lastError().text();
        return;
    }

    tableView->setModel(model);
}

void Produit::trierParPrixDescendant(QTableView *tableView)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PRODUITS ORDER BY PRIX DESC");
    tableView->setModel(model);
}

void Produit::trierParPack(QTableView *tableView)
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM PRODUITS ORDER BY EST_PACK ASC");
    tableView->setModel(model);
}

void Produit::rechercherProduits(const QString &motCle, QTableView *tableView)
{
    if (!tableView || motCle.isEmpty()) {
        afficherProduits(tableView);
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr = "SELECT * FROM produits WHERE "
                       "NOM LIKE :motCle OR "
                       "CATEGORIE LIKE :motCle OR "
                       "DESCRIPTION LIKE :motCle OR "
                       "GAMME LIKE :motCle";

    QSqlQuery query;
    query.prepare(queryStr);
    query.bindValue(":motCle", "%" + motCle + "%");

    if (query.exec()) {
        model->setQuery(query);
        tableView->setModel(model);
    } else {
        qDebug() << "Erreur de recherche:" << query.lastError().text();
    }
}
