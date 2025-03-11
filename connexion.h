#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

class connexion
{
public:
    connexion();
    bool createconnect();
    void closeconnect();
    static QSqlDatabase db; // Déclaration globale de la base de données
};

#endif // CONNEXION_H
