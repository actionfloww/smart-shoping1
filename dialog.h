#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCharts>
#include <QSqlQuery>
#include "mainwindow.h"
#include "pack.h"



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_ACCEUIL_clicked();

    void on_pushButton_pack_2_clicked();

private:
    Ui::Dialog *ui;
    QChart *chart;
    QChartView *chartView;
    QChart *pieChart;
    QChartView *pieChartView;
    QChart *lineChart;
    QChartView *lineChartView;
    QChart *top3Chart;
    QChartView *top3ChartView;

    void creerDiagrammeBarres();
    void creerDiagrammeCirculaire();
    void creerCourbeCA();
    void creerTop3Produits();
    QColor getCouleur(int index);
};

#endif // DIALOG_H
