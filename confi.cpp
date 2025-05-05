#include "confi.h"
#include "ui_confi.h"
#include <QMessageBox>
#include <string>
#include "pasw.h"
#include "forget.h"

// Redefine SharedData within this file
class SharedData {
public:
    static SharedData& instance() {
        static SharedData instance;
        return instance;
    }

    void setRandomString(const QString &randomString) {
        m_randomString = randomString;
    }

    QString getRandomString() const {
        return m_randomString;
    }

    void setmail(const QString &randomString) {
        mail = randomString;
    }

    QString getmail() const {
        return mail;
    }

    void clearRandomString() {
        m_randomString.clear();
    }

private:
    SharedData() = default;
    QString m_randomString;
    QString mail;
};

confi::confi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::confi)
{
    ui->setupUi(this);
}

confi::~confi()
{
    delete ui;
}

void confi::on_pushButton_2_clicked()
{
    QString code=SharedData::instance().getRandomString();
    if (code == this->ui->lineEdit->text()){
        SharedData::instance().setRandomString("");

        QMessageBox::information(this, "Success", "you just confirmed the code that we gave you from the mail  ");
        this->hide();
        pasw paswwindow;
        paswwindow.show();
        paswwindow.setModal(true);
        paswwindow.exec();
    }else{
        QMessageBox::warning(this, "Warning", "wrong code go put another mail");
        this->hide();
        forget Forgetwindow;
        Forgetwindow.show();
        Forgetwindow.setModal(true);
        Forgetwindow.exec();
        this->show();
    }
}
