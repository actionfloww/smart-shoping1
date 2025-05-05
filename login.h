#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlDatabase>
#include <QMessageBox>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
    QString getUserRole() const { return userRole; }

signals:
    void loginSuccessful();

private slots:
    void on_log_clicked();
    void on_forget_clicked();

private:
    Ui::login *ui;
    QString userRole;
    void checkCredentials(const QString &email, const QString &password);
};
#endif // LOGIN_H
