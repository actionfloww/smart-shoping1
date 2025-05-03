/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *label_12;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *gestion_magasin;
    QWidget *gestion_produit;
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_17;
    QPushButton *pushButton_11;
    QPushButton *pushButton_8;
    QLabel *label_15;
    QLabel *label_21;
    QLabel *label_19;
    QPushButton *pushButton_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_12;
    QLabel *label_20;
    QLabel *label_18;
    QPushButton *pushButton_9;
    QLabel *label_22;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(1800, 800);
        label_12 = new QLabel(menu);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, -60, 231, 901));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27.jpeg")));
        stackedWidget = new QStackedWidget(menu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(230, 0, 1691, 1200));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        gestion_magasin = new QWidget();
        gestion_magasin->setObjectName("gestion_magasin");
        stackedWidget->addWidget(gestion_magasin);
        gestion_produit = new QWidget();
        gestion_produit->setObjectName("gestion_produit");
        stackedWidget->addWidget(gestion_produit);
        label_16 = new QLabel(menu);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 190, 51, 51));
        label_16->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.17-removebg-preview.png")));
        label_16->setScaledContents(true);
        label_14 = new QLabel(menu);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(50, 10, 111, 111));
        label_14->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-02_at_10.03.33-removebg-preview.png")));
        label_14->setScaledContents(true);
        label_17 = new QLabel(menu);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(12, 270, 61, 51));
        label_17->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.18-removebg-preview.png")));
        label_17->setScaledContents(true);
        pushButton_11 = new QPushButton(menu);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(80, 580, 121, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        pushButton_8 = new QPushButton(menu);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(80, 430, 121, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        label_15 = new QLabel(menu);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 110, 191, 51));
        label_15->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"background-color:transparent;\n"
"\n"
"}"));
        label_21 = new QLabel(menu);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 499, 63, 51));
        label_21->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.44.45-removebg-preview (1).png")));
        label_21->setScaledContents(true);
        label_19 = new QLabel(menu);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(10, 420, 63, 51));
        label_19->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.19-removebg-preview.png")));
        label_19->setScaledContents(true);
        pushButton_10 = new QPushButton(menu);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(80, 510, 121, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        pushButton_6 = new QPushButton(menu);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(80, 280, 121, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        pushButton_5 = new QPushButton(menu);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(80, 200, 121, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        pushButton_12 = new QPushButton(menu);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(80, 660, 121, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        label_20 = new QLabel(menu);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(-10, 550, 101, 91));
        label_20->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.19__1_-removebg-preview.png")));
        label_20->setScaledContents(true);
        label_18 = new QLabel(menu);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 350, 61, 51));
        label_18->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.18__1_-removebg-preview.png")));
        label_18->setScaledContents(true);
        pushButton_9 = new QPushButton(menu);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(80, 350, 121, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        label_22 = new QLabel(menu);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(0, 650, 81, 71));
        label_22->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.19__2_-removebg-preview (1).png")));
        label_22->setScaledContents(true);

        retranslateUi(menu);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        label_12->setText(QString());
        label_16->setText(QString());
        label_14->setText(QString());
        label_17->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("menu", "EVENEMENT", nullptr));
        pushButton_8->setText(QCoreApplication::translate("menu", "STOCKS", nullptr));
        label_15->setText(QCoreApplication::translate("menu", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#c6c6c6;\">Monova Mall</span></p></body></html>", nullptr));
        label_21->setText(QString());
        label_19->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("menu", "MAGASINS", nullptr));
        pushButton_6->setText(QCoreApplication::translate("menu", "CLIENTS", nullptr));
        pushButton_5->setText(QCoreApplication::translate("menu", "EMPLOYES", nullptr));
        pushButton_12->setText(QCoreApplication::translate("menu", "QUITTER", nullptr));
        label_20->setText(QString());
        label_18->setText(QString());
        pushButton_9->setText(QCoreApplication::translate("menu", "PRODUITS", nullptr));
        label_22->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
