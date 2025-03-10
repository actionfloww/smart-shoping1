#ifndef EVENT_H
#define EVENT_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
#include <string>

using namespace std; // Utilisation de l'espace de noms std

class Event {
private:
    int idEvent;
    QString nomEvent;
    QString description;
    QString type;
    QDate dateDebut;
    QDate dateFin;
    int idProduit;

public:
    Event( const QString& nom, const QString& desc, const QString& typ,
          const QDate& debut, const QDate& fin, int idProd);

    // Getters
    int getIdEvent() const;
    QString getNomEvent() const;
    QString getDescription() const;
    QString getType() const;
    QDate getDateDebut() const;
    QDate getDateFin() const;
    int getIdProduit() const;

    // Setters
    void setNomEvent(const QString& nom);
    void setDescription(const QString& desc);
    void setType(const QString& typ);
    void setDateDebut(const QDate& debut);
    void setDateFin(const QDate& fin);
    void setIdProduit(int idProd);

    // Méthode pour insérer l'événement dans la base de données
    bool insertIntoDatabase(QSqlQuery& query) const;
};

#endif // EVENT_H



