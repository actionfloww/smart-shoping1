#ifndef EVENT_H
#define EVENT_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QList>

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
    // Constructeur
    Event(const QString& nom, const QString& desc, const QString& typ,
          const QDate& debut, const QDate& fin, int idProd);
    Event();

    // Getters
    int getIdEvent() const { return idEvent; }
    QString getNomEvent() const { return nomEvent; }
    QString getDescription() const { return description; }
    QString getType() const { return type; }
    QDate getDateDebut() const { return dateDebut; }
    QDate getDateFin() const { return dateFin; }
    int getIdProduit() const { return idProduit; }

    // Setters
    void setNomEvent(const QString& nom) { nomEvent = nom; }
    void setDescription(const QString& desc) { description = desc; }
    void setType(const QString& typ) { type = typ; }
    void setDateDebut(const QDate& debut) { dateDebut = debut; }
    void setDateFin(const QDate& fin) { dateFin = fin; }
    void setIdProduit(int idProd) { idProduit = idProd; }

    // crud
    bool insertIntoDatabase(QSqlQuery& query) const;
    QSqlQueryModel * afficher();
    bool supprimer(int idE);
    bool modifier(int idEvent);


};

#endif // EVENT_H
