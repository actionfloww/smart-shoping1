/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton_8;
    QLabel *label_43;
    QPushButton *pushButton_fonctionalite;
    QPushButton *pushButton_17;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_2;
    QLabel *label_20;
    QLineEdit *lineEdit_soeuil_stock;
    QLabel *label_21;
    QLabel *label_22;
    QDateEdit *dateEdit_date_limite;
    QLabel *label_23;
    QLineEdit *lineEdit_prix_2;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *lineEdit_idproduit;
    QLabel *label_26;
    QLineEdit *lineEditest_pack;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_categorie;
    QLineEdit *lineEdit_gamme_2;
    QDateEdit *dateEdit_saison_fin;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *lineEdit_description;
    QPushButton *pushButton_Ajouter;
    QGroupBox *groupBox;
    QLabel *label_11;
    QTableView *tableView_2;
    QPushButton *pushButton_Modifier;
    QPushButton *pushButton_Supprimer;
    QLineEdit *lineEdit_11;
    QLabel *label_64;
    QLabel *label_17;
    QLabel *label_4;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_9;
    QLabel *label_18;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1764, 833);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 230, 81, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 290, 81, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #f8fff7; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_3->setAutoDefault(false);
        pushButton_3->setFlat(false);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(60, 350, 81, 31));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_4->setAutoDefault(false);
        pushButton_4->setFlat(false);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(60, 470, 81, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_6->setAutoDefault(false);
        pushButton_6->setFlat(false);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(60, 410, 81, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_7->setAutoDefault(false);
        pushButton_7->setFlat(false);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 60, 251, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 5px 10px;\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 5px;\n"
"    background-color: #f9f9f9;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4A90E2; /* Couleur de la bordure quand le champ est s\303\251lectionn\303\251 */\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa; /* Couleur du texte placeholder */\n"
"    font-style: italic;\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 131, 31));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 530, 81, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(false);
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(1300, 20, 49, 16));
        pushButton_fonctionalite = new QPushButton(centralwidget);
        pushButton_fonctionalite->setObjectName("pushButton_fonctionalite");
        pushButton_fonctionalite->setGeometry(QRect(290, 10, 111, 31));
        pushButton_fonctionalite->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_fonctionalite->setAutoDefault(false);
        pushButton_fonctionalite->setFlat(false);
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(160, 10, 121, 31));
        pushButton_17->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #f8fff7; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_17->setAutoDefault(false);
        pushButton_17->setFlat(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(148, 0, 1311, 51));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/533d5754-eb8b-4f0c-b5cc-20e9398429f1.jfif")));
        label_6->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1260, 0, 49, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/0de86780-dae2-4175-a752-c75985b139c6-removebg-preview.png")));
        label_5->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1461, 1351));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/cff87cf7-fcc3-49f6-b133-8db62c629784.jfif")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 151, 1361));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/533d5754-eb8b-4f0c-b5cc-20e9398429f1.jfif")));
        label_3->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 0, 121, 81));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/e4e7d7a1-3112-4eaa-b81a-523a1825371c-removebg-preview.png")));
        label_7->setScaledContents(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 170, 81, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"}\n"
""));
        pushButton_5->setAutoDefault(false);
        pushButton_5->setFlat(false);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(170, 110, 391, 561));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	\n"
"    border: 2px solid  #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(80, 0, 221, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        label_20->setFont(font);
        lineEdit_soeuil_stock = new QLineEdit(groupBox_2);
        lineEdit_soeuil_stock->setObjectName("lineEdit_soeuil_stock");
        lineEdit_soeuil_stock->setGeometry(QRect(140, 370, 113, 26));
        lineEdit_soeuil_stock->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(20, 370, 101, 21));
        QFont font1;
        font1.setBold(true);
        label_21->setFont(font1);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 290, 111, 21));
        label_22->setFont(font1);
        dateEdit_date_limite = new QDateEdit(groupBox_2);
        dateEdit_date_limite->setObjectName("dateEdit_date_limite");
        dateEdit_date_limite->setGeometry(QRect(140, 290, 110, 26));
        QFont font2;
        font2.setPointSize(8);
        dateEdit_date_limite->setFont(font2);
        dateEdit_date_limite->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 250, 111, 31));
        label_23->setFont(font1);
        lineEdit_prix_2 = new QLineEdit(groupBox_2);
        lineEdit_prix_2->setObjectName("lineEdit_prix_2");
        lineEdit_prix_2->setGeometry(QRect(140, 250, 113, 26));
        lineEdit_prix_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 70, 111, 31));
        label_24->setFont(font1);
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(20, 40, 81, 20));
        label_25->setFont(font1);
        lineEdit_idproduit = new QLineEdit(groupBox_2);
        lineEdit_idproduit->setObjectName("lineEdit_idproduit");
        lineEdit_idproduit->setGeometry(QRect(140, 40, 113, 26));
        lineEdit_idproduit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(20, 410, 81, 21));
        label_26->setFont(font1);
        lineEditest_pack = new QLineEdit(groupBox_2);
        lineEditest_pack->setObjectName("lineEditest_pack");
        lineEditest_pack->setGeometry(QRect(140, 410, 113, 26));
        lineEditest_pack->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        lineEdit_nom = new QLineEdit(groupBox_2);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(140, 80, 113, 26));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        lineEdit_categorie = new QLineEdit(groupBox_2);
        lineEdit_categorie->setObjectName("lineEdit_categorie");
        lineEdit_categorie->setGeometry(QRect(140, 120, 113, 26));
        lineEdit_categorie->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        lineEdit_gamme_2 = new QLineEdit(groupBox_2);
        lineEdit_gamme_2->setObjectName("lineEdit_gamme_2");
        lineEdit_gamme_2->setGeometry(QRect(140, 150, 113, 26));
        lineEdit_gamme_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}"));
        dateEdit_saison_fin = new QDateEdit(groupBox_2);
        dateEdit_saison_fin->setObjectName("dateEdit_saison_fin");
        dateEdit_saison_fin->setGeometry(QRect(140, 330, 110, 26));
        dateEdit_saison_fin->setFont(font2);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 110, 111, 31));
        label_27->setFont(font1);
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(20, 140, 111, 31));
        label_28->setFont(font1);
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 190, 111, 31));
        label_29->setFont(font1);
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(20, 330, 111, 21));
        label_30->setFont(font1);
        lineEdit_description = new QLineEdit(groupBox_2);
        lineEdit_description->setObjectName("lineEdit_description");
        lineEdit_description->setGeometry(QRect(140, 180, 171, 61));
        lineEdit_description->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #f0f0f0; /* Couleur de fond */\n"
"    border: 2px solid #ccc; /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #66afe9; /* Couleur de la bordure lorsqu'il est en focus */\n"
"    background-color: #e6f3ff; /* Couleur de fond lorsqu'il est en focus */\n"
"}\n"
""));
        pushButton_Ajouter = new QPushButton(groupBox_2);
        pushButton_Ajouter->setObjectName("pushButton_Ajouter");
        pushButton_Ajouter->setGeometry(QRect(220, 490, 151, 31));
        pushButton_Ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(570, 140, 781, 481));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(350, 30, 181, 20));
        label_11->setFont(font);
        tableView_2 = new QTableView(groupBox);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(70, 70, 691, 331));
        pushButton_Modifier = new QPushButton(groupBox);
        pushButton_Modifier->setObjectName("pushButton_Modifier");
        pushButton_Modifier->setGeometry(QRect(610, 410, 151, 31));
        pushButton_Modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        pushButton_Supprimer = new QPushButton(groupBox);
        pushButton_Supprimer->setObjectName("pushButton_Supprimer");
        pushButton_Supprimer->setGeometry(QRect(450, 410, 151, 29));
        pushButton_Supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
"\n"
""));
        lineEdit_11 = new QLineEdit(groupBox);
        lineEdit_11->setObjectName("lineEdit_11");
        lineEdit_11->setGeometry(QRect(90, 30, 113, 22));
        lineEdit_11->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;\n"
"    padding: 5px 10px;\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 5px;\n"
"    background-color: #f9f9f9;\n"
"    color: #333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #4A90E2; /* Couleur de la bordure quand le champ est s\303\251lectionn\303\251 */\n"
"    background-color: #fff;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #aaa; /* Couleur du texte placeholder */\n"
"    font-style: italic;\n"
"}"));
        label_64 = new QLabel(groupBox);
        label_64->setObjectName("label_64");
        label_64->setGeometry(QRect(188, 20, 41, 41));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 30, 71, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 60, 49, 41));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/bc53b400-770d-4dd2-a8f8-23c5bdd6cfea-removebg-preview.png")));
        label_4->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 160, 41, 41));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/d1a142d9-cd6a-4ce3-925a-00e1c1c2dd9e-removebg-preview.png")));
        label_8->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 90, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 220, 41, 41));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/ee0d6f09-73a3-4ca3-9ad2-894710584944-removebg-preview.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 280, 49, 41));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/a0ece760-15e5-4cbb-802f-e981e4da15b3-removebg-preview.png")));
        label_13->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 520, 61, 61));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/c17f20e6-09e8-4d40-9ec1-c15367ffd1f8-removebg-preview.png")));
        label_10->setScaledContents(true);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 400, 51, 41));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/39fa450c-e778-448b-a73b-3c9cd92c52a8-removebg-preview.png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(0, 320, 61, 81));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/5c726883-0f64-4ba0-b8a2-0a743fa25ba5-removebg-preview.png")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(-10, 450, 81, 61));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/193b5557-5bcd-491f-bb41-81f826a65368-removebg-preview.png")));
        label_16->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(100, 400, 49, 16));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(570, 80, 61, 51));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/681656d4-94aa-4816-860e-9255b464f70f__1_-removebg-preview.png")));
        label_18->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        label_6->raise();
        lineEdit->raise();
        label_43->raise();
        pushButton_fonctionalite->raise();
        pushButton_17->raise();
        label_5->raise();
        label_3->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        label->raise();
        label_7->raise();
        pushButton_5->raise();
        groupBox_2->raise();
        groupBox->raise();
        label_4->raise();
        label_8->raise();
        pushButton->raise();
        label_12->raise();
        label_13->raise();
        label_10->raise();
        label_14->raise();
        label_15->raise();
        label_16->raise();
        label_9->raise();
        label_18->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1764, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_6->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_fonctionalite->setDefault(false);
        pushButton_17->setDefault(false);
        pushButton_5->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "CLIENTS", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PRODUITS", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "STOCKS", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "EVENEMENTS", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "MAGASINS", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:italic; color:#bdbdbd;\">Monova Mall</span></p><p><span style=\" font-style:italic;\"><br/></span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "QUITTER", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ffffff;\">Admin</span></p></body></html>", nullptr));
        pushButton_fonctionalite->setText(QCoreApplication::translate("MainWindow", "FONCTIONALITES", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "ACCEUIL", nullptr));
        label_6->setText(QString());
        label_5->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_7->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "EMPLOYES", nullptr));
        groupBox_2->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0a0a55;\">Ajout d'un produit</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">soeuil_stock :</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">date_limite :</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">prix :</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">nom :</span></p></body></html>", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">id produit :</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">est_pack :</span></p></body></html>", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">categorie :</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">gamme :</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">description :</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">saison_fin :</span></p></body></html>", nullptr));
        pushButton_Ajouter->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        groupBox->setTitle(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#0a0a55;\">Liste des produits</span></p></body></html>", nullptr));
        pushButton_Modifier->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        pushButton_Supprimer->setText(QCoreApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        label_64->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:8pt; color:#19154f;\">\342\226\274</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">trier par :</span></p></body></html>", nullptr));
        label_4->setText(QString());
        label_8->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "EXPORTER", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        label_10->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_9->setText(QString());
        label_18->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
