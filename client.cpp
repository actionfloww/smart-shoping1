#include "client.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

Client::Client() : id(0), nom(""), prenom(""), email(""), telephone(""), pointFidelite(0) {}

Client::Client(int id, QString nom, QString prenom, QString email, QString telephone, int pointFidelite)
    : id(id), nom(nom), prenom(prenom), email(email), telephone(telephone), pointFidelite(pointFidelite) {}

int Client::getId() const { return id; }
QString Client::getNom() const { return nom; }
QString Client::getPrenom() const { return prenom; }
QString Client::getEmail() const { return email; }
QString Client::getTelephone() const { return telephone; }
int Client::getPointFidelite() const { return pointFidelite; }

void Client::setId(int id) { this->id = id; }
void Client::setNom(QString nom) { this->nom = nom; }
void Client::setPrenom(QString prenom) { this->prenom = prenom; }
void Client::setEmail(QString email) { this->email = email; }
void Client::setTelephone(QString telephone) { this->telephone = telephone; }
void Client::setPointFidelite(int pointFidelite) { this->pointFidelite = pointFidelite; }

bool Client::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO CLIENT (ID_CLIENT, NOM_CLIENT, PRENOM_CLIENT, EMAIL_CLIENT, TELEPHONE, POINT_FIDELITE) "
                  "VALUES (:id, :nom, :prenom, :email, :telephone, :pointFidelite)");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":pointFidelite", pointFidelite);

    return query.exec();
}

bool Client::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE CLIENT SET NOM_CLIENT = :nom, PRENOM_CLIENT = :prenom, EMAIL_CLIENT = :email, TELEPHONE = :telephone, POINT_FIDELITE = :pointFidelite "
                  "WHERE ID_CLIENT = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":email", email);
    query.bindValue(":telephone", telephone);
    query.bindValue(":pointFidelite", pointFidelite);

    return query.exec();
}

bool Client::clientExiste(int idClient) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM CLIENT WHERE ID_CLIENT = ?");
    query.addBindValue(idClient);

    return query.exec() && query.next() && query.value(0).toInt() > 0;
}

void Client::mettreAJourPointsFidelite(int idClient) {
    if (!Client::clientExiste(idClient)) {  // Notez le Client:: devant
        qDebug() << "Client inexistant, impossible de mettre à jour les points";
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT SUM(nombreAchat) FROM ACHAT WHERE ID_CLIENT = ?");
    query.addBindValue(idClient);

    if (query.exec() && query.next()) {
        int totalAchats = query.value(0).toInt();

        if (totalAchats >= 3) {  // Seuil à 100 achats
            QSqlQuery updateQuery;
            updateQuery.prepare("UPDATE CLIENT SET POINT_FIDELITE = POINT_FIDELITE + 10 WHERE ID_CLIENT = ?");
            updateQuery.addBindValue(idClient);

            if (!updateQuery.exec()) {
                qDebug() << "Erreur MAJ points:" << updateQuery.lastError().text();
            }
        }
    } else {
        qDebug() << "Erreur calcul achats:" << query.lastError().text();
    }
}
