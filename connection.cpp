#include "connection.h"

Connection::Connection() {}

bool Connection::createConnection()
{
    db = QSqlDatabase::addDatabase("QODBC");
    bool test = false;

    db.setDatabaseName("projetA"); // Assurez-vous que cela correspond à votre DSN ODBC
    db.setUserName("ahmed1");
    db.setPassword("2003");

    if (db.open()) {
        test = true;
        qDebug() << "Connexion à la base de données réussie !";
    } else {
        qDebug() << "Échec de la connexion à la base de données : " << db.lastError().text();
    }

    return test;
}

void Connection::closeConnection()
{
    db.close();
}
