/********************************************************************************
** Form generated from reading UI file 'wins.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINS_H
#define UI_WINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wins
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btnAfficher;
    QPushButton *btnEnvoyerSMS;
    QTableView *tableView;
    QFrame *frame_2;
    QFrame *frame_3;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_24;
    QWidget *widget_30;
    QLineEdit *lineEditEmail;
    QWidget *widget_31;
    QLineEdit *lineEditPrenom;
    QWidget *widget_32;
    QLineEdit *lineEditID;
    QWidget *widget_33;
    QLineEdit *lineEditNom;
    QWidget *widget_34;
    QLineEdit *lineEditTelephone;
    QWidget *widget_35;
    QLineEdit *lineEditPointFidelite;
    QPushButton *btnAjouter;
    QPushButton *btnModifier;
    QTextEdit *textEdit_27;
    QPushButton *btnSupprimer;
    QLabel *labelEtoiles;
    QLabel *label_10;
    QComboBox *comboBoxTri;
    QTableView *tableViewAchats;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView_2;
    QPushButton *btnAfficher_2;
    QPushButton *arduino;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *btnEnvoyerSMS_2;
    QPushButton *buttonStats;
    QPushButton *btnPDF;
    QPushButton *buttonAchat;
    QLineEdit *lineEditRecherche;
    QPushButton *acceuil;
    QLabel *label_21;
    QLabel *label_22;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QPushButton *enregistrer;
    QLineEdit *UID;
    QLineEdit *cin;
    QLabel *statusLabel;
    QPushButton *page1;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *wins)
    {
        if (wins->objectName().isEmpty())
            wins->setObjectName("wins");
        wins->resize(1052, 681);
        centralwidget = new QWidget(wins);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 1041, 661));
        page = new QWidget();
        page->setObjectName("page");
        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1081, 671));
        tab = new QWidget();
        tab->setObjectName("tab");
        btnAfficher = new QPushButton(tab);
        btnAfficher->setObjectName("btnAfficher");
        btnAfficher->setGeometry(QRect(650, 340, 81, 31));
        btnAfficher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        btnEnvoyerSMS = new QPushButton(tab);
        btnEnvoyerSMS->setObjectName("btnEnvoyerSMS");
        btnEnvoyerSMS->setGeometry(QRect(520, 350, 81, 21));
        QFont font;
        font.setBold(true);
        btnEnvoyerSMS->setFont(font);
        btnEnvoyerSMS->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        tableView = new QTableView(tab);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(480, 200, 361, 181));
        tableView->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;\n"
""));
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-70, -100, 1141, 821));
        QFont font1;
        font1.setPointSize(12);
        frame_2->setFont(font1);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #c6c6c6\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(70, 170, 271, 551));
        frame_3->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 19px; /* Change the value for more or less rounding */\n"
"    border: 2px solid black;  /* Contour noir de 2px */\n"
"    padding: 2px;            /* Espace int\303\251rieur */\n"
"\n"
"\n"
"\n"
""));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        textEdit_13 = new QTextEdit(frame_3);
        textEdit_13->setObjectName("textEdit_13");
        textEdit_13->setGeometry(QRect(10, 10, 161, 31));
        textEdit_13->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        textEdit_15 = new QTextEdit(frame_3);
        textEdit_15->setObjectName("textEdit_15");
        textEdit_15->setGeometry(QRect(10, 130, 161, 31));
        textEdit_15->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        textEdit_16 = new QTextEdit(frame_3);
        textEdit_16->setObjectName("textEdit_16");
        textEdit_16->setGeometry(QRect(10, 70, 161, 31));
        textEdit_16->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        textEdit_17 = new QTextEdit(frame_3);
        textEdit_17->setObjectName("textEdit_17");
        textEdit_17->setGeometry(QRect(10, 190, 161, 31));
        textEdit_17->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        textEdit_24 = new QTextEdit(frame_3);
        textEdit_24->setObjectName("textEdit_24");
        textEdit_24->setGeometry(QRect(10, 250, 161, 31));
        textEdit_24->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        widget_30 = new QWidget(frame_3);
        widget_30->setObjectName("widget_30");
        widget_30->setGeometry(QRect(10, 220, 201, 31));
        widget_30->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditEmail = new QLineEdit(widget_30);
        lineEditEmail->setObjectName("lineEditEmail");
        lineEditEmail->setGeometry(QRect(0, 0, 201, 31));
        widget_31 = new QWidget(frame_3);
        widget_31->setObjectName("widget_31");
        widget_31->setGeometry(QRect(10, 160, 201, 31));
        widget_31->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditPrenom = new QLineEdit(widget_31);
        lineEditPrenom->setObjectName("lineEditPrenom");
        lineEditPrenom->setGeometry(QRect(0, 0, 201, 31));
        widget_32 = new QWidget(frame_3);
        widget_32->setObjectName("widget_32");
        widget_32->setGeometry(QRect(10, 40, 201, 31));
        widget_32->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditID = new QLineEdit(widget_32);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setGeometry(QRect(0, 0, 201, 31));
        widget_33 = new QWidget(frame_3);
        widget_33->setObjectName("widget_33");
        widget_33->setGeometry(QRect(10, 100, 201, 31));
        widget_33->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditNom = new QLineEdit(widget_33);
        lineEditNom->setObjectName("lineEditNom");
        lineEditNom->setGeometry(QRect(0, 0, 201, 31));
        widget_34 = new QWidget(frame_3);
        widget_34->setObjectName("widget_34");
        widget_34->setGeometry(QRect(10, 280, 201, 31));
        widget_34->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditTelephone = new QLineEdit(widget_34);
        lineEditTelephone->setObjectName("lineEditTelephone");
        lineEditTelephone->setGeometry(QRect(0, 0, 201, 31));
        widget_35 = new QWidget(frame_3);
        widget_35->setObjectName("widget_35");
        widget_35->setGeometry(QRect(10, 350, 201, 31));
        widget_35->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditPointFidelite = new QLineEdit(widget_35);
        lineEditPointFidelite->setObjectName("lineEditPointFidelite");
        lineEditPointFidelite->setGeometry(QRect(0, 0, 201, 31));
        btnAjouter = new QPushButton(frame_3);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(10, 430, 81, 31));
        btnAjouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        btnModifier = new QPushButton(frame_3);
        btnModifier->setObjectName("btnModifier");
        btnModifier->setGeometry(QRect(130, 430, 81, 31));
        btnModifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        textEdit_27 = new QTextEdit(frame_3);
        textEdit_27->setObjectName("textEdit_27");
        textEdit_27->setGeometry(QRect(10, 320, 191, 31));
        textEdit_27->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: white;                    /* Text color */\n"
"    font-weight: white;               /* Bold text */\n"
"    font-size: 20px;                 /* Font size 20 */\n"
"    qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}\n"
""));
        btnSupprimer = new QPushButton(frame_3);
        btnSupprimer->setObjectName("btnSupprimer");
        btnSupprimer->setGeometry(QRect(70, 470, 81, 31));
        btnSupprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        labelEtoiles = new QLabel(frame_3);
        labelEtoiles->setObjectName("labelEtoiles");
        labelEtoiles->setGeometry(QRect(40, 390, 131, 31));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(390, 260, 61, 16));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        label_10->setFont(font2);
        comboBoxTri = new QComboBox(frame_2);
        comboBoxTri->addItem(QString());
        comboBoxTri->addItem(QString());
        comboBoxTri->addItem(QString());
        comboBoxTri->addItem(QString());
        comboBoxTri->addItem(QString());
        comboBoxTri->setObjectName("comboBoxTri");
        comboBoxTri->setGeometry(QRect(680, 220, 71, 22));
        comboBoxTri->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        tableViewAchats = new QTableView(frame_2);
        tableViewAchats->setObjectName("tableViewAchats");
        tableViewAchats->setGeometry(QRect(520, 490, 301, 171));
        tableViewAchats->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;\n"
"    border: 2px solid black;  /* Contour noir de 2px */\n"
"    padding: 2px;            /* Espace int\303\251rieur */\n"
""));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 60, 101, 20));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setStrikeOut(false);
        label->setFont(font3);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 220, 16, 16));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(true);
        label_2->setFont(font4);
        tableView_2 = new QTableView(frame_2);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(380, 280, 361, 181));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;\n"
"\n"
" border: 2px solid black;  /* Contour noir de 2px */\n"
" padding: 2px;            /* Espace int\303\251rieur */"));
        btnAfficher_2 = new QPushButton(frame_2);
        btnAfficher_2->setObjectName("btnAfficher_2");
        btnAfficher_2->setGeometry(QRect(420, 470, 81, 31));
        btnAfficher_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        arduino = new QPushButton(frame_2);
        arduino->setObjectName("arduino");
        arduino->setGeometry(QRect(420, 590, 81, 31));
        arduino->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(70, 100, 471, 71));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/photo/ress/bll.jpeg")));
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(540, 100, 421, 71));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/photo/ress/bll.jpeg")));
        btnEnvoyerSMS_2 = new QPushButton(frame_2);
        btnEnvoyerSMS_2->setObjectName("btnEnvoyerSMS_2");
        btnEnvoyerSMS_2->setGeometry(QRect(710, 120, 121, 31));
        btnEnvoyerSMS_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        btnEnvoyerSMS_2->setAutoDefault(false);
        btnEnvoyerSMS_2->setFlat(false);
        buttonStats = new QPushButton(frame_2);
        buttonStats->setObjectName("buttonStats");
        buttonStats->setGeometry(QRect(310, 120, 121, 31));
        buttonStats->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        buttonStats->setAutoDefault(false);
        buttonStats->setFlat(false);
        btnPDF = new QPushButton(frame_2);
        btnPDF->setObjectName("btnPDF");
        btnPDF->setGeometry(QRect(750, 440, 121, 31));
        btnPDF->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #ffffff; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        btnPDF->setAutoDefault(false);
        btnPDF->setFlat(false);
        buttonAchat = new QPushButton(frame_2);
        buttonAchat->setObjectName("buttonAchat");
        buttonAchat->setGeometry(QRect(540, 120, 121, 31));
        buttonAchat->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        buttonAchat->setAutoDefault(false);
        buttonAchat->setFlat(false);
        lineEditRecherche = new QLineEdit(frame_2);
        lineEditRecherche->setObjectName("lineEditRecherche");
        lineEditRecherche->setGeometry(QRect(360, 210, 171, 21));
        lineEditRecherche->setStyleSheet(QString::fromUtf8("\n"
" background-color: #ffffff;\n"
"\n"
""));
        acceuil = new QPushButton(frame_2);
        acceuil->setObjectName("acceuil");
        acceuil->setGeometry(QRect(130, 120, 121, 31));
        acceuil->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        acceuil->setAutoDefault(false);
        acceuil->setFlat(false);
        label_21 = new QLabel(frame_2);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(70, 120, 51, 31));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2E3440;\n"
"}\n"
"\n"
"\n"
""));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/photo/ress/22.jpeg")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(frame_2);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(260, 120, 41, 31));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color: #2E3440;\n"
"}\n"
"\n"
"\n"
""));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/photo/ress/33.jpeg")));
        label_22->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 30, 781, 421));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 80, 161, 51));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 150, 161, 20));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(470, 100, 261, 151));
        enregistrer = new QPushButton(groupBox);
        enregistrer->setObjectName("enregistrer");
        enregistrer->setGeometry(QRect(140, 230, 83, 29));
        UID = new QLineEdit(groupBox);
        UID->setObjectName("UID");
        UID->setGeometry(QRect(260, 90, 113, 28));
        cin = new QLineEdit(groupBox);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(260, 150, 113, 28));
        statusLabel = new QLabel(groupBox);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(170, 340, 201, 20));
        page1 = new QPushButton(groupBox);
        page1->setObjectName("page1");
        page1->setGeometry(QRect(450, 320, 81, 31));
        page1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #5C6BC0; /* Bordure bleue */\n"
"    background-color: white; /* Couleur de fond blanche */\n"
"    color: #5C6BC0; /* Couleur du texte bleue */\n"
"    border-radius: 15px; /* Rend le bouton rond, ajust\303\251 pour petite taille */\n"
"    padding: 5px; /* Espace int\303\251rieur r\303\251duit */\n"
"    min-width: 15px; /* Largeur minimum */\n"
"    min-height: 15px; /* Hauteur minimum */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #F0F0F0; /* Couleur de fond plus claire au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #E0E0E0; /* Couleur de fond plus fonc\303\251e lorsque press\303\251 */\n"
"}\n"
""));
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        wins->setCentralWidget(centralwidget);
        menubar = new QMenuBar(wins);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1052, 25));
        wins->setMenuBar(menubar);
        statusbar = new QStatusBar(wins);
        statusbar->setObjectName("statusbar");
        wins->setStatusBar(statusbar);

        retranslateUi(wins);

        tabWidget->setCurrentIndex(1);
        btnEnvoyerSMS_2->setDefault(false);
        buttonStats->setDefault(false);
        btnPDF->setDefault(false);
        buttonAchat->setDefault(false);
        acceuil->setDefault(false);


        QMetaObject::connectSlotsByName(wins);
    } // setupUi

    void retranslateUi(QMainWindow *wins)
    {
        wins->setWindowTitle(QCoreApplication::translate("wins", "MainWindow", nullptr));
        btnAfficher->setText(QCoreApplication::translate("wins", "Afficher", nullptr));
        btnEnvoyerSMS->setText(QCoreApplication::translate("wins", "Envoyer sms", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Id_client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_15->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Prenom_client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_16->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Nom_client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_17->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Email_client</span></p></body></html>", nullptr));
        textEdit_24->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Telephone</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        btnAjouter->setText(QCoreApplication::translate("wins", "Ajouter", nullptr));
        btnModifier->setText(QCoreApplication::translate("wins", "modifier", nullptr));
        textEdit_27->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Point_fidelite</span></p></body></html>", nullptr));
        btnSupprimer->setText(QCoreApplication::translate("wins", "Supprimer", nullptr));
        labelEtoiles->setText(QCoreApplication::translate("wins", ".", nullptr));
        label_10->setText(QCoreApplication::translate("wins", "Listes clients ", nullptr));
        comboBoxTri->setItemText(0, QCoreApplication::translate("wins", "id", nullptr));
        comboBoxTri->setItemText(1, QCoreApplication::translate("wins", "nom", nullptr));
        comboBoxTri->setItemText(2, QCoreApplication::translate("wins", "prenom", nullptr));
        comboBoxTri->setItemText(3, QCoreApplication::translate("wins", "telephone", nullptr));
        comboBoxTri->setItemText(4, QCoreApplication::translate("wins", "email", nullptr));

        label->setText(QCoreApplication::translate("wins", "Recherche :", nullptr));
        label_2->setText(QCoreApplication::translate("wins", "Tri :", nullptr));
        btnAfficher_2->setText(QCoreApplication::translate("wins", "Afficher", nullptr));
        arduino->setText(QCoreApplication::translate("wins", "arduino", nullptr));
        label_13->setText(QString());
        label_14->setText(QString());
        btnEnvoyerSMS_2->setText(QCoreApplication::translate("wins", "SMS", nullptr));
        buttonStats->setText(QCoreApplication::translate("wins", "STATISTIQUES", nullptr));
        btnPDF->setText(QCoreApplication::translate("wins", "PDF", nullptr));
        buttonAchat->setText(QCoreApplication::translate("wins", "ACHAT", nullptr));
        acceuil->setText(QCoreApplication::translate("wins", "ACCEUIL", nullptr));
        label_21->setText(QString());
        label_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("wins", "Tab 1", nullptr));
        groupBox->setTitle(QCoreApplication::translate("wins", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("wins", "entre le UID de carte", nullptr));
        label_4->setText(QCoreApplication::translate("wins", "entrer le cin de employer", nullptr));
        enregistrer->setText(QCoreApplication::translate("wins", "enregistrer", nullptr));
        statusLabel->setText(QCoreApplication::translate("wins", "TextLabel", nullptr));
        page1->setText(QCoreApplication::translate("wins", "page1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("wins", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wins: public Ui_wins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINS_H
