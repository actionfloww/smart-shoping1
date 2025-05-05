#include "pasw.h"
#include "ui_pasw.h"
#include "employer.h"
#include "shareddata.h"
#include <QMessageBox>
#include "login.h"
pasw::pasw(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pasw)
{
    ui->setupUi(this);
}

pasw::~pasw()
{
    delete ui;
}

void pasw::on_pushButton_2_clicked()
{
    if (this->ui->lineEdit->text()==this->ui->lineEdit_2->text()){

        Employer e;
        bool test =e.modifierparemail(SharedData::instance().getmail(),this->ui->lineEdit->text());
        if (test){
            QMessageBox::information(this, "Success", "worked close this you will go to the login page ");
            // Hide the login window
            this->hide();
            // Create an instance of the forget window
            login paswwindow;

            // Show the forget window
            paswwindow.show();

            // Make the login window modal to prevent interaction with it while the forget window is open
            paswwindow.setModal(true);

            // Execute the forget window's event loop
            paswwindow.exec();
            // Show the login window again when the forget window is closed
            this->show();
        }
    }else{
        this->ui->lineEdit->clear();
        this->ui->lineEdit_2->clear();
        QMessageBox::warning(this, "Warning", "both mdp are not the same");
    }
}

