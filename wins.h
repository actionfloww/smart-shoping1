#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QNetworkAccessManager>
#include <QNetworkReply>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_btnAjouter_clicked();
    void on_btnModifier_clicked();
    void on_btnSupprimer_clicked();
    void on_btnAfficher_clicked();
    void on_lineEditRecherche_textChanged(const QString &arg1);
    void on_comboBoxTri_currentIndexChanged(int index);
    void on_btnPDF_clicked();
    void on_buttonAchat_clicked();
    void mettreAJourAffichagePoints(int idClient);
    void actualiserTableauAchats();
    void on_buttonStats_clicked();
    void on_btnEnvoyerSMS_clicked();
    void onSmsSent(QNetworkReply* reply);

    void on_btnTestSMS_clicked();
private:
    Ui::MainWindow *ui;
    QSqlQueryModel *model;
    QSqlTableModel *modelAchats;
    QNetworkAccessManager *smsManager;
    // Fonctions de validation
    bool validateID(const QString &idStr);
    bool validateName(const QString &name);
    bool validateEmail(const QString &email);
    bool validatePhone(const QString &phoneStr);
    void actualiserInfosClient(int idClient);
    int getPointsFidelite(int idClient);
    void envoyerSMSClientsInactifs();
    void envoyerSMSTwilio(int idClient, QString toNumber, const QString& message);
    void enregistrerSMSBDD(int idClient, const QString& telephone, const QString& message, bool succes);
};





#endif // MAINWINDOW_H
