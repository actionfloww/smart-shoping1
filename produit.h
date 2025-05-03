#ifndef PRODUIT_H
#define PRODUIT_H

#include <QWidget>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QMessageBox>
#include <QTableView>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>

class Produit : public QWidget
{
    Q_OBJECT
signals:
    void prixMisAJour(int nbProduitsModifies);
public:
    explicit Produit(QWidget *parent = nullptr);

    // Méthodes CRUD
    bool ajouterProduit(const QString &nom, const QString &categorie, double prix,
                        const QString &description, const QString &gamme,
                        const QDate &date_limite, const QDate &saison_fin,
                        const QString &est_pack);

    void afficherProduits(QTableView *tableView);
    void afficherProduitsEnRemise(QTableView *tableView); // Nouvelle méthode pour afficher les remises

    bool modifierProduit(int id, const QString &nom, const QString &categorie, double prix,
                         const QString &description, const QString &gamme,
                         const QDate &date_limite, const QDate &saison_fin,
                         const QString &est_pack);

    bool supprimerProduit(int id);
    static double calculerPrixDynamique(double basePrix, const QString& categorie,
                                        const QDate& date_limite, const QDate& saison_fin, QString* natureRemise = nullptr,
                                        double* pourcentage = nullptr,
                                        int* joursRestants = nullptr,
                                        QString* etat = nullptr);

    void trierParCategorie(QTableView *tableView);
    void trierParPrixDescendant(QTableView *tableView);
    void trierParPack(QTableView *tableView);
    void rechercherProduits(const QString &motCle, QTableView *tableView);
    void mettreAJourPrixDynamiques(QTableView *tableView);
    static double calculerMoyenneVentesCategorie(const QString &categorie);

private:
    void sauvegarderRemiseJSON(const QString &nom, const QString &categorie,
                               double prixOriginal, double prixRemise,
                               const QString &natureRemise,
                               double pourcentage,
                               int joursRestants,
                               const QString &etat);
    QString m_derniereNatureRemise;
    double m_dernierPourcentage;
    int m_derniersJoursRestants;
    QString m_dernierEtat;    // Nouvelle méthode privée
    QSqlQuery query;
    QSqlDatabase db;
    const QString remisesJsonPath = "produits_remise.json"; // Chemin du fichier JSON
};

#endif // PRODUIT_H
