#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSortFilterProxyModel>
#include <QPixmap>
#include <QIcon>
#include "Event.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>
#include <QTextDocument>
#include <QTabWidget>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void on_tab_affichage_clicked(const QModelIndex &index);
    void on_sup_clicked();
    void on_update_clicked();
    void on_sup_2_clicked();
    //void actualiserTableau ();
    void viderFormulaire();
    void generatePDF();
    void rechercherEvent();
    void refreshPage();
    void trierParType();
    void goToStatisticsPage();
    void afficherStatistiques();
    void switchToStatisticsPage();
    void switchTocalender();
    void afficherEvenementsSurCalendrier();
    void afficherDetailsEvenement(const QDate &date) ;
    void afficherAfficheEvenement();
    void masquerAfficheEvenement();
    QAbstractItemModel* obtenirModeleInitial();
    void switchToNews();



private:
    Ui::MainWindow *ui;
    Event* event;
    int currentEventID ;
    QSortFilterProxyModel *proxyModel;    // Modèle proxy pour le filtrage et le tri
    QAbstractItemModel *originalModel;
     QTimer *timerAffichage;
    QTimer *timerMasquage;



};

#endif // MAINWINDOW_H
