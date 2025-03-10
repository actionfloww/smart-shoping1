#include "Event.h"
#include <iostream>
#include <iomanip>
#include <QSqlQuery>
#include <QDate>
#include <QSqlQueryModel>
#include <string>

using namespace std;

Event::Event( const QString& nom, const QString& desc, const QString& typ,
             const QDate& debut, const QDate& fin, int idProd)
    : nomEvent(nom), description(desc), type(typ), dateDebut(debut), dateFin(fin), idProduit(idProd) {}

// Getters
int Event::getIdEvent() const {
    return idEvent;
}

QString Event::getNomEvent() const {
    return nomEvent;
}

QString Event::getDescription() const {
    return description;
}

QString Event::getType() const {
    return type;
}

QDate Event::getDateDebut() const {
    return dateDebut;
}

QDate Event::getDateFin() const {
    return dateFin;
}

int Event::getIdProduit() const {
    return idProduit;
}

// Setters
void Event::setNomEvent(const QString& nom) {
    nomEvent = nom;
}

void Event::setDescription(const QString& desc) {
    description = desc;
}

void Event::setType(const QString& typ) {
    type = typ;
}

void Event::setDateDebut(const QDate& debut) {
    dateDebut = debut;
}

void Event::setDateFin(const QDate& fin) {
    dateFin = fin;
}

void Event::setIdProduit(int idProd) {
    idProduit = idProd;
}

// Méthode pour insérer l'événement dans la base de données
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
