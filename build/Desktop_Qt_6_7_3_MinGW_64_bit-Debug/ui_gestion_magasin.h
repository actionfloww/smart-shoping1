/********************************************************************************
** Form generated from reading UI file 'gestion_magasin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_MAGASIN_H
#define UI_GESTION_MAGASIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_magasin
{
public:
    QWidget *centralwidget;
    QGroupBox *gestion_magasin_groupeBox;
    QLabel *label_24;
    QPushButton *bt_acceuil;
    QPushButton *Meilleur;
    QLabel *label_23;
    QPushButton *bt_go_tostat;
    QLineEdit *lineEdit_3;
    QLabel *label_13;
    QGroupBox *page_magasin;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_8;
    QDateEdit *dateEdit_4;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QLabel *label_5;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QPushButton *update;
    QLabel *label_9;
    QComboBox *lineEdit_7;
    QComboBox *lineEdit_8;
    QLabel *label_6;
    QLineEdit *email_prop;
    QLabel *label_29;
    QComboBox *ETAGE;
    QGroupBox *groupBox;
    QLabel *label_10;
    QLineEdit *updatee;
    QPushButton *pushButton_Map;
    QTableView *tableView;
    QPushButton *sup;
    QComboBox *choix;
    QComboBox *ordre;
    QLabel *label_25;
    QLineEdit *lineEdit_5;
    QPushButton *filter;
    QPushButton *PDF;
    QGroupBox *page_magasin_stat;
    QLabel *label_stat_etat;
    QLabel *label_stat_type;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;

    void setupUi(QMainWindow *gestion_magasin)
    {
        if (gestion_magasin->objectName().isEmpty())
            gestion_magasin->setObjectName("gestion_magasin");
        gestion_magasin->resize(1570, 760);
        centralwidget = new QWidget(gestion_magasin);
        centralwidget->setObjectName("centralwidget");
        gestion_magasin_groupeBox = new QGroupBox(centralwidget);
        gestion_magasin_groupeBox->setObjectName("gestion_magasin_groupeBox");
        gestion_magasin_groupeBox->setGeometry(QRect(0, 0, 1920, 1080));
        gestion_magasin_groupeBox->setStyleSheet(QString::fromUtf8("  border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;  "));
        label_24 = new QLabel(gestion_magasin_groupeBox);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(270, 11, 101, 91));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-01_at_11.43.20__1_-removebg-preview.png")));
        label_24->setScaledContents(true);
        bt_acceuil = new QPushButton(gestion_magasin_groupeBox);
        bt_acceuil->setObjectName("bt_acceuil");
        bt_acceuil->setGeometry(QRect(80, 20, 141, 41));
        bt_acceuil->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        Meilleur = new QPushButton(gestion_magasin_groupeBox);
        Meilleur->setObjectName("Meilleur");
        Meilleur->setGeometry(QRect(560, 20, 181, 41));
        Meilleur->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        label_23 = new QLabel(gestion_magasin_groupeBox);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 31, 63, 51));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-01_at_11.43.20-removebg-preview.png")));
        label_23->setScaledContents(true);
        bt_go_tostat = new QPushButton(gestion_magasin_groupeBox);
        bt_go_tostat->setObjectName("bt_go_tostat");
        bt_go_tostat->setGeometry(QRect(330, 20, 141, 41));
        bt_go_tostat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;    \n"
"}"));
        lineEdit_3 = new QLineEdit(gestion_magasin_groupeBox);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(640, 151, 201, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:black;"));
        label_13 = new QLabel(gestion_magasin_groupeBox);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, -70, 1641, 141));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27.jpeg")));
        label_13->setScaledContents(true);
        page_magasin = new QGroupBox(gestion_magasin_groupeBox);
        page_magasin->setObjectName("page_magasin");
        page_magasin->setGeometry(QRect(10, 91, 1631, 951));
        page_magasin->setStyleSheet(QString::fromUtf8("  border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;  "));
        groupBox_2 = new QGroupBox(page_magasin);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(0, 0, 391, 611));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	\n"
"    border: 2px solid  #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 10, 251, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 510, 121, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 390, 81, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Georgia")});
        font2.setBold(false);
        font2.setItalic(true);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 330, 171, 21));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        dateEdit_4 = new QDateEdit(groupBox_2);
        dateEdit_4->setObjectName("dateEdit_4");
        dateEdit_4->setGeometry(QRect(160, 330, 151, 26));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Georgia")});
        font3.setPointSize(8);
        dateEdit_4->setFont(font3);
        dateEdit_4->setStyleSheet(QString::fromUtf8("color:black;"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 200, 131, 31));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        lineEdit_6 = new QLineEdit(groupBox_2);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(170, 200, 113, 26));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 120, 141, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        textEdit_2 = new QTextEdit(groupBox_2);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(160, 100, 151, 51));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 63, 20));
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        lineEdit_4 = new QLineEdit(groupBox_2);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(120, 60, 113, 26));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        update = new QPushButton(groupBox_2);
        update->setObjectName("update");
        update->setGeometry(QRect(230, 510, 121, 41));
        update->setFont(font1);
        update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 430, 81, 21));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        lineEdit_7 = new QComboBox(groupBox_2);
        lineEdit_7->addItem(QString());
        lineEdit_7->addItem(QString());
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(170, 380, 121, 28));
        lineEdit_7->setStyleSheet(QString::fromUtf8("color:black;"));
        lineEdit_8 = new QComboBox(groupBox_2);
        lineEdit_8->addItem(QString());
        lineEdit_8->addItem(QString());
        lineEdit_8->addItem(QString());
        lineEdit_8->addItem(QString());
        lineEdit_8->addItem(QString());
        lineEdit_8->addItem(QString());
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(170, 420, 121, 28));
        lineEdit_8->setStyleSheet(QString::fromUtf8("color:black;"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 250, 111, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        email_prop = new QLineEdit(groupBox_2);
        email_prop->setObjectName("email_prop");
        email_prop->setGeometry(QRect(150, 250, 141, 26));
        email_prop->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        label_29 = new QLabel(groupBox_2);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 470, 81, 21));
        label_29->setFont(font2);
        label_29->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #2c3e50;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        ETAGE = new QComboBox(groupBox_2);
        ETAGE->addItem(QString());
        ETAGE->addItem(QString());
        ETAGE->addItem(QString());
        ETAGE->setObjectName("ETAGE");
        ETAGE->setGeometry(QRect(170, 460, 121, 28));
        ETAGE->setStyleSheet(QString::fromUtf8("color:black;"));
        label_3->raise();
        pushButton->raise();
        label_7->raise();
        label_8->raise();
        dateEdit_4->raise();
        label_4->raise();
        lineEdit_6->raise();
        label_5->raise();
        textEdit_2->raise();
        label->raise();
        update->raise();
        label_9->raise();
        lineEdit_7->raise();
        lineEdit_8->raise();
        label_6->raise();
        email_prop->raise();
        lineEdit_4->raise();
        label_29->raise();
        ETAGE->raise();
        groupBox = new QGroupBox(page_magasin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(400, 100, 741, 511));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	\n"
"    border: 2px solid  #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
"}"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(80, 20, 201, 20));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #0a0a55;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        updatee = new QLineEdit(groupBox);
        updatee->setObjectName("updatee");
        updatee->setGeometry(QRect(750, 60, 113, 26));
        updatee->setStyleSheet(QString::fromUtf8("color:black;"));
        pushButton_Map = new QPushButton(groupBox);
        pushButton_Map->setObjectName("pushButton_Map");
        pushButton_Map->setGeometry(QRect(20, 10, 41, 41));
        pushButton_Map->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(50, 100, 681, 331));
        tableView->setStyleSheet(QString::fromUtf8("color:black;"));
        sup = new QPushButton(groupBox);
        sup->setObjectName("sup");
        sup->setGeometry(QRect(680, 10, 51, 31));
        sup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/bin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sup->setIcon(icon);
        choix = new QComboBox(page_magasin);
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->addItem(QString());
        choix->setObjectName("choix");
        choix->setGeometry(QRect(770, 10, 131, 28));
        choix->setStyleSheet(QString::fromUtf8("color:black;"));
        ordre = new QComboBox(page_magasin);
        ordre->addItem(QString());
        ordre->addItem(QString());
        ordre->setObjectName("ordre");
        ordre->setGeometry(QRect(930, 10, 61, 28));
        ordre->setStyleSheet(QString::fromUtf8("color:black;"));
        label_25 = new QLabel(page_magasin);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(410, 10, 131, 20));
        label_25->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #0a0a55;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        lineEdit_5 = new QLineEdit(page_magasin);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(530, 0, 221, 41));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;"));
        filter = new QPushButton(page_magasin);
        filter->setObjectName("filter");
        filter->setGeometry(QRect(520, 60, 83, 29));
        filter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/filter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        filter->setIcon(icon1);
        PDF = new QPushButton(page_magasin);
        PDF->setObjectName("PDF");
        PDF->setGeometry(QRect(410, 60, 83, 29));
        PDF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/pdf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        PDF->setIcon(icon2);
        page_magasin_stat = new QGroupBox(gestion_magasin_groupeBox);
        page_magasin_stat->setObjectName("page_magasin_stat");
        page_magasin_stat->setGeometry(QRect(10, 91, 1691, 961));
        page_magasin_stat->setStyleSheet(QString::fromUtf8("  border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;  "));
        label_stat_etat = new QLabel(page_magasin_stat);
        label_stat_etat->setObjectName("label_stat_etat");
        label_stat_etat->setGeometry(QRect(150, 50, 541, 471));
        label_stat_etat->setStyleSheet(QString::fromUtf8("  border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"color: #0a0a55;  "));
        label_stat_type = new QLabel(page_magasin_stat);
        label_stat_type->setObjectName("label_stat_type");
        label_stat_type->setGeometry(QRect(710, 50, 541, 471));
        label_stat_type->raise();
        label_stat_etat->raise();
        label_26 = new QLabel(gestion_magasin_groupeBox);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(10, 10, 61, 51));
        label_26->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20-removebg-preview.png")));
        label_26->setScaledContents(true);
        label_27 = new QLabel(gestion_magasin_groupeBox);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(240, -20, 101, 101));
        label_27->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_27->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20__1_-removebg-preview.png")));
        label_27->setScaledContents(true);
        label_28 = new QLabel(gestion_magasin_groupeBox);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(500, 10, 41, 41));
        label_28->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/image/ranking-star (1).png")));
        label_28->setScaledContents(true);
        label_24->raise();
        label_23->raise();
        lineEdit_3->raise();
        label_13->raise();
        Meilleur->raise();
        bt_go_tostat->raise();
        bt_acceuil->raise();
        page_magasin_stat->raise();
        page_magasin->raise();
        label_26->raise();
        label_27->raise();
        label_28->raise();
        gestion_magasin->setCentralWidget(centralwidget);

        retranslateUi(gestion_magasin);

        QMetaObject::connectSlotsByName(gestion_magasin);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_magasin)
    {
        gestion_magasin->setWindowTitle(QCoreApplication::translate("gestion_magasin", "MainWindow", nullptr));
        gestion_magasin_groupeBox->setTitle(QString());
        label_24->setText(QString());
        bt_acceuil->setText(QCoreApplication::translate("gestion_magasin", "ACCEUIL", nullptr));
        Meilleur->setText(QCoreApplication::translate("gestion_magasin", "MEILLEUR MAGASIN", nullptr));
        label_23->setText(QString());
        bt_go_tostat->setText(QCoreApplication::translate("gestion_magasin", "STATISTIQUES", nullptr));
        label_13->setText(QString());
        page_magasin->setTitle(QString());
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; font-style:normal; color:#0a0a55;\">Ajout d un magasin</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("gestion_magasin", "VALIDER", nullptr));
        label_7->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Etat:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Date ouverture:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Proprietaire:</span></p></body></html>", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("gestion_magasin", "entrez proprietaire", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Emplacement:</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("gestion_magasin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Georgia','Times New Roman','serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Segoe UI';\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Nom:</span></p></body></html>", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("gestion_magasin", "entrez nom", nullptr));
        update->setText(QCoreApplication::translate("gestion_magasin", "MODIFIER", nullptr));
        label_9->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Type:</span></p></body></html>", nullptr));
        lineEdit_7->setItemText(0, QCoreApplication::translate("gestion_magasin", "Ouvert", nullptr));
        lineEdit_7->setItemText(1, QCoreApplication::translate("gestion_magasin", "Ferme", nullptr));

        lineEdit_8->setItemText(0, QCoreApplication::translate("gestion_magasin", "Vetement", nullptr));
        lineEdit_8->setItemText(1, QCoreApplication::translate("gestion_magasin", "Chaussures", nullptr));
        lineEdit_8->setItemText(2, QCoreApplication::translate("gestion_magasin", "Electronique", nullptr));
        lineEdit_8->setItemText(3, QCoreApplication::translate("gestion_magasin", "Alimentation", nullptr));
        lineEdit_8->setItemText(4, QCoreApplication::translate("gestion_magasin", "Sante & Beaute", nullptr));
        lineEdit_8->setItemText(5, QCoreApplication::translate("gestion_magasin", "Restauration", nullptr));

        label_6->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Email:</span></p></body></html>", nullptr));
        email_prop->setPlaceholderText(QCoreApplication::translate("gestion_magasin", "entrez email", nullptr));
        label_29->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#0a0a55;\">Etage:</span></p></body></html>", nullptr));
        ETAGE->setItemText(0, QCoreApplication::translate("gestion_magasin", "1", nullptr));
        ETAGE->setItemText(1, QCoreApplication::translate("gestion_magasin", "2", nullptr));
        ETAGE->setItemText(2, QCoreApplication::translate("gestion_magasin", "3", nullptr));

        groupBox->setTitle(QString());
        label_10->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:normal; color:#0a0a55;\">Map Des Magasins</span></p></body></html>", nullptr));
        pushButton_Map->setText(QCoreApplication::translate("gestion_magasin", "\360\237\223\215", nullptr));
        sup->setText(QString());
        choix->setItemText(0, QCoreApplication::translate("gestion_magasin", "NOM_MAGASIN", nullptr));
        choix->setItemText(1, QCoreApplication::translate("gestion_magasin", "EMPLACEMENT", nullptr));
        choix->setItemText(2, QCoreApplication::translate("gestion_magasin", "TYPE", nullptr));
        choix->setItemText(3, QCoreApplication::translate("gestion_magasin", "PROPRIETAIRE", nullptr));
        choix->setItemText(4, QCoreApplication::translate("gestion_magasin", "DATE_OUVERTURE", nullptr));
        choix->setItemText(5, QCoreApplication::translate("gestion_magasin", "ETAT", nullptr));
        choix->setItemText(6, QCoreApplication::translate("gestion_magasin", "EMAIL_PROP", nullptr));
        choix->setItemText(7, QCoreApplication::translate("gestion_magasin", "ETAGE", nullptr));

        ordre->setItemText(0, QCoreApplication::translate("gestion_magasin", "ASC", nullptr));
        ordre->setItemText(1, QCoreApplication::translate("gestion_magasin", "DESC", nullptr));

        label_25->setText(QCoreApplication::translate("gestion_magasin", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700;\">Rechercher</span></p></body></html>", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("gestion_magasin", "cherchez", nullptr));
        filter->setText(QString());
        PDF->setText(QString());
        page_magasin_stat->setTitle(QString());
        label_stat_etat->setText(QString());
        label_stat_type->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gestion_magasin: public Ui_gestion_magasin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_MAGASIN_H
