#ifndef PACK_H
#define PACK_H

#include <QDialog>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QSqlQuery>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QSpinBox>
#include <QLabel>
namespace Ui {
class pack;
}

class pack : public QDialog
{
    Q_OBJECT

public:
    explicit pack(QWidget *parent = nullptr);
    ~pack();

private:
    void setupUI(); // Ajout de cette déclaration
    void initializeData(); // Ajout de cette déclaration

private slots:
    void on_pushButton_gererpack_clicked();
    void on_pushButton_acceuil_2_clicked();
    void on_pushButton_statistique_clicked();


private:
    Ui::pack *ui;
    QVBoxLayout *m_scrollLayout;
    QWidget *m_scrollContent;
    QScrollArea *m_scrollArea;

    bool m_modificationsValidees; // Nouveau membre pour suivre l'état des modifications
    QString m_jsonValidesFilePath = "pack_validef.json";  // Correction du nom de variable
    QJsonObject packToJson(const QString &nomPack,
                           const QString &produitPlusVendu,
                           double prixPlusVendu,
                           const QString &produitMoinsVendu,
                           double prixMoinsVendu,
                           double prixPack,
                           int idPlusVendu,
                           int idMoinsVendu,
                           int pourcentageRemise); // Ajout du paramètre pourcentageRemise

    void creerCartePack(const QString &nomPack,
                        const QString &produitPlusVendu,
                        double prixPlusVendu,
                        const QString &produitMoinsVendu,
                        double prixMoinsVendu,
                        double prixPack,
                        int idPlusVendu,
                        int idMoinsVendu,
                        bool estValide,
                        int pourcentageRemise); // Ajout du paramètre pourcentageRemise

    void validerPack(int idPlusVendu, int idMoinsVendu, QGroupBox* carte, const QJsonObject &packData);
    void rejeterPack(QGroupBox* carte);
    void modifierPack(QGroupBox* carte, QSpinBox* spinBox, QLabel* labelPrixPack,
                      double prixPlusVendu, double prixMoinsVendu, QJsonObject packData); // Nouvelle méthode pour modifier le pack

    void sauvegarderPackValide(const QJsonObject &packData);
    void chargerPacksValides();
    void afficherPackDepuisJson(const QJsonObject &packJson);
    void configureTransition(QWidget *window, const QString &title);
};

#endif // PACK_H
