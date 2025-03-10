#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPixmap>
#include <QIcon>
#include "magasins.h"
#include <QMainWindow>

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
    //void actualiserTableau();
    void on_update_clicked();
    void on_sup_2_clicked();
    void viderFormulaire();


private:
    Ui::MainWindow *ui; // Déclaration de la variable ui
    int currentMagasinID = -1;
    Magasin* magasin;
};

#endif // MAINWINDOW_H
