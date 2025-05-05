#ifndef GESTION_EMPLOYE_H
#define GESTION_EMPLOYE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "connection.h"
#include "employer.h"
#include "badge.h"

QT_BEGIN_NAMESPACE
namespace Ui { class gestion_employe; }
QT_END_NAMESPACE

class gestion_employe : public QMainWindow {
    Q_OBJECT

public:
    explicit gestion_employe(QWidget *parent = nullptr);
    ~gestion_employe();

private slots:
    void on_update_clicked();
    void on_ajouter_clicked();
    void on_supprimer_clicked();
    void onRechercheTextChanged(const QString &text);
    void onComboSearchChanged(const QString &text);
    void on_ord_currentIndexChanged(int index);
    void on_tri_currentIndexChanged(int index);
    void on_export_2_clicked();
    void on_export_3_clicked(); // For statistics
    void on_export_4_clicked();

private:
    Ui::gestion_employe *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    connection conn;
    Employer* employer;

    void setupDatabase();
    void loadEmployes();
    QString currentSearchField;
    void updateSorting();
    void afficherStatistiquesPoste();
};

#endif // GESTION_EMPLOYE_H
