/********************************************************************************
** Form generated from reading UI file 'forget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGET_H
#define UI_FORGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forget
{
public:
    QFrame *frame;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *forget)
    {
        if (forget->objectName().isEmpty())
            forget->setObjectName("forget");
        forget->resize(1400, 800);
        frame = new QFrame(forget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(380, 120, 461, 501));
        frame->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 15px;\n"
"background-color: #162945;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 200, 371, 61));
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
        label_2->setGeometry(QRect(80, 30, 331, 61));
        label_2->setStyleSheet(QString::fromUtf8("font-family:  \"Georgia\", \"Times New Roman\", serif;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 360, 191, 81));
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
        label = new QLabel(forget);
        label->setObjectName("label");
        label->setGeometry(QRect(-2, 0, 1411, 801));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp Image 2025-05-04 at 16.34.21.jpeg")));
        label->setScaledContents(true);
        label->raise();
        frame->raise();

        retranslateUi(forget);

        QMetaObject::connectSlotsByName(forget);
    } // setupUi

    void retranslateUi(QDialog *forget)
    {
        forget->setWindowTitle(QCoreApplication::translate("forget", "Dialog", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("forget", "Nom complet..", nullptr));
        label_2->setText(QCoreApplication::translate("forget", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; text-decoration: underline; color:#c6c6c6;\">Oublier le mot de passe</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("forget", "envoyer", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class forget: public Ui_forget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGET_H
