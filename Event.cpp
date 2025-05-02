#include "Event.h"
#include <iostream>
#include <iomanip>
#include <QSqlQuery>
#include <QDate>
#include <QSqlQueryModel>
#include <string>
#include <QSqlError>
using namespace std;

Event::Event() {

}


bool Event::insertIntoDatabase(QSqlQuery& query) const {
    query.prepare("INSERT INTO EVENEMENTS ( NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT) "
                  "VALUES ( :nomEvent, :description, :type, TO_DATE(:dateDebut, 'DD/MM/YYYY'), TO_DATE(:dateFin, 'DD/MM/YYYY'), :idProduit)");
    query.bindValue(":nomEvent", nomEvent);
    query.bindValue(":description", description);
    query.bindValue(":type", type);
    query.bindValue(":dateDebut", dateDebut.toString("dd/MM/yyyy"));
    query.bindValue(":dateFin", dateFin.toString("dd/MM/yyyy"));
    query.bindValue(":idProduit", idProduit);

    return query.exec();
}

QSqlQueryModel * Event::afficher() {
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT NOM_EVENT, DESCRIPTION, TYPE, DATE_DEBUT, DATE_FIN, PRODUIT, ID_EVENT  FROM EVENEMENTS");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom Event"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Description"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date Début"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Fin"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Produit"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID"));


    return model;
}

bool Event::supprimer(int idE) {
    QSqlQuery query;
    query.prepare("DELETE FROM EVENEMENTS WHERE ID_EVENT = :idEvent");  // Utiliser ID_EVENT dans la requête
    query.bindValue(":idEvent", idE);  // Lier le paramètre à :idEvent dans la requête SQL

    return query.exec();
}

bool Event::modifier(int idEvent) {
    QSqlQuery query;

    query.prepare("UPDATE EVENEMENTS SET "
                  "NOM_EVENT = :nomEvent, "
                  "DESCRIPTION = :description, "
                  "TYPE = :type, "
                  "DATE_DEBUT = TO_DATE(:dateDebut, 'dd/MM/yyyy'), "
                  "DATE_FIN = TO_DATE(:dateFin, 'dd/MM/yyyy'), "
                  "PRODUIT = :idProduit "
                  "WHERE ID_EVENT = :idEvent");


    query.bindValue(":idEvent", idEvent);
    query.bindValue(":nomEvent", nomEvent);
    query.bindValue(":description", description);
    query.bindValue(":type", type);
    query.bindValue(":dateDebut", dateDebut.toString("dd/MM/yyyy"));
    query.bindValue(":dateFin", dateFin.toString("dd/MM/yyyy"));
    query.bindValue(":idProduit", idProduit);  // Utilisez :produit au lieu de :idProduit


    if (!query.exec()) {
        qDebug() << "Erreur lors de la mise à jour :" << query.lastError().text();
        return false;
    }

    return true;
}





