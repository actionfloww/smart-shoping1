#ifndef WINS_H
#define WINS_H
#include <QMainWindow>
#include "qmainwindow.h"
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QChartView>
#include <QBarSeries>
#include <QBarSet>
#include <QValueAxis>
#include <QBarCategoryAxis>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTcpSocket>
#include <QMessageAuthenticationCode>
#include <QtCharts>
#include <QPieSeries>
#include <QPieSlice>
#include <QTableWidgetItem>
#include <QHash>
#include <QSqlDatabase>

#include <QPixmap>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class wins; }
QT_END_NAMESPACE


class wins : public QMainWindow
{
    Q_OBJECT

public:
    explicit wins(QWidget *parent = nullptr);
    ~wins();

    // --- Badge / RFID ---
    bool initializeDatabase();
    bool initializeArduino();
    void loadImages();

private slots:
    // --- Fonctions existantes ---
    void on_acceuil_clicked();
    void on_btnAjouter_clicked();
    void on_btnModifier_clicked();
    void on_btnSupprimer_clicked();
    void on_btnAfficher_2_clicked();
    void on_lineEditRecherche_textChanged(const QString &arg1);
    void on_comboBoxTri_currentIndexChanged(int index);
    void on_btnPDF_clicked();
    void on_buttonAchat_clicked();
    void mettreAJourAffichagePoints(int idClient);
    void actualiserTableauAchats();
    void on_buttonStats_clicked();
    void goToPage1();
    void goToPage2();
    void onSmsSent(QNetworkReply* reply);
    void on_tableView_2_clicked(const QModelIndex &index);
    void on_lineEditID_textChanged(const QString &arg1);
    void verifierNumero(QString numero);
    void on_btnEnvoyerSMS_2_clicked();
    void animateStars(int newStars);
    void on_tabWidget_currentChanged(int index);







signals:
    void accessGranted(QString employeeName);
    void accessDenied();

private:
    Ui::wins *ui;
    // --- Variables existantes ---
    QSqlQueryModel *model;
    QSqlTableModel *modelAchats;
    QNetworkAccessManager *smsManager;

    // --- Variables ajoutées pour badge ---

    QByteArray m_rfidData;
    QSqlDatabase m_db;
    QHash<QString, QString> m_uidCache; // Cache pour les UIDs enregistrés
     QLabel *imageLabel;

    // --- Fonctions utilitaires existantes ---
    bool validateID(const QString &idStr);
    bool validateName(const QString &name);
    bool validateEmail(const QString &email);
    bool validatePhone(const QString &phoneStr);
    void actualiserInfosClient(int idClient);
    int getPointsFidelite(int idClient);
    void envoyerSMSTwilio(int idClient, QString toNumber, const QString& message);
    void envoyerSMSClientsInactifs();
    void afficherInfosClient(int idClient);
    void afficherEtoilesFidelite(int points);
    QChartView* createChartView(QPieSeries *series, const QString &title);

    // --- Fonctions utilitaires ajoutées pour badge ---
    void sendToLCD(const QString &message);
    bool validateInputs(const QString& uid, const QString& cin);
    bool isCinValid(int cin);
    QString getEmployeeName(int cin);
    void updateEmployeeCache();
    void clearInputFields();
    void showStatusMessage(const QString& message, bool isError = false);
    QString normalizeUid(const QString& uid);
};

#endif // WINS_H
