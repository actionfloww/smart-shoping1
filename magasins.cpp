#include "magasins.h"
#include <iostream>
#include <iomanip>
#include <QSqlQuery>
#include <QDate>
#include <QSqlQueryModel>
#include <String>
#include <QSqlError>
using namespace std;
Magasin::Magasin() {

}
Magasin::Magasin(int id,const QString& nom, const QString& empl, const QString& typ,
        const QString& prop, const QDate& ouverture, const QString& et,const QString& email,const int& etage)
{

    this->idMagasin=id;
    this->nomMagasin=nom;
    this->emplacement=empl;
    this->type=type;
    this->proprietaire=prop;
    this->dateOuverture=ouverture;
    this->etat=et;
    this->email=email;
    this->etage=etage;

}

Magasin::Magasin(const QString& nom, const QString& empl, const QString& typ,
                 const QString& prop, const QDate& ouverture, const QString& et,const QString& email,const int& etage)
{

    this->nomMagasin=nom;
    this->emplacement=empl;
    this->type=typ;
    this->proprietaire=prop;
    this->dateOuverture=ouverture;
    this->etat=et;
    this->email=email;
    this->etage=etage;

}


bool Magasin::ajouter(QString nomMagasin,QString emplacement,QString type,QString proprietaire,QDate dateOuverture,QString etat,QString email,int etage)  {
    QSqlQuery query;
    query.prepare("INSERT INTO MAGASINS (NOM_MAGASIN, EMPLACEMENT, TYPE, PROPRIETAIRE, DATE_OUVERTURE, ETAT,EMAIL_PROP,ETAGE) "
                  "VALUES (:nomMagasin, :emplacement, :type, :proprietaire, :dateOuverture, :etat,:email,:etage)");

    query.bindValue(":nomMagasin", nomMagasin);
    query.bindValue(":emplacement", emplacement);
    query.bindValue(":type", type);
    query.bindValue(":proprietaire", proprietaire);
    query.bindValue(":dateOuverture",dateOuverture);
    query.bindValue(":etat", etat);
    query.bindValue(":email", email);
    query.bindValue(":etage", etage);

    return query.exec();
}


QSqlQueryModel * Magasin::afficher() {
    QSqlQueryModel * model = new QSqlQueryModel();

    // Requête pour récupérer les données sans sélectionner la colonne ID_MAGASIN
    model->setQuery("SELECT NOM_MAGASIN, EMPLACEMENT, TYPE, PROPRIETAIRE, DATE_OUVERTURE, ETAT,EMAIL_PROP,ETAGE FROM MAGASINS");

    // Définition des en-têtes des colonnes pour le tableau
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom Magasin"));   // NOM_MAGASIN
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Emplacement"));   // EMPLACEMENT
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));          // TYPE
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Propriétaire"));  // PROPRIETAIRE
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Ouverture"));// DATE_OUVERTURE
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("État"));          // ETAT
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Email Proprietaire"));          // eMAIL
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ETAGE"));          // eMAIL

    return model;
}


bool Magasin::supprimer(int idM) {
    QSqlQuery query;
    query.prepare("DELETE FROM MAGASINS WHERE ID_MAGASIN = :idMagasin");  // Utiliser ID_MAGASIN dans la requête
    query.bindValue(":idMagasin", idM);  // Lier le paramètre à :idMagasin dans la requête SQL

    return query.exec();  // Exécuter la requête de suppression
}

bool Magasin::modifier( ) {
    QSqlQuery query;
    query.prepare("UPDATE MAGASINS SET NOM_MAGASIN=:nomMagasin, EMPLACEMENT=:emplacement, TYPE=:type, "
                  "PROPRIETAIRE=:proprietaire, DATE_OUVERTURE=TO_DATE(:dateOuverture, 'YYYY-MM-DD'), ETAT=:etat,EMAIL_PROP=:email ,ETAGE=:etage "
                  "WHERE ID_MAGASIN=:idMagasin");

    query.bindValue(":nomMagasin", nomMagasin);
    query.bindValue(":emplacement", emplacement);
    query.bindValue(":type", type);
    query.bindValue(":proprietaire", proprietaire);
    query.bindValue(":dateOuverture", dateOuverture.toString("yyyy-MM-dd"));
    query.bindValue(":etat", etat);
    query.bindValue(":email", email);
    query.bindValue(":etage", etage);

    query.bindValue(":idMagasin", idMagasin);

    return query.exec();
}
int Magasin::ChercherIDByNom(QString  nom, QString emplacement) {
    QSqlQuery query;
    int id=0;
    query.prepare("SELECT ID_MAGASIN From MAGASINS WHERE NOM_MAGASIN=:nom AND EMPLACEMENT=:emp");
    query.bindValue(":nom",nom);
    query.bindValue(":emp",emplacement);

    if(query.exec())
        {
            if(query.next())
            {
                    id= query.value(0).toInt();
            }
        }
return id;
}


QSqlQueryModel * Magasin::tri(QString choix,QString ordre) {
    QSqlQueryModel * model = new QSqlQueryModel();

    // Requête pour récupérer les données sans sélectionner la colonne ID_MAGASIN
    model->setQuery("SELECT NOM_MAGASIN, EMPLACEMENT, TYPE, PROPRIETAIRE, DATE_OUVERTURE, ETAT,EMAIL_PROP FROM MAGASINS ORDER BY "+choix+" "+ordre);//NOM_MAGASIN ASC

    // Définition des en-têtes des colonnes pour le tableau
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom Magasin"));   // NOM_MAGASIN
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Emplacement"));   // EMPLACEMENT
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));          // TYPE
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Propriétaire"));  // PROPRIETAIRE
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Ouverture"));// DATE_OUVERTURE
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("État"));          // ETAT
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Email Proprietaire"));          // EMAIL

    return model;
}


QSqlQueryModel * Magasin::chercher(QString choix,QString text) {
    QSqlQueryModel * model = new QSqlQueryModel();

    // Requête pour récupérer les données sans sélectionner la colonne ID_MAGASIN
    model->setQuery("SELECT NOM_MAGASIN, EMPLACEMENT, TYPE, PROPRIETAIRE, DATE_OUVERTURE, ETAT,EMAIL_PROP FROM MAGASINS WHERE "+choix+" LIKE '%"+text+"%'");

    // Définition des en-têtes des colonnes pour le tableau
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom Magasin"));   // NOM_MAGASIN
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Emplacement"));   // EMPLACEMENT
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));          // TYPE
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Propriétaire"));  // PROPRIETAIRE
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Email Proprietaire"));          // eMAIL
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date Ouverture"));// DATE_OUVERTURE
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("État"));          // ETAT

    return model;
}
int Magasin::countEtat(const QString& etat)
{
    int count = 0;

    QSqlQuery query;
    query.prepare("SELECT COUNT(ETAT) FROM MAGASINS WHERE ETAT = :ETAT");
    query.bindValue(":ETAT", etat);

    if (query.exec() && query.next()) {
        count = query.value(0).toInt();
    }

    return count;
}

int Magasin::countType(const QString& type)
{
    int count = 0;

    QSqlQuery query;
    query.prepare("SELECT COUNT(TYPE) FROM MAGASINS WHERE TYPE = :TYPE");
    query.bindValue(":TYPE", type);

    if (query.exec() && query.next()) {
        count = query.value(0).toInt();
    }

    return count;
}


Magasin Magasin::MeilleurMagasin()
{
    Magasin m;

    QSqlQuery query;
    query.prepare(
        "SELECT m.NOM_MAGASIN, m.EMPLACEMENT, m.TYPE, m.PROPRIETAIRE, "
        "m.DATE_OUVERTURE, m.ETAT, m.EMAIL_PROP "
        "FROM MAGASINS m "
        "JOIN POSSEDER p ON m.ID_MAGASIN = p.IDMAGASIN "
        "JOIN stocks s ON p.IDSTOCK = s.IDSTOCK "
        "WHERE (s.QUANTITE_INITAL - s.QUANTITE) * s.PRIX_UNITAIRE = ("
        "SELECT MAX((s2.QUANTITE_INITAL - s2.QUANTITE) * s2.PRIX_UNITAIRE) "
        "FROM stocks s2)"
        );

    if (query.exec())
    {
        if (query.next())
        {
            const QString& nom = query.value(0).toString();
            const QString& emplacement = query.value(1).toString();
            const QString& type = query.value(2).toString();
            const QString& proprietaire = query.value(3).toString();
            const QDate& dateOuverture = query.value(4).toDate();
            const QString& etat = query.value(5).toString();
            const QString& email = query.value(6).toString();
            const int& etage = query.value(7).toInt();

            m = Magasin(nom, emplacement, type, proprietaire, dateOuverture, etat,email,etage);
        }
    }
    else
    {
        qDebug() << "Erreur requête SQL: " << query.lastError().text();
    }

    return m;
}



