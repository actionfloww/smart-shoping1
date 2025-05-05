#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QApplication>
#include <QSqlQuery>
#include <QDebug>
#include <QTimer>
#include "connection.h"
#include "forget.h"
#include "menu.h"
#include <QMessageBox>

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowTitle("Login");
    setFixedSize(size());
    connect(ui->log, &QPushButton::clicked, this, &login::on_log_clicked);
}

login::~login() { delete ui; }

void login::on_log_clicked()
{
    QString email = ui->em->text().trimmed();
    QString password = ui->pa->text().trimmed();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields!");
        return;
    }

    checkCredentials(email, password);
}

void login::checkCredentials(const QString &email, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT POSTE FROM EMPLOYES WHERE EMAIL = :email AND MOT_DE_PASSE = :password");
    query.bindValue(":email", email);
    query.bindValue(":password", password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Database error: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        userRole = query.value("POSTE").toString().toUpper().trimmed();
        qDebug() << "User role from DB:" << userRole;
        emit loginSuccessful();

        // Créer et afficher la fenêtre menu sans parent
      //  menu *menuWindow = new menu(); // Pas de parent pour éviter la dépendance
      //  menuWindow->setUserRole(userRole);
        qDebug() << "Passing role to menu:" << userRole;
      //  menuWindow->show();



        accept();
    } else {
        QMessageBox::warning(this, "Error", "Invalid credentials!");
    }
}

void login::on_forget_clicked()
{
    this->hide();
    forget Forgetwindow;
    Forgetwindow.setModal(true);
    Forgetwindow.exec();
    this->show();
}
