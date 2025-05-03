#ifndef GESTION_MAGASIN_H
#define GESTION_MAGASIN_H


#include "serialmanager.h" // arduino
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPixmap>
#include <QIcon>
#include "magasins.h"
#include <QMainWindow>

#include <QQuickWidget>
#include <QGeoPositionInfoSource>
#include <QGeoServiceProvider>
#include <QQmlContext>
#include <QQmlEngine>


QT_BEGIN_NAMESPACE
namespace Ui {
class gestion_magasin;
}
QT_END_NAMESPACE

class gestion_magasin : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_magasin(QWidget *parent = nullptr);
    ~gestion_magasin();

private slots:
    void on_pushButton_clicked();
    void on_tab_affichage_clicked(const QModelIndex &index);
    void on_sup_clicked();
    //void actualiserTableau();
    void on_update_clicked();
    void viderFormulaire();


    void on_tableView_clicked(const QModelIndex &index);

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_filter_clicked();

    void on_PDF_clicked();

    void on_pushButton_Map_clicked();
    void onLocationSelected(double latitude, double longitude);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();
    void stat_type();
    void stat_etat();
    void on_Meilleur_clicked();
    void handleIdChecked(const QString &id, bool exists, const QString &etage); // arduino

    void on_bt_go_tostat_clicked();

    void on_bt_acceuil_clicked();



    void on_lineEdit_5_textChanged(const QString &arg1);

private:
    Ui::gestion_magasin *ui; // Déclaration de la variable ui
    int currentMagasinID = -1;
    Magasin magasin;
    int ID_Magasin;

    QQuickWidget *mapWidget;
    void initializeMap();
    SerialManager *serialManager;//arduino

};

#endif // MAINWINDOW_H
