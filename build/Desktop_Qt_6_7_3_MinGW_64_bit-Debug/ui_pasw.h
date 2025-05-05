/********************************************************************************
** Form generated from reading UI file 'pasw.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASW_H
#define UI_PASW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pasw
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *pasw)
    {
        if (pasw->objectName().isEmpty())
            pasw->setObjectName("pasw");
        pasw->resize(977, 711);
        frame = new QFrame(pasw);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(260, 110, 461, 501));
        frame->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 15px;\n"
"background-color: #162945;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 160, 371, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    color: white;\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    selection-background-color: #0078D7;\n"
"    selection-color: white;\n"
"    /* Simuler une ombre avec un d\303\251grad\303\251 */\n"
"    border-bottom: 2px solid rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0078D7;\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"    outline: none;\n"
"    /* Effet de surbrillance au focus */\n"
"    border-bottom: 2px solid #0078D7;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 0.5);\n"
"    font-style: italic;\n"
"    font-size: 13px;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 20, 261, 61));
        label_2->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size: 24px;\n"
"font-weight: bold;\n"
"text-align: center;\n"
"margin-bottom: 20px;\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 400, 331, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #E3E3E7; /* Couleur de fond */\n"
"    border-radius: 20px; /* Bord arrondi */\n"
"    padding: 8px 20px; /* Espacement interne */\n"
"    font-size: 12px; /* Taille de police */\n"
"    color: #000; /* Couleur du texte */\n"
"    border: none; /* Pas de bordure */\n"
"\n"
"background-color: #E3E3E7;\n"
"color: rgb(4, 16, 59); /* Couleur du texte principal */\n"
" font-size: 18px; /* Taille de la police du titre */\n"
"font-weight: bold; /* Texte en gras */\n"
" text-align: center; /* Centrer le texte */\n"
"margin-bottom: 20px;\n"
"font-family: \"Segoe UI\", \"Roboto\", Arial, sans-serif; /* Police simple et moderne */\n"
"color: #000; /* Couleur du texte */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif; /* Police modifi\303\251e */\n"
"  color: #162945; /* Couleur de texte modifi\303\251e */"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 270, 371, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    color: white;\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    selection-background-color: #0078D7;\n"
"    selection-color: white;\n"
"    /* Simuler une ombre avec un d\303\251grad\303\251 */\n"
"    border-bottom: 2px solid rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0078D7;\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"    outline: none;\n"
"    /* Effet de surbrillance au focus */\n"
"    border-bottom: 2px solid #0078D7;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 0.5);\n"
"    font-style: italic;\n"
"    font-size: 13px;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(350, 140, 91, 101));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_15.36.51-removebg-preview (1).png")));
        label->setScaledContents(true);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 250, 91, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_15.36.51-removebg-preview (1).png")));
        label_3->setScaledContents(true);
        label_3->raise();
        label->raise();
        lineEdit->raise();
        label_2->raise();
        pushButton_2->raise();
        lineEdit_2->raise();
        label_4 = new QLabel(pasw);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, -11, 981, 731));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp Image 2025-05-04 at 16.34.21.jpeg")));
        label_4->setScaledContents(true);
        label_4->raise();
        frame->raise();

        retranslateUi(pasw);

        QMetaObject::connectSlotsByName(pasw);
    } // setupUi

    void retranslateUi(QDialog *pasw)
    {
        pasw->setWindowTitle(QCoreApplication::translate("pasw", "Dialog", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("pasw", "Mot de passe..", nullptr));
        label_2->setText(QCoreApplication::translate("pasw", "<html><head/><body><p><span style=\" font-size:20pt; text-decoration: underline; color:#c6c6c6;\">R\303\251cup\303\251ration</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pasw", "envoyer", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("pasw", "Confirmation du mot de passe..", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pasw: public Ui_pasw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASW_H
