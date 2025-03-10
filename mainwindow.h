#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "connection.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_update_clicked();
    void on_ajouter_clicked();
    void on_supprimer_clicked();



private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    Connection conn;

    void setupDatabase();
    void loadEmployes();
};

#endif // MAINWINDOW_H
