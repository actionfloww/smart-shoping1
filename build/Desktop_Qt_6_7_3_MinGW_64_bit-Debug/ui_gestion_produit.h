/********************************************************************************
** Form generated from reading UI file 'gestion_produit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_PRODUIT_H
#define UI_GESTION_PRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_produit
{
public:
    QWidget *centralwidget;
    QLabel *label_13;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QLabel *label_20;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *lineEdit_prix_2;
    QLabel *label_24;
    QLabel *label_26;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_gamme_2;
    QDateEdit *dateEdit_saison_fin;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *lineEdit_description;
    QPushButton *pushButton_Ajouter;
    QDateEdit *dateEdit_date_limite;
    QComboBox *comboBox_categorie;
    QRadioButton *radioOui;
    QRadioButton *radioNon;
    QLabel *label_21;
    QLabel *label_38;
    QLabel *label_18;
    QLabel *label_36;
    QGroupBox *groupBox;
    QLabel *label_11;
    QTableView *tableView_2;
    QPushButton *pushButton_Supprimer;
    QPushButton *pushButton_Modifier;
    QPushButton *pushButton_exporter;
    QLabel *label_4;
    QLabel *label_34;
    QComboBox *comboBox_tri;
    QLabel *label_17;
    QLabel *label_31;
    QLabel *label_33;
    QLabel *label_37;
    QLabel *label_41;
    QLabel *label_40;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_25;
    QPushButton *pushButton_pack;
    QLineEdit *LineEdit_rechercher;
    QLabel *label_39;
    QLabel *label_43;
    QGroupBox *groupBox_3;
    QLabel *label_32;
    QTableView *tableViewRemise;
    QLabel *label_35;
    QLabel *label;
    QPushButton *pushButton_17;
    QPushButton *pushButton_fonctionalite;
    QLabel *label_19;
    QLabel *label_3;
    QLabel *label_10;

    void setupUi(QMainWindow *gestion_produit)
    {
        if (gestion_produit->objectName().isEmpty())
            gestion_produit->setObjectName("gestion_produit");
        gestion_produit->resize(1400, 708);
        centralwidget = new QWidget(gestion_produit);
        centralwidget->setObjectName("centralwidget");
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(-130, 300, 49, 41));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/a0ece760-15e5-4cbb-802f-e981e4da15b3-removebg-preview.png")));
        label_13->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-230, 20, 1461, 1351));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27 (1).jpeg")));
        label_2->setScaledContents(true);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 130, 371, 581));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	\n"
"    border: 2px solid  #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(80, 10, 221, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setBold(true);
        font.setUnderline(true);
        label_20->setFont(font);
        label_20->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 370, 111, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setBold(true);
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 310, 111, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        lineEdit_prix_2 = new QLineEdit(groupBox_2);
        lineEdit_prix_2->setObjectName("lineEdit_prix_2");
        lineEdit_prix_2->setGeometry(QRect(140, 310, 113, 31));
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
        label_24->setGeometry(QRect(20, 90, 111, 31));
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(20, 460, 81, 21));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        lineEdit_nom = new QLineEdit(groupBox_2);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(142, 80, 171, 41));
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
        lineEdit_nom->setInputMask(QString::fromUtf8(""));
        lineEdit_gamme_2 = new QLineEdit(groupBox_2);
        lineEdit_gamme_2->setObjectName("lineEdit_gamme_2");
        lineEdit_gamme_2->setGeometry(QRect(140, 180, 131, 41));
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
        dateEdit_saison_fin->setGeometry(QRect(140, 410, 110, 26));
        QFont font2;
        font2.setPointSize(8);
        dateEdit_saison_fin->setFont(font2);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 140, 111, 31));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(20, 190, 111, 31));
        label_28->setFont(font1);
        label_28->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 240, 111, 31));
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(20, 410, 111, 21));
        label_30->setFont(font1);
        label_30->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        lineEdit_description = new QLineEdit(groupBox_2);
        lineEdit_description->setObjectName("lineEdit_description");
        lineEdit_description->setGeometry(QRect(140, 230, 171, 61));
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
        pushButton_Ajouter->setGeometry(QRect(250, 500, 101, 31));
        pushButton_Ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        dateEdit_date_limite = new QDateEdit(groupBox_2);
        dateEdit_date_limite->setObjectName("dateEdit_date_limite");
        dateEdit_date_limite->setGeometry(QRect(140, 370, 110, 22));
        comboBox_categorie = new QComboBox(groupBox_2);
        comboBox_categorie->setObjectName("comboBox_categorie");
        comboBox_categorie->setGeometry(QRect(140, 140, 184, 31));
        comboBox_categorie->setStyleSheet(QString::fromUtf8("QComboBox::down-arrow {\n"
"    image: url(:/icons/down_arrow.svg); /* Optionnel - pour une fl\303\250che personnalis\303\251e */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #d5d5d5;\n"
"    border-radius: 8px;\n"
"    selection-background-color: #3498db;\n"
"    selection-color: white;\n"
"}\n"
""));
        radioOui = new QRadioButton(groupBox_2);
        radioOui->setObjectName("radioOui");
        radioOui->setGeometry(QRect(130, 460, 89, 20));
        radioOui->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        radioNon = new QRadioButton(groupBox_2);
        radioNon->setObjectName("radioNon");
        radioNon->setGeometry(QRect(210, 460, 89, 21));
        radioNon->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(310, 140, 49, 21));
        label_38 = new QLabel(groupBox_2);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(20, 10, 61, 51));
        label_38->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.59.58-removebg-preview.png")));
        label_38->setScaledContents(true);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(420, 10, 61, 61));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-04_at_19.44.19-removebg-preview.png")));
        label_18->setScaledContents(true);
        label_36 = new QLabel(centralwidget);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(500, 50, 49, 16));
        label_36->setPixmap(QPixmap(QString::fromUtf8("../Capture_d_\303\251cran_2025-03-30_120840-removebg-preview.png")));
        label_36->setScaledContents(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(390, 80, 781, 451));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(300, 20, 281, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        tableView_2 = new QTableView(groupBox);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(20, 50, 741, 331));
        tableView_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}\n"
""));
        pushButton_Supprimer = new QPushButton(groupBox);
        pushButton_Supprimer->setObjectName("pushButton_Supprimer");
        pushButton_Supprimer->setGeometry(QRect(630, 390, 111, 29));
        pushButton_Supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
"\n"
""));
        pushButton_Modifier = new QPushButton(groupBox);
        pushButton_Modifier->setObjectName("pushButton_Modifier");
        pushButton_Modifier->setGeometry(QRect(350, 390, 121, 31));
        pushButton_Modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        pushButton_exporter = new QPushButton(groupBox);
        pushButton_exporter->setObjectName("pushButton_exporter");
        pushButton_exporter->setGeometry(QRect(90, 390, 111, 31));
        pushButton_exporter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 410, 41, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Capture_d_\303\251cran_2025-03-30_120921-removebg-preview.png")));
        label_4->setScaledContents(true);
        label_34 = new QLabel(groupBox);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(610, 410, 41, 31));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Capture_d_\303\251cran_2025-03-30_120840-removebg-preview.png")));
        label_34->setScaledContents(true);
        comboBox_tri = new QComboBox(groupBox);
        comboBox_tri->setObjectName("comboBox_tri");
        comboBox_tri->setGeometry(QRect(110, 10, 151, 31));
        comboBox_tri->setStyleSheet(QString::fromUtf8("QComboBox::down-arrow {\n"
"    image: url(:/icons/down_arrow.svg); /* Optionnel - pour une fl\303\250che personnalis\303\251e */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #d5d5d5;\n"
"    border-radius: 8px;\n"
"    selection-background-color: #3498db;\n"
"    selection-color: white;\n"
"}"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 10, 91, 31));
        label_17->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_31 = new QLabel(groupBox);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(250, 11, 51, 31));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(60, 390, 21, 21));
        label_33->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_21.28.47-removebg-preview.png")));
        label_33->setScaledContents(true);
        label_37 = new QLabel(groupBox);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(320, 390, 21, 21));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_21.36.49-removebg-preview.png")));
        label_37->setScaledContents(true);
        label_41 = new QLabel(groupBox);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(600, 390, 21, 21));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_22.10.38-removebg-preview.png")));
        label_41->setScaledContents(true);
        label_40 = new QLabel(groupBox);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(570, 20, 21, 21));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-13_at_19.45.15-removebg-preview (1).png")));
        label_40->setScaledContents(true);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 390, 31, 20));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.28.47-removebg-preview.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(310, 390, 31, 21));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.36.49-removebg-preview.png")));
        label_8->setScaledContents(true);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(600, 390, 31, 21));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_22.10.38-removebg-preview.png")));
        label_12->setScaledContents(true);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(570, 10, 31, 31));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-13_at_19.45.15-removebg-preview.png")));
        label_14->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 0, 1231, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27.jpeg")));
        label_6->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1100, 20, 49, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/0de86780-dae2-4175-a752-c75985b139c6-removebg-preview.png")));
        label_5->setScaledContents(true);
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(220, 0, 91, 81));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20__1_-removebg-preview.png")));
        label_25->setScaledContents(true);
        pushButton_pack = new QPushButton(centralwidget);
        pushButton_pack->setObjectName("pushButton_pack");
        pushButton_pack->setGeometry(QRect(470, 30, 131, 31));
        pushButton_pack->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        pushButton_pack->setAutoDefault(false);
        pushButton_pack->setFlat(false);
        LineEdit_rechercher = new QLineEdit(centralwidget);
        LineEdit_rechercher->setObjectName("LineEdit_rechercher");
        LineEdit_rechercher->setGeometry(QRect(30, 80, 281, 41));
        LineEdit_rechercher->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_39 = new QLabel(centralwidget);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(278, 90, 21, 20));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_22.14.42-removebg-preview.png")));
        label_39->setScaledContents(true);
        label_43 = new QLabel(centralwidget);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(1100, 30, 51, 20));
        label_43->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(390, 519, 781, 201));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	\n"
"    border: 2px solid #8B0000; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(240, 0, 411, 31));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        tableViewRemise = new QTableView(groupBox_3);
        tableViewRemise->setObjectName("tableViewRemise");
        tableViewRemise->setGeometry(QRect(15, 30, 751, 141));
        tableViewRemise->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}\n"
""));
        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(188, 6, 41, 16));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_21.54.30-removebg-preview.png")));
        label_35->setScaledContents(true);
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 10, 51, 16));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.54.30-removebg-preview.png")));
        label->setScaledContents(true);
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(80, 30, 121, 31));
        pushButton_17->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #f8fff7; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #c6c6c6;   /* Darker grey on hover */\n"
"}"));
        pushButton_17->setAutoDefault(false);
        pushButton_17->setFlat(false);
        pushButton_fonctionalite = new QPushButton(centralwidget);
        pushButton_fonctionalite->setObjectName("pushButton_fonctionalite");
        pushButton_fonctionalite->setGeometry(QRect(290, 30, 121, 31));
        pushButton_fonctionalite->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        pushButton_fonctionalite->setAutoDefault(false);
        pushButton_fonctionalite->setFlat(false);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 20, 49, 41));
        label_19->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20-removebg-preview.png")));
        label_19->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(278, 90, 21, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/search.png")));
        label_3->setScaledContents(true);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(1060, 10, 49, 51));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/0de86780-dae2-4175-a752-c75985b139c6-removebg-preview.png")));
        label_10->setScaledContents(true);
        gestion_produit->setCentralWidget(centralwidget);

        retranslateUi(gestion_produit);

        pushButton_pack->setDefault(false);
        pushButton_17->setDefault(false);
        pushButton_fonctionalite->setDefault(false);


        QMetaObject::connectSlotsByName(gestion_produit);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_produit)
    {
        gestion_produit->setWindowTitle(QCoreApplication::translate("gestion_produit", "MainWindow", nullptr));
        label_13->setText(QString());
        label_2->setText(QString());
        groupBox_2->setTitle(QString());
        label_20->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; color:#0a0a55;\">Ajout d'un produit</span></p></body></html>", nullptr));
        label_22->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Date limite :</span></p></body></html>", nullptr));
        label_23->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Prix (TND) :</span></p></body></html>", nullptr));
        lineEdit_prix_2->setPlaceholderText(QCoreApplication::translate("gestion_produit", "0.00 TND", nullptr));
        label_24->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Nom :</span></p></body></html>", nullptr));
        label_26->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Est pack :</span></p></body></html>", nullptr));
        lineEdit_nom->setText(QString());
        lineEdit_nom->setPlaceholderText(QCoreApplication::translate("gestion_produit", "Entrez le nom du produit", nullptr));
        lineEdit_gamme_2->setPlaceholderText(QCoreApplication::translate("gestion_produit", "Entrez la gamme..", nullptr));
        label_27->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Cat\303\251gorie :</span></p></body></html>", nullptr));
        label_28->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Gamme :</span></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Description :</span></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-style:italic; color:#0a0a55;\">Fin de saison :</span></p></body></html>", nullptr));
        lineEdit_description->setPlaceholderText(QCoreApplication::translate("gestion_produit", "D\303\251crivez le produit ..", nullptr));
        pushButton_Ajouter->setText(QCoreApplication::translate("gestion_produit", "AJOUTER", nullptr));
        radioOui->setText(QCoreApplication::translate("gestion_produit", "Oui", nullptr));
        radioNon->setText(QCoreApplication::translate("gestion_produit", "Non", nullptr));
        label_21->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:7pt; color:#0a0a55;\">\342\226\274</span></p></body></html>", nullptr));
        label_38->setText(QString());
        label_18->setText(QString());
        label_36->setText(QString());
        groupBox->setTitle(QString());
        label_11->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:14pt; color:#0a0a55;\">Liste des tous les produits</span></p></body></html>", nullptr));
        pushButton_Supprimer->setText(QCoreApplication::translate("gestion_produit", "SUPPRIMER", nullptr));
        pushButton_Modifier->setText(QCoreApplication::translate("gestion_produit", "MODIFIER", nullptr));
        pushButton_exporter->setText(QCoreApplication::translate("gestion_produit", "EXPORTER", nullptr));
        label_4->setText(QString());
        label_34->setText(QString());
        label_17->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Trier par :</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:7pt; color:#0a0a55;\">\342\226\274</span></p></body></html>", nullptr));
        label_33->setText(QString());
        label_37->setText(QString());
        label_41->setText(QString());
        label_40->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_12->setText(QString());
        label_14->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        label_25->setText(QString());
        pushButton_pack->setText(QCoreApplication::translate("gestion_produit", "OFFRES  PACK", nullptr));
        LineEdit_rechercher->setText(QString());
        LineEdit_rechercher->setPlaceholderText(QCoreApplication::translate("gestion_produit", "Rechercher un produit...", nullptr));
        label_39->setText(QString());
        label_43->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ffffff;\">Admin</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label_32->setText(QCoreApplication::translate("gestion_produit", "<html><head/><body><p><span style=\" font-size:14pt; color:#8b0000;\">Liste des produits en remise</span></p></body></html>", nullptr));
        label_35->setText(QString());
        label->setText(QString());
        pushButton_17->setText(QCoreApplication::translate("gestion_produit", "ACCEUIL", nullptr));
        pushButton_fonctionalite->setText(QCoreApplication::translate("gestion_produit", "STATISTIQUES", nullptr));
        label_19->setText(QString());
        label_3->setText(QString());
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gestion_produit: public Ui_gestion_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_PRODUIT_H
