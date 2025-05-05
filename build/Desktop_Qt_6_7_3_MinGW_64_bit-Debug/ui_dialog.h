/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widgetTop3;
    QWidget *courbe;
    QWidget *widgetConteneur2;
    QLabel *label_6;
    QWidget *widgetConteneur;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1366, 768);
        widgetTop3 = new QWidget(Dialog);
        widgetTop3->setObjectName("widgetTop3");
        widgetTop3->setGeometry(QRect(840, 50, 491, 361));
        widgetTop3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}"));
        courbe = new QWidget(Dialog);
        courbe->setObjectName("courbe");
        courbe->setGeometry(QRect(20, 50, 801, 371));
        courbe->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}"));
        widgetConteneur2 = new QWidget(Dialog);
        widgetConteneur2->setObjectName("widgetConteneur2");
        widgetConteneur2->setGeometry(QRect(840, 420, 491, 291));
        widgetConteneur2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}"));
        label_6 = new QLabel(widgetConteneur2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(-730, -380, 1291, 751));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/cff87cf7-fcc3-49f6-b133-8db62c629784.jfif")));
        label_6->setScaledContents(true);
        widgetConteneur = new QWidget(Dialog);
        widgetConteneur->setObjectName("widgetConteneur");
        widgetConteneur->setGeometry(QRect(20, 430, 801, 281));
        widgetConteneur->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}\n"
"\n"
""));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(-2, 0, 1371, 771));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27 (1).jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 0, 461, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-family:  \"Georgia\", \"Times New Roman\", serif;"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(488, 10, 51, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_18.46.55-removebg-preview.png")));
        label_3->setScaledContents(true);
        label->raise();
        widgetTop3->raise();
        courbe->raise();
        widgetConteneur2->raise();
        widgetConteneur->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_6->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; text-decoration: underline; color:#0a0a55;\">Analyse des Donn\303\251es Produits</span></p></body></html>", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
