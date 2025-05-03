#ifndef CLIENT_H
#define CLIENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Client
{
public:
    // Constructeurs
    Client();
    Client(int id, QString nom, QString prenom, QString email, QString telephone, int pointFidelite = 0);

    // Getters et Setters
    int getId() const;
    QString getNom() const;
    QString getPrenom() const;
    QString getEmail() const;
    QString getTelephone() const;
    int getPointFidelite() const;

    void setId(int id);
    void setNom(QString nom);
    void setPrenom(QString prenom);
    void setEmail(QString email);
    void setTelephone(QString telephone);
    void setPointFidelite(int pointFidelite);

    // Méthodes CRUD
    bool ajouter();
    bool modifier();
    bool supprimer();
    static QSqlQueryModel* afficher();
    static QSqlQueryModel* rechercher(const QString &filter);
    static QSqlQueryModel* trier(const QString &critere);

    // Méthode pour ajouter des points de fidélité
    static void ajouterPointsFidelite(int idClient);
    static void mettreAJourPointsFidelite(int idClient);
    static bool clientExiste(int idClient);
private:
    int id;
    QString nom;
    QString prenom;
    QString email;
    QString telephone;
    int pointFidelite;
};

#endif // CLIENT_H
