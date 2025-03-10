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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
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
    QFrame *frame;
    QFrame *frame_3;
    QLabel *ID;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_2;
    QPushButton *ajouter;
    QPushButton *modifer;
    QLineEdit *cin;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *email;
    QLineEdit *tel;
    QLineEdit *poste;
    QLineEdit *status;
    QLineEdit *IDEMPLOYE;
    QLineEdit *MOT_DE_PASSE;
    QLabel *label_15;
    QLabel *label_16;
    QTableView *table;
    QComboBox *comboBox;
    QLineEdit *recherche;
    QComboBox *tri;
    QPushButton *rech;
    QLineEdit *lineEdit_4;
    QPushButton *supprimer;
    QPushButton *export_2;
    QLabel *label_4;
    QLabel *icon_10;
    QPushButton *update;
    QWidget *widget;
    QPushButton *dashbord;
    QPushButton *clients;
    QPushButton *even;
    QPushButton *emp;
    QPushButton *produit;
    QPushButton *magasings;
    QPushButton *pushButton_7;
    QLabel *icon;
    QLabel *icon_2;
    QLabel *icon_3;
    QLabel *icon_4;
    QLabel *icon_5;
    QLabel *icon_6;
    QLabel *icon_7;
    QLabel *icon_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1527, 780);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(210, 0, 1101, 721));
        frame->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(206, 206, 206);\n"
"background-color: white;\n"
"background-color: #E3E3E7;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(50, 20, 291, 691));
        frame_3->setStyleSheet(QString::fromUtf8("\n"
" background: #4a9ea5;\n"
"border-radius: 25px;\n"
""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        ID = new QLabel(frame_3);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(10, 40, 151, 31));
        ID->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 250, 71, 31));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 310, 111, 41));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 390, 71, 31));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 450, 171, 41));
        label_13->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 510, 181, 41));
        label_14->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 570, 181, 41));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        ajouter = new QPushButton(frame_3);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(0, 640, 140, 41));
        ajouter->setStyleSheet(QString::fromUtf8(" background-color: #ffffff;         /* Fond blanc */\n"
"    border: 1px solid #4a9ea5;         /* Bordure bleue plus fine */\n"
"    border-radius: 10px;               /* Coins l\303\251g\303\250rement arrondis */\n"
"    padding: 8px 16px;                /* Espacement r\303\251duit */\n"
"    color: #4a9ea5;                   /* Texte bleu */\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;                  /* Taille de police r\303\251duite */\n"
"    margin: 3px;                      /* Marge plus serr\303\251e */\n"
"    min-width: 100px;                 /* Largeur minimale r\303\251duite */\n"
"    text-align: center;"));
        ajouter->setFlat(false);
        modifer = new QPushButton(frame_3);
        modifer->setObjectName("modifer");
        modifer->setGeometry(QRect(150, 640, 140, 41));
        modifer->setStyleSheet(QString::fromUtf8(" background-color: #ffffff;         /* Fond blanc */\n"
"    border: 1px solid #4a9ea5;         /* Bordure bleue plus fine */\n"
"    border-radius: 10px;               /* Coins l\303\251g\303\250rement arrondis */\n"
"    padding: 8px 16px;                /* Espacement r\303\251duit */\n"
"    color: #4a9ea5;                   /* Texte bleu */\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;                  /* Taille de police r\303\251duite */\n"
"    margin: 3px;                      /* Marge plus serr\303\251e */\n"
"    min-width: 100px;                 /* Largeur minimale r\303\251duite */\n"
"    text-align: center;"));
        modifer->setFlat(false);
        cin = new QLineEdit(frame_3);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(20, 210, 261, 28));
        cin->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        nom = new QLineEdit(frame_3);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(20, 280, 261, 28));
        nom->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        prenom = new QLineEdit(frame_3);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(20, 350, 261, 28));
        prenom->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        email = new QLineEdit(frame_3);
        email->setObjectName("email");
        email->setGeometry(QRect(20, 420, 261, 28));
        email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        tel = new QLineEdit(frame_3);
        tel->setObjectName("tel");
        tel->setGeometry(QRect(20, 480, 261, 28));
        tel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        poste = new QLineEdit(frame_3);
        poste->setObjectName("poste");
        poste->setGeometry(QRect(20, 540, 261, 28));
        poste->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        status = new QLineEdit(frame_3);
        status->setObjectName("status");
        status->setGeometry(QRect(20, 600, 261, 28));
        status->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        IDEMPLOYE = new QLineEdit(frame_3);
        IDEMPLOYE->setObjectName("IDEMPLOYE");
        IDEMPLOYE->setGeometry(QRect(20, 70, 261, 28));
        IDEMPLOYE->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        MOT_DE_PASSE = new QLineEdit(frame_3);
        MOT_DE_PASSE->setObjectName("MOT_DE_PASSE");
        MOT_DE_PASSE->setGeometry(QRect(20, 140, 261, 28));
        MOT_DE_PASSE->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 180, 151, 31));
        label_15->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 110, 151, 31));
        label_16->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        table = new QTableView(frame);
        table->setObjectName("table");
        table->setGeometry(QRect(390, 150, 651, 431));
        table->setStyleSheet(QString::fromUtf8(" background: #4a9ea5;\n"
"color: white;\n"
"border: none;\n"
"padding: 5px;"));
        comboBox = new QComboBox(frame);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(710, 47, 111, 31));
        comboBox->setStyleSheet(QString::fromUtf8("border: 2px solid #4a9ea5;\n"
"background-color: white;\n"
"\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        recherche = new QLineEdit(frame);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(400, 40, 301, 41));
        recherche->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"border: 2px solid #4a9ea5;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background-color: white;"));
        tri = new QComboBox(frame);
        tri->addItem(QString());
        tri->setObjectName("tri");
        tri->setGeometry(QRect(470, 90, 161, 31));
        tri->setStyleSheet(QString::fromUtf8("border: 2px solid #4a9ea5;\n"
"background-color: white;\n"
"\n"
"border-radius: 10px;\n"
"padding: 5px;"));
        rech = new QPushButton(frame);
        rech->setObjectName("rech");
        rech->setGeometry(QRect(670, 50, 24, 24));
        rech->setStyleSheet(QString::fromUtf8("background-image: url(:/rech/rech.png);\n"
"   \n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    min-width: 24px;\n"
"    min-height: 24px;\n"
"    max-width: 24px;\n"
"    max-height: 24px;\n"
"background-color: white;"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(660, 90, 101, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"border: 2px solid #4a9ea5;\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background-color: white;"));
        supprimer = new QPushButton(frame);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(770, 90, 140, 41));
        supprimer->setStyleSheet(QString::fromUtf8(" background-color: #ffffff;         /* Fond blanc */\n"
"    border: 1px solid #4a9ea5;         /* Bordure bleue plus fine */\n"
"    border-radius: 10px;               /* Coins l\303\251g\303\250rement arrondis */\n"
"    padding: 8px 16px;                /* Espacement r\303\251duit */\n"
"    color: #4a9ea5;                   /* Texte bleu */\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;                  /* Taille de police r\303\251duite */\n"
"    margin: 3px;                      /* Marge plus serr\303\251e */\n"
"    min-width: 100px;                 /* Largeur minimale r\303\251duite */\n"
"    text-align: center;"));
        supprimer->setFlat(false);
        export_2 = new QPushButton(frame);
        export_2->setObjectName("export_2");
        export_2->setGeometry(QRect(930, 550, 140, 41));
        export_2->setStyleSheet(QString::fromUtf8(" background-color: #ffffff;         /* Fond blanc */\n"
"    border: 1px solid #4a9ea5;         /* Bordure bleue plus fine */\n"
"    border-radius: 10px;               /* Coins l\303\251g\303\250rement arrondis */\n"
"    padding: 8px 16px;                /* Espacement r\303\251duit */\n"
"    color: #4a9ea5;                   /* Texte bleu */\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;                  /* Taille de police r\303\251duite */\n"
"    margin: 3px;                      /* Marge plus serr\303\251e */\n"
"    min-width: 100px;                 /* Largeur minimale r\303\251duite */\n"
"    text-align: center;"));
        export_2->setFlat(false);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(100, 0, 201, 61));
        label_4->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"\n"
"\n"
"border-radius: 10px;\n"
"\n"
"cursor: pointer;\n"
"font-size: 25px;\n"
" text-align: center;\n"
" color: #000000;\n"
"font-size: 18px;\n"
"margin-bottom: 20px;\n"
"text-align: center;\n"
"  font-family: \"Arial\";\n"
" padding: 8px 16px; \n"
"\n"
"   \n"
"\n"
"   \n"
" "));
        icon_10 = new QLabel(frame);
        icon_10->setObjectName("icon_10");
        icon_10->setGeometry(QRect(900, 10, 191, 61));
        icon_10->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"\n"
"\n"
"border-radius: 10px;\n"
"\n"
"cursor: pointer;\n"
"font-size: 25px;\n"
" text-align: center;\n"
" color: #000000;\n"
"font-size: 18px;\n"
"margin-bottom: 20px;\n"
"text-align: center;\n"
"  font-family: \"Arial\";\n"
" padding: 8px 16px; \n"
"\n"
"   \n"
"\n"
"   \n"
" "));
        update = new QPushButton(frame);
        update->setObjectName("update");
        update->setGeometry(QRect(360, 650, 140, 41));
        update->setStyleSheet(QString::fromUtf8(" background-color: #ffffff;         /* Fond blanc */\n"
"    border: 1px solid #4a9ea5;         /* Bordure bleue plus fine */\n"
"    border-radius: 10px;               /* Coins l\303\251g\303\250rement arrondis */\n"
"    padding: 8px 16px;                /* Espacement r\303\251duit */\n"
"    color: #4a9ea5;                   /* Texte bleu */\n"
"    font-family: \"Arial\";\n"
"    font-size: 12px;                  /* Taille de police r\303\251duite */\n"
"    margin: 3px;                      /* Marge plus serr\303\251e */\n"
"    min-width: 100px;                 /* Largeur minimale r\303\251duite */\n"
"    text-align: center;"));
        update->setFlat(false);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-20, 0, 231, 731));
        widget->setStyleSheet(QString::fromUtf8("\n"
" background: #4a9ea5;\n"
"color: white;\n"
"border: none;\n"
"padding: 5px;\n"
"\n"
"selection-background-color: #497888;\n"
"selection-color: white;\n"
"border-radius: 10px;\n"
""));
        dashbord = new QPushButton(widget);
        dashbord->setObjectName("dashbord");
        dashbord->setGeometry(QRect(20, 150, 231, 41));
        dashbord->setStyleSheet(QString::fromUtf8("\n"
"    color: white;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 25px;\n"
"\n"
"font-weight: bold;\n"
"color: white;\n"
"padding: 8px;"));
        clients = new QPushButton(widget);
        clients->setObjectName("clients");
        clients->setGeometry(QRect(-20, 230, 261, 41));
        clients->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        even = new QPushButton(widget);
        even->setObjectName("even");
        even->setGeometry(QRect(20, 300, 231, 41));
        even->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        emp = new QPushButton(widget);
        emp->setObjectName("emp");
        emp->setGeometry(QRect(10, 380, 241, 51));
        emp->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        produit = new QPushButton(widget);
        produit->setObjectName("produit");
        produit->setGeometry(QRect(10, 530, 231, 41));
        produit->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        magasings = new QPushButton(widget);
        magasings->setObjectName("magasings");
        magasings->setGeometry(QRect(-30, 460, 271, 41));
        magasings->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 600, 241, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("font-weight: bold;\n"
"color: white;\n"
"padding: 8px;\n"
"font-size: 25px;"));
        icon = new QLabel(widget);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(80, 50, 66, 66));
        icon->setStyleSheet(QString::fromUtf8("background-image: url(:/log/log.png);\n"
" min-width: 56px;\n"
"    min-height: 56px;\n"
"    max-width: 56px;\n"
"    max-height: 56px;"));
        icon_2 = new QLabel(widget);
        icon_2->setObjectName("icon_2");
        icon_2->setGeometry(QRect(10, 220, 53, 50));
        icon_2->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/hh/hh.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_3 = new QLabel(widget);
        icon_3->setObjectName("icon_3");
        icon_3->setGeometry(QRect(10, 140, 53, 50));
        icon_3->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/hom/hom.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_4 = new QLabel(widget);
        icon_4->setObjectName("icon_4");
        icon_4->setGeometry(QRect(10, 300, 53, 50));
        icon_4->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/ev/ev.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_5 = new QLabel(widget);
        icon_5->setObjectName("icon_5");
        icon_5->setGeometry(QRect(10, 380, 53, 50));
        icon_5->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/ikn/ikn.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_6 = new QLabel(widget);
        icon_6->setObjectName("icon_6");
        icon_6->setGeometry(QRect(10, 460, 53, 50));
        icon_6->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/kol/kol.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_7 = new QLabel(widget);
        icon_7->setObjectName("icon_7");
        icon_7->setGeometry(QRect(10, 530, 53, 50));
        icon_7->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/kk/kk.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        icon_8 = new QLabel(widget);
        icon_8->setObjectName("icon_8");
        icon_8->setGeometry(QRect(10, 600, 53, 50));
        icon_8->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/lh/lh.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: contain;\n"
"    \n"
"    \n"
"    /* Taille fixe du QLabel */\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    max-width: 40px;\n"
"    max-height: 40px;\n"
"    \n"
"    /* Style de l'avatar */\n"
"   color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */"));
        icon_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1527, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        ajouter->setDefault(false);
        modifer->setDefault(false);
        supprimer->setDefault(false);
        export_2->setDefault(false);
        update->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", "ID EMPLOYER", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "NOM", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "PRENOM", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "EMAIL", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "TELEPHONE", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "POSTE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
        ajouter->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        modifer->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "MODE DE  PASSE", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "NOM", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "prenom", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "poste", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "satatus", nullptr));

#if QT_CONFIG(whatsthis)
        comboBox->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>prenom</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        comboBox->setPlaceholderText(QString());
        recherche->setText(QCoreApplication::translate("MainWindow", "RECHERCHE  EMPLLOYER ....", nullptr));
        tri->setItemText(0, QCoreApplication::translate("MainWindow", "TRI PAR SALAIRE", nullptr));

#if QT_CONFIG(whatsthis)
        tri->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p>prenom</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tri->setPlaceholderText(QString());
        rech->setText(QString());
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "CIN", nullptr));
        supprimer->setText(QCoreApplication::translate("MainWindow", "SUPPRIMER ", nullptr));
        export_2->setText(QCoreApplication::translate("MainWindow", "Export pdf", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "AJOUTER EMPLOYER", nullptr));
        icon_10->setText(QCoreApplication::translate("MainWindow", "ADMIN", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "modier", nullptr));
        dashbord->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        even->setText(QCoreApplication::translate("MainWindow", "\303\211v\303\251nement", nullptr));
        emp->setText(QCoreApplication::translate("MainWindow", "Employ\303\251s", nullptr));
        produit->setText(QCoreApplication::translate("MainWindow", "Produits", nullptr));
        magasings->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Magasins", nullptr));
        icon->setText(QString());
        icon_2->setText(QString());
        icon_3->setText(QString());
        icon_4->setText(QString());
        icon_5->setText(QString());
        icon_6->setText(QString());
        icon_7->setText(QString());
        icon_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
