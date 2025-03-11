#include "connexion.h"

QSqlDatabase connexion::db = QSqlDatabase();  // Définition de la variable statique

connexion::connexion() {}

bool connexion::createconnect()
{
    bool test = false;

    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    }

    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projetA"); // Vérifie que ton DSN est correct
    db.setUserName("ahmed1");
    db.setPassword("2003");

    if (db.open()) {
        test = true;
        qDebug() << "Connexion réussie à Oracle.";
    } else {
        qDebug() << "Échec de la connexion: " << db.lastError().text();
    }

    return test;
}

void connexion::closeconnect()
{
    db.close();
}
