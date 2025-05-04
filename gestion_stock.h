#ifndef GESTION_STOCK_H
#define GESTION_STOCK_H



#include <QMainWindow>
#include <QList>
#include <QTableWidgetItem>
#include "gestionstock.h"
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QSqlQuery>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QProcess>
#include <QSet>
#include <QPixmap>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QMainWindow>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "arduino.h"

namespace Ui {
class gestion_stock;
}

class gestion_stock : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_stock(QWidget *parent = nullptr);
    ~gestion_stock();


private slots:
    void afficherStock(); // Afficher tous les produits
    void afficherStockParType(const QString &type); // Afficher produits par type
    void on_pushButton_clicked(); // Ajouter un produit
    void onCellClicked(int row, int column); // Gérer le clic sur une cellule
    void on_pushButton_3_clicked(); // Supprimer un produit
    void on_pushButton_2_clicked(); // Modifier un produit
    void on_comboBox_currentIndexChanged(int index); // Tri par type
    void genererPDF();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void showFacebookStyleNotification(int count);
    void onRechercheTextChanged(const QString &text);  // Ajoutez cette déclaration
    void checkCriticalStockAndNotify();
    void on_pushButton_17_clicked();
    void on_pushButton_15_clicked();
    void update_label();           // Slot pour traiter les données reçues d'Arduino
    void send_automatic_alert();   // Slot pour envoyer des alertes automatiques si nécessaire

private:
    void afficherTousLesProduits();
    Ui::gestion_stock *ui;
    int selectedIdStock;
    // Méthodes pour la gestion des alertes de stock
    void checkStockAlerts();
    void updateNotificationBadge(int count);
    void ajouterLigneTableau(const GestionStock &stock);

    // Variable pour suivre l'état des alertes
    bool wasInAlertState = false;

    QSet<QString> notifiedProducts; // Pour éviter les notifications répétées
    void sendStockAlertEmail(const QString &productName, const QString &idStock,
                             int quantity, const QString &fournisseur);
    Arduino A;                    // Instance de la classe Arduino pour gérer la communication
    QTimer *alertTimer;           // Timer pour envoyer des alertes à intervalles réguliers
    QString dataBuffer;           // Tampon pour stocker les données reçues d'Arduino
    QString lastStatus;           // Stocke le dernier statut reçu de l'Arduino

    // Ajouter un objet pour la gestion de la base de données
    QSqlDatabase db;              // Objet de la base de données

    // Fonction pour récupérer la quantité depuis la base de données Oracle
    int getQuantityFromDatabase();

    int IDSTOCK;
};

#endif // MAINWINDOW_H
