#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

class connection
{
public:
    connection();
    bool createconnect();
    void closeconnect();
    static QSqlDatabase db; // Déclaration globale de la base de données

};

#endif // CONNECTION_H
