#include "client.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDate>

bool ajouterAchat(int idClient, int idProduit, int nombreAchat) {
    QSqlQuery query;
    QDate dateAchat = QDate::currentDate();  // Récupérer la date du jour

    query.prepare("INSERT INTO ACHAT (ID_CLIENT, IDPRODUIT, NOMBREACHAT, DATEACHAT) "
                  "VALUES (:idClient, :idProduit, :nombreAchat, :dateAchat)");
    query.bindValue(":idClient", idClient);
    query.bindValue(":idProduit", idProduit);
    query.bindValue(":nombreAchat", nombreAchat);
    query.bindValue(":dateAchat", dateAchat.toString("yyyy-MM-dd"));  // Format SQL standard

    if (query.exec()) {
        qDebug() << "Achat ajouté avec succès.";
        return true;
    } else {
        qDebug() << "Erreur lors de l'ajout de l'achat:" << query.lastError().text();
        return false;
    }
}
