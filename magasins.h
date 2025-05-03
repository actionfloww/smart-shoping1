#ifndef MAGASIN_H
#define MAGASIN_H
#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Magasin {
private:
    int idMagasin;
    QString nomMagasin;
    QString emplacement;
    QString type;
    QString proprietaire;
    QDate dateOuverture;
    QString etat;
    QString email;
    int etage;
public:
    // Constructeur
    Magasin(const QString& nom, const QString& empl, const QString& typ,
            const QString& prop, const QDate& ouverture, const QString& et,const QString& email,const int& etage);
    Magasin(int id,const QString& nom, const QString& empl, const QString& typ,
            const QString& prop, const QDate& ouverture, const QString& et,const QString& email,const int& etage);
    Magasin ();

    // Getters
    int getIdMagasin() const { return idMagasin; }
    QString getNomMagasin() const { return nomMagasin; }
    QString getEmplacement() const { return emplacement; }
    QString getType() const { return type; }
    QString getProprietaire() const { return proprietaire; }
    QDate getDateOuverture() const { return dateOuverture; }
    QString getEtat() const { return etat; }
    QString getEmail() const { return email; }
    int getEtage() const { return etage; }

    // Setters
    void setNomMagasin(const QString& nom) { nomMagasin = nom; }
    void setEmplacement(const QString& empl) { emplacement = empl; }
    void setType(const QString& typ) { type = typ; }
    void setProprietaire(const QString& prop) { proprietaire = prop; }
    void setDateOuverture(const QDate& ouverture) { dateOuverture = ouverture; }
    void setEtat(const QString& et) { etat = et; }
    void setEmail(const QString& et) { email = et; }
    void setIdMagasin(const int& et) { idMagasin = et; }
    void getEtage(const int& et) { etage = et; }

    // CRUD
    bool ajouter(QString nomMagasin,QString emplacement,QString type,QString proprietaire,QDate dateOuverture,QString etat,QString email,int etage) ;
    QSqlQueryModel* afficher();
    bool supprimer(int idM);
    bool modifier();
    int ChercherIDByNom(QString  nom, QString emplacement);
    QSqlQueryModel * chercher(QString choix,QString text) ;
    QSqlQueryModel * tri(QString choix,QString ordre) ;
    int countEtat(const QString& etat);
    int countType(const QString& type);

    Magasin MeilleurMagasin();

};

#endif // MAGASIN_H
