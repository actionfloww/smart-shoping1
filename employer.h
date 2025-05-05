#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>

class Employer {

private:
    int idEmploye;
    QString nom;
    QString prenom;
    QString email;
    QString telephone;
    QString poste;
    QString statut;
    QString motDePasse;
    QString cin;
    QSqlQuery lastQuery;  // Objet QSqlQuery pour stocker la dernière requête
    QString Random;

public:
    Employer(const QString& nom, const QString& prenom, const QString& email,
             const QString& telephone, const QString& poste, const QString& statut,
             const QString& motDePasse, const QString& cin);

    Employer();

    // Getters
    int getIdEmploye() const { return idEmploye; }
    QString getNom() const { return nom; }
    QString getPrenom() const { return prenom; }
    QString getEmail() const { return email; }
    QString getTelephone() const { return telephone; }
    QString getPoste() const { return poste; }
    QString getStatut() const { return statut; }
    QString getMotDePasse() const { return motDePasse; }
    QString getCin() const { return cin; }
    QString getRandom() const { return Random; }

    // Setters
    void setIdEmploye(int id) { idEmploye = id; }
    void setNom(const QString& n) { nom = n; }
    void setPrenom(const QString& p) { prenom = p; }
    void setEmail(const QString& e) { email = e; }
    void setTelephone(const QString& t) { telephone = t; }
    void setPoste(const QString& pos) { poste = pos; }
    void setStatut(const QString& s) { statut = s; }
    void setMotDePasse(const QString& mdp) { motDePasse = mdp; }
    void setCin(const QString& c) { cin = c; }
    void setRandom(const QString& s) { Random = s; }


    // CRUD operations
    bool insertIntoDatabase();
    QSqlQueryModel* afficher();
    bool supprimer(int idE);
    bool modifier(int idEmploye);
    bool modifierparemail(QString mm,QString mdp);
    // Méthode pour récupérer l'erreur de la dernière requête
    QSqlError lastError() const { return lastQuery.lastError();
    }

    // À ajouter dans la section publique
    // Ajoutez la méthode de recherche
    QSqlQueryModel* rechercher(const QString& searchTerm, const QString& field = "ALL");
    QSqlQueryModel* tri(const QString& field, const QString& order);
    // Ajoutez cette déclaration dans la section publique de la classe Employer
    bool exporterPDF(const QString& fileName, QAbstractItemModel* model);
    QMap<QString, int> getStatistiquesParPoste();




};

#endif // EMPLOYER_H
