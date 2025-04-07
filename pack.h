
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
    void on_pushButton_acceuil_2_clicked();
    void on_pushButton_gererpack_clicked();

private:
    Ui::pack *ui;
    QVBoxLayout *m_scrollLayout;
    QWidget *m_scrollContent;
    QScrollArea *m_scrollArea;
    QString m_jsonValidesFilePath = "pack_valide.json";  // Correction du nom de variable
    QJsonObject packToJson(const QString &nomPack,
                           const QString &produitPlusVendu,
                           double prixPlusVendu,
                           const QString &produitMoinsVendu,
                           double prixMoinsVendu,
                           double prixPack,
                           int idPlusVendu,
                           int idMoinsVendu);

    void creerCartePack(const QString &nomPack,
                        const QString &produitPlusVendu,
                        double prixPlusVendu,
                        const QString &produitMoinsVendu,
                        double prixMoinsVendu,
                        double prixPack,
                        int idPlusVendu,
                        int idMoinsVendu,
                        bool estValide);

    void validerPack(int idPlusVendu, int idMoinsVendu, QGroupBox* carte, const QJsonObject &packData);
    void rejeterPack(QGroupBox* carte);

    void sauvegarderPackValide(const QJsonObject &packData);
    void chargerPacksValides();


    void afficherPackDepuisJson(const QJsonObject &packJson);
};

#endif // PACK_H
