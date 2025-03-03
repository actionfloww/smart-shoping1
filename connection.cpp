#include "connection.h"

Connection::Connection() {}

bool Connection::createconnect()
{
    bool test = false;

    // Supprime toute connexion existante pour éviter les conflits
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projetA"); // Assurez-vous que cela correspond à votre DSN ODBC
    db.setUserName("ahmed1");
    db.setPassword("2003");

    if (db.open()) {
        test = true;
        qDebug() << "Connexion à la base de données réussie !";
    } else {
        qDebug() << "Échec de la connexion à la base de données !";
        qDebug() << "Erreur: " << db.lastError().text();
    }

    return test;
}

void Connection::closeconnect()
{
    QSqlDatabase db = QSqlDatabase::database();
    db.close();
}
