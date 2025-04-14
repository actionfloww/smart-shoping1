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
#include<QStandardItemModel>
#include<QStandardItem>
#include<QDir>
#include<QCoreApplication>
#include <QHeaderView>

Produit::Produit(QWidget *parent) : QWidget(parent) {
    // Initialisations si nécessaires
}
void Produit::sauvegarderRemiseJSON(const QString &nom, const QString &categorie,
                                    double prixOriginal, double prixRemise,
                                    const QString &natureRemise,
                                    double pourcentage,
                                    int joursRestants,
                                    const QString &etat) {
    // Créer le dossier si nécessaire
    QDir().mkpath(QCoreApplication::applicationDirPath() + "/remises");
    QString jsonFilePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";

    QJsonArray remisesArray;
    QFile file(jsonFilePath);

    // Lire le fichier existant
    if (file.exists() && file.open(QIODevice::ReadOnly)) {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        remisesArray = doc.array();
        file.close();
    }

    // Créer nouvel objet avec toutes les infos
    QJsonObject remise;
    remise["nom"] = nom;
    remise["categorie"] = categorie;
    remise["prix_original"] = prixOriginal;
    remise["prix_remise"] = prixRemise;
    remise["nature_remise"] = natureRemise;
    remise["pourcentage"] = pourcentage;
    remise["jours_restants"] = joursRestants;
    remise["etat"] = etat;


    // Ajouter au tableau
    remisesArray.append(remise);

    // Sauvegarder
    if (file.open(QIODevice::WriteOnly)) {
        file.write(QJsonDocument(remisesArray).toJson());
        file.close();
    }
}

void Produit::afficherProduitsEnRemise(QTableView *tableView) {
    QString filePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";
    QFile file(filePath);

    if (!file.exists()) {
        qDebug() << "Aucun fichier de remise trouvé à l'emplacement:" << filePath;
        return;
    }

    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Erreur ouverture fichier:" << file.errorString();
        return;
    }

    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();

    QStandardItemModel *model = new QStandardItemModel();
    model->setHorizontalHeaderLabels({"NOM", "CATEGORIE", "PRIX ORIGINAL", "PRIX EN REMISE",
                                      "NATURE DU REMISE", "POURCENTAGE DU REMISE", "NOMBRE DE JOURS RESTANT", "ÉTAT"});

    foreach (const QJsonValue &value, doc.array()) {
        QJsonObject obj = value.toObject();
        QList<QStandardItem*> row;
        row << new QStandardItem(obj["nom"].toString());
        row << new QStandardItem(obj["categorie"].toString());
        row << new QStandardItem(QString::number(obj["prix_original"].toDouble() , 'f', 2));
        row << new QStandardItem(QString::number(obj["prix_remise"].toDouble(), 'f', 2));
        row << new QStandardItem(obj["nature_remise"].toString());
        row << new QStandardItem(QString::number(obj["pourcentage"].toDouble()) + "%");
        row << new QStandardItem(QString::number(obj["jours_restants"].toInt()));
        row << new QStandardItem(obj["etat"].toString());

        model->appendRow(row);
    }

    // Appliquer le style CSS avec séparateurs de colonnes
    QString style = R"(
        QTableView {
            background-color: #f8f9fa;
            border: 1px solid #dee2e6;
            border-radius: 10px;
            gridline-color: #1B2A49;
            padding: 2px;
            alternate-background-color: #FFF0F0;
            font-family: Georgia, "Times New Roman", serif;
        }
        QTableView QTableCornerButton::section {
            background-color: #A8B8A8;
            border: none;
            border-top-left-radius: 10px;
        }
        QHeaderView::section {
            background-color: #8B0000;
            color: #F0F0F0;
            padding: 8px;
            border: none;
            border-right: 1px solid #F0F0F0;
            font-family: Georgia, "Times New Roman", serif;
            font-style: italic;
            font-size: 12px;
            font-weight: bold;
        }
        QHeaderView::section:last {
            border-right: none;
        }
        QTableView::item {
            padding: 6px;
            border-bottom: 1px solid #8B0000;
            border-right: 1px solid #8B0000;
        }
        QTableView::item:last {
            border-right: none;
        }
        QTableView::item:selected {
            background-color: #grey;
            color: #2B2F48;
        }
        QTableView::item:hover {
            background-color: #e0e0ff;
        }
    )";


    // Configuration de la tableView
    tableView->setModel(model);
    tableView->setStyleSheet(style);
    tableView->setAlternatingRowColors(true);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->verticalHeader()->setVisible(false);
    tableView->horizontalHeader()->setStretchLastSection(true);
    tableView->setShowGrid(false);
    tableView->resizeColumnsToContents();

    // Ajustement supplémentaire pour la largeur des colonnes
    for (int i = 0; i < model->columnCount(); ++i) {
        tableView->setColumnWidth(i, tableView->columnWidth(i) + 15); // +15px de marge
    }
}

double Produit::calculerPrixDynamique(double prixOriginal, const QString &categorie,
                                      const QDate &dateLimite, const QDate &saisonFin,
                                      QString* natureRemise, double* pourcentage,
                                      int* joursRestants, QString* etat) {
    QDate aujourdhui = QDate::currentDate();
    double nouveauPrix = prixOriginal;
    QString tmpNature = "Aucune";
    double tmpPourcentage = 0;
    int tmpJoursRestants = 0;
    QString tmpEtat = "Normale";

    if (categorie == "Mode & Accessoires" || categorie == "Maison & Décoration") {
        tmpJoursRestants = aujourdhui.daysTo(saisonFin);
        if (tmpJoursRestants <= 14) {
            nouveauPrix *= 0.5;
            tmpNature = "Saisonnière";
            tmpPourcentage = 50;
            tmpEtat = "Critique";
        } else if (tmpJoursRestants <= 30) {
            nouveauPrix *= 0.75;
            tmpNature = "Saisonnière";
            tmpPourcentage = 25;
            tmpEtat = "Faible";
        }
    }
    else if (categorie == "Alimentation" || categorie == "Beauté & Cosmétiques") {
        tmpJoursRestants = aujourdhui.daysTo(dateLimite);
        if (tmpJoursRestants <= 14) {
            nouveauPrix *= 0.5;
            tmpNature = "Expiration";
            tmpPourcentage = 50;
            tmpEtat = "Critique";
        } else if (tmpJoursRestants <= 30) {
            nouveauPrix *= 0.75;
            tmpNature = "Expiration";
            tmpPourcentage = 25;
            tmpEtat = "Faible";
        }
    }

    // Remplir les paramètres optionnels
    if (natureRemise) *natureRemise = tmpNature;
    if (pourcentage) *pourcentage = tmpPourcentage;
    if (joursRestants) *joursRestants = tmpJoursRestants;
    if (etat) *etat = tmpEtat;

    return nouveauPrix;
}

bool Produit::ajouterProduit(const QString &nom, const QString &categorie, double prix,
                             const QString &description, const QString &gamme,
                             const QDate &date_limite, const QDate &saison_fin,
                             const QString &est_pack) {
    QSqlQuery query;
    QSqlDatabase::database().transaction();

    // 1. Calculer le prix dynamique et récupérer les infos de remise
    QString natureRemise;
    double pourcentageRemise;
    int joursRestants;
    QString etatRemise;

    double prixFinal = calculerPrixDynamique(prix, categorie, date_limite, saison_fin,
                                             &natureRemise, &pourcentageRemise,
                                             &joursRestants, &etatRemise);
    bool aRemise = (prixFinal != prix);

    // 2. Recherche de l'IDSTOCK
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
    } else {
        idStock = QVariant(QVariant::Int);
    }

    // 3. Insertion du produit
    query.prepare("INSERT INTO PRODUITS (NOM, CATEGORIE, PRIX, DESCRIPTION, GAMME, "
                  "DATE_LIMITE, SAISON_FIN, EST_PACK, IDSTOCK) "
                  "VALUES (:nom, :categorie, :prix, :description, :gamme, "
                  ":date_limite, :saison_fin, :est_pack, :idstock)");

    query.bindValue(":nom", nom);
    query.bindValue(":categorie", categorie);
    query.bindValue(":prix", prixFinal);
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

    // 4. Si remise appliquée, sauvegarder dans JSON
    if (aRemise) {
        QDir().mkpath(QCoreApplication::applicationDirPath() + "/remises");
        QString jsonFilePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";

        QJsonObject produitRemise;
        produitRemise["nom"] = nom;
        produitRemise["categorie"] = categorie;
        produitRemise["prix_original"] = prix;
        produitRemise["prix_remise"] = prixFinal;
        produitRemise["nature_remise"] = natureRemise;
        produitRemise["pourcentage"] = pourcentageRemise;
        produitRemise["jours_restants"] = joursRestants;
        produitRemise["etat"] = etatRemise;

        QJsonArray remisesArray;
        QFile file(jsonFilePath);

        if (file.exists() && file.open(QIODevice::ReadOnly)) {
            remisesArray = QJsonDocument::fromJson(file.readAll()).array();
            file.close();
        }

        remisesArray.append(produitRemise);

        if (file.open(QIODevice::WriteOnly)) {
            file.write(QJsonDocument(remisesArray).toJson());
            file.close();
        }
    }

    QSqlDatabase::database().commit();
    return true;
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
bool Produit::modifierProduit(int id, const QString &nom, const QString &categorie, double nouveauPrix,
                              const QString &description, const QString &gamme,
                              const QDate &date_limite, const QDate &saison_fin,
                              const QString &est_pack)
{
    QSqlDatabase::database().transaction();

    // 1. Récupérer les anciennes valeurs
    QSqlQuery selectQuery;
    selectQuery.prepare("SELECT NOM, CATEGORIE, PRIX, DESCRIPTION, GAMME, DATE_LIMITE, SAISON_FIN, EST_PACK FROM PRODUITS WHERE IDPRODUIT = :id");
    selectQuery.bindValue(":id", id);

    QString ancienNom, ancienneCategorie, ancienneDescription, ancienneGamme, ancienEstPack;
    double ancienPrix;
    QDate ancienneDateLimite, ancienneSaisonFin;

    if (selectQuery.exec() && selectQuery.next()) {
        ancienNom = selectQuery.value(0).toString();
        ancienneCategorie = selectQuery.value(1).toString();
        ancienPrix = selectQuery.value(2).toDouble();
        ancienneDescription = selectQuery.value(3).toString();
        ancienneGamme = selectQuery.value(4).toString();
        ancienneDateLimite = selectQuery.value(5).toDate();
        ancienneSaisonFin = selectQuery.value(6).toDate();
        ancienEstPack = selectQuery.value(7).toString();
    } else {
        QSqlDatabase::database().rollback();
        return false;
    }

    // 2. Déterminer si seul le prix a été modifié explicitement
    bool modificationPrixExplicite = !qFuzzyCompare(nouveauPrix, ancienPrix) &&
                                     nom == ancienNom &&
                                     categorie == ancienneCategorie &&
                                     description == ancienneDescription &&
                                     gamme == ancienneGamme &&
                                     date_limite == ancienneDateLimite &&
                                     saison_fin == ancienneSaisonFin &&
                                     est_pack == ancienEstPack;

    // 3. Calcul du prix final
    double prixFinal = ancienPrix; // Par défaut, garder l'ancien prix
    bool prixModifie = false; // Variable pour suivre si le prix a été modifié

    if (modificationPrixExplicite) {
        prixFinal = calculerPrixDynamique(nouveauPrix, ancienneCategorie, ancienneDateLimite, ancienneSaisonFin);
        prixModifie = !qFuzzyCompare(prixFinal, nouveauPrix);

        if (prixModifie) {
            QMessageBox::information(nullptr, "Prix dynamique",
                                     QString("Le prix a été ajusté de %1 à %2")
                                         .arg(nouveauPrix, 0, 'f', 2)
                                         .arg(prixFinal, 0, 'f', 2));
        }
    }

    // 4. Mise à jour dans la base
    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE PRODUITS SET "
                        "NOM = :nom, "
                        "CATEGORIE = :categorie, "
                        "PRIX = :prix, "
                        "DESCRIPTION = :description, "
                        "GAMME = :gamme, "
                        "DATE_LIMITE = :date_limite, "
                        "SAISON_FIN = :saison_fin, "
                        "EST_PACK = :est_pack "
                        "WHERE IDPRODUIT = :id");

    updateQuery.bindValue(":id", id);
    updateQuery.bindValue(":nom", nom);
    updateQuery.bindValue(":categorie", categorie);
    updateQuery.bindValue(":prix", prixFinal);
    updateQuery.bindValue(":description", description);
    updateQuery.bindValue(":gamme", gamme);
    updateQuery.bindValue(":date_limite", date_limite);
    updateQuery.bindValue(":saison_fin", saison_fin);
    updateQuery.bindValue(":est_pack", est_pack);

    if (!updateQuery.exec()) {
        QSqlDatabase::database().rollback();
        return false;
    }

    // 5. Mise à jour JSON si prix modifié
    if (prixModifie) {
        QString jsonFilePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";
        QFile file(jsonFilePath);

        if (file.exists() && file.open(QIODevice::ReadWrite)) {
            QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
            QJsonArray remisesArray = doc.array();

            bool modificationEffectuee = false;
            for (int i = 0; i < remisesArray.size(); ++i) {
                QJsonObject obj = remisesArray[i].toObject();
                if (obj["nom"].toString() == ancienNom) {
                    // Mettre à jour SEULEMENT les prix
                    obj["prix_original"] = nouveauPrix; // Prix saisi dans le formulaire
                    obj["prix_remise"] = prixFinal;     // Prix après remise

                    remisesArray[i] = obj;
                    modificationEffectuee = true;
                    break;
                }
            }

            // Si le produit n'existe pas encore dans le JSON, l'ajouter avec les prix seulement
            if (!modificationEffectuee) {
                QJsonObject nouveauProduit;
                nouveauProduit["nom"] = ancienNom;
                nouveauProduit["prix_original"] = nouveauPrix;
                nouveauProduit["prix_remise"] = prixFinal;

                remisesArray.append(nouveauProduit);
                modificationEffectuee = true;
            }

            if (modificationEffectuee) {
                file.resize(0);
                file.write(QJsonDocument(remisesArray).toJson());
            }
            file.close();
        }
    }
    // 6. Mise à jour JSON si seul le nom a changé (sans toucher aux prix)
    else if (nom != ancienNom) {
        QString jsonFilePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";
        QFile file(jsonFilePath);

        if (file.exists() && file.open(QIODevice::ReadWrite)) {
            QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
            QJsonArray remisesArray = doc.array();

            bool modificationEffectuee = false;
            for (int i = 0; i < remisesArray.size(); ++i) {
                QJsonObject obj = remisesArray[i].toObject();
                if (obj["nom"].toString() == ancienNom) {
                    obj["nom"] = nom;
                    remisesArray[i] = obj;
                    modificationEffectuee = true;
                    break;
                }
            }

            if (modificationEffectuee) {
                file.resize(0);
                file.write(QJsonDocument(remisesArray).toJson());
            }
            file.close();
        }
    }

    QSqlDatabase::database().commit();
    return true;
}

bool Produit::supprimerProduit(int id) {
    QSqlDatabase::database().transaction();

    // 1. Récupérer le nom du produit avant suppression
    QSqlQuery selectQuery;
    selectQuery.prepare("SELECT NOM FROM PRODUITS WHERE IDPRODUIT = :id");
    selectQuery.bindValue(":id", id);

    QString nomProduit;
    if (selectQuery.exec() && selectQuery.next()) {
        nomProduit = selectQuery.value(0).toString();
    } else {
        QSqlDatabase::database().rollback();
        return false;
    }

    // 2. Supprimer le produit de la base de données
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM PRODUITS WHERE IDPRODUIT = :id");
    deleteQuery.bindValue(":id", id);

    if (!deleteQuery.exec()) {
        QSqlDatabase::database().rollback();
        return false;
    }

    // 3. Supprimer le produit du fichier JSON des remises s'il y existe
    QString jsonFilePath = QCoreApplication::applicationDirPath() + "/remises/produita_remises.json";
    QFile file(jsonFilePath);

    if (file.exists() && file.open(QIODevice::ReadWrite)) {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        QJsonArray remisesArray = doc.array();

        bool found = false;
        for (int i = 0; i < remisesArray.size(); ++i) {
            if (remisesArray[i].toObject()["nom"].toString() == nomProduit) {
                remisesArray.removeAt(i);
                found = true;
                break;
            }
        }

        if (found) {
            file.resize(0); // Effacer le contenu du fichier
            file.write(QJsonDocument(remisesArray).toJson());
        }

        file.close();
    }

    QSqlDatabase::database().commit();
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

void Produit::rechercherProduits(const QString &motCle, QTableView *tableView) {
    if (!tableView) return;

    // 1. Réinitialisation FORCÉE du modèle (évite tout cache)
    QSqlQueryModel *oldModel = qobject_cast<QSqlQueryModel*>(tableView->model());
    if (oldModel) {
        oldModel->clear();
        delete oldModel;
    }

    // 2. Si recherche vide, on affiche tout
    if (motCle.isEmpty()) {
        afficherProduits(tableView);
        return;
    }

    // 3. Nouvelle requête SQL STRICTE (uniquement NOM, CATEGORIE, GAMME)
    QSqlQueryModel *model = new QSqlQueryModel();
    QString queryStr =
        "SELECT * FROM produits WHERE "
        "(NOM LIKE :nom OR "
        "CATEGORIE LIKE :categorie OR "
        "GAMME LIKE :gamme)";

    QSqlQuery query;
    query.prepare(queryStr);

    // Bind des valeurs avec % pour recherche partielle + insensible à la casse
    QString searchTerm = "%" + motCle.toLower() + "%";
    query.bindValue(":nom", searchTerm);
    query.bindValue(":categorie", searchTerm);
    query.bindValue(":gamme", searchTerm);

    // 4. Exécution + vérification
    if (!query.exec()) {
        qDebug() << "Erreur SQL:" << query.lastError().text();
        delete model;
        return;
    }

    // 5. Debug : Affiche les premières lignes pour vérification
    qDebug() << "=== Résultats pour" << motCle << "===";
    for (int i = 0; i < qMin(model->rowCount(), 5); ++i) {
        qDebug() << "Ligne" << i << ":"
                 << model->record(i).value("NOM").toString()
                 << "| Gamme:" << model->record(i).value("GAMME").toString();
    }

    // 6. Application du nouveau modèle
    model->setQuery(query);
    tableView->setModel(model);
}


double Produit::calculerMoyenneVentesCategorie(const QString &categorie) {
    QSqlQuery query;
    query.prepare(
        "SELECT AVG(nombreAchat) FROM ACHAT "
        "JOIN PRODUITS ON ACHAT.IDPRODUIT = PRODUITS.IDPRODUIT "
        "WHERE PRODUITS.CATEGORIE = :categorie"
        );
    query.bindValue(":categorie", categorie);

    if (!query.exec() || !query.next()) {
        qDebug() << "Erreur calcul moyenne ventes:" << query.lastError().text();
        return 0.0; // Retourne 0 en cas d'erreur
    }

    return query.value(0).toDouble();
}
