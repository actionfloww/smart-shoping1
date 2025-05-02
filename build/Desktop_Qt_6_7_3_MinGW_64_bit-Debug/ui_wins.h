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
#include <QtGui/QIcon>
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
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QPushButton *btnAfficher_3;
    QPushButton *btnEnvoyerSMS_3;
    QTableView *tableView_3;
    QFrame *frame_5;
    QFrame *frame_6;
    QTextEdit *textEdit_14;
    QTextEdit *textEdit_18;
    QTextEdit *textEdit_19;
    QTextEdit *textEdit_20;
    QTextEdit *textEdit_25;
    QWidget *widget_36;
    QLineEdit *lineEditEmail_2;
    QWidget *widget_37;
    QLineEdit *lineEditPrenom_2;
    QWidget *widget_38;
    QLineEdit *lineEditID_2;
    QWidget *widget_39;
    QLineEdit *lineEditNom_2;
    QWidget *widget_40;
    QLineEdit *lineEditTelephone_2;
    QWidget *widget_41;
    QLineEdit *lineEditPointFidelite_2;
    QPushButton *btnAjouter_2;
    QPushButton *btnModifier_2;
    QTextEdit *textEdit_28;
    QPushButton *btnSupprimer_2;
    QLabel *labelEtoiles_2;
    QLabel *label_11;
    QPushButton *btnPDF_2;
    QComboBox *comboBoxTri_2;
    QTableView *tableViewAchats_2;
    QPushButton *buttonAchat_2;
    QPushButton *buttonStats_2;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame_7;
    QTextEdit *textEditDashboard_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEditEmploye_3;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_21;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QTextEdit *textEdit_22;
    QTableView *tableView_4;
    QPushButton *btnAfficher_4;
    QPushButton *btnEnvoyerSMS_4;
    QPushButton *page2_2;
    QLineEdit *lineEditRecherche_2;
    QPushButton *arduino_2;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QTableWidget *tableWidget_2;
    QPushButton *enregistrer_2;
    QLineEdit *UID_2;
    QLineEdit *cin_2;
    QLabel *statusLabel_2;
    QPushButton *page1_2;
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
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(330, 150, 1031, 661));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        btnAfficher_3 = new QPushButton(tab_3);
        btnAfficher_3->setObjectName("btnAfficher_3");
        btnAfficher_3->setGeometry(QRect(650, 340, 81, 31));
        btnAfficher_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnEnvoyerSMS_3 = new QPushButton(tab_3);
        btnEnvoyerSMS_3->setObjectName("btnEnvoyerSMS_3");
        btnEnvoyerSMS_3->setGeometry(QRect(520, 350, 81, 21));
        btnEnvoyerSMS_3->setFont(font);
        btnEnvoyerSMS_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(480, 200, 361, 181));
        tableView_3->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;\n"
""));
        frame_5 = new QFrame(tab_3);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(-70, -100, 1091, 731));
        frame_5->setFont(font1);
        frame_5->setStyleSheet(QString::fromUtf8("background-color: #0a0a55"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(270, 110, 241, 501));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 19px; /* Change the value for more or less rounding */\n"
"\n"
"\n"
""));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        textEdit_14 = new QTextEdit(frame_6);
        textEdit_14->setObjectName("textEdit_14");
        textEdit_14->setGeometry(QRect(10, 10, 161, 31));
        textEdit_14->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_18 = new QTextEdit(frame_6);
        textEdit_18->setObjectName("textEdit_18");
        textEdit_18->setGeometry(QRect(10, 130, 161, 31));
        textEdit_18->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_19 = new QTextEdit(frame_6);
        textEdit_19->setObjectName("textEdit_19");
        textEdit_19->setGeometry(QRect(10, 70, 161, 31));
        textEdit_19->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_20 = new QTextEdit(frame_6);
        textEdit_20->setObjectName("textEdit_20");
        textEdit_20->setGeometry(QRect(10, 190, 161, 31));
        textEdit_20->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_25 = new QTextEdit(frame_6);
        textEdit_25->setObjectName("textEdit_25");
        textEdit_25->setGeometry(QRect(10, 250, 161, 31));
        textEdit_25->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        widget_36 = new QWidget(frame_6);
        widget_36->setObjectName("widget_36");
        widget_36->setGeometry(QRect(10, 220, 201, 31));
        widget_36->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditEmail_2 = new QLineEdit(widget_36);
        lineEditEmail_2->setObjectName("lineEditEmail_2");
        lineEditEmail_2->setGeometry(QRect(0, 0, 201, 31));
        widget_37 = new QWidget(frame_6);
        widget_37->setObjectName("widget_37");
        widget_37->setGeometry(QRect(10, 160, 201, 31));
        widget_37->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditPrenom_2 = new QLineEdit(widget_37);
        lineEditPrenom_2->setObjectName("lineEditPrenom_2");
        lineEditPrenom_2->setGeometry(QRect(0, 0, 201, 31));
        widget_38 = new QWidget(frame_6);
        widget_38->setObjectName("widget_38");
        widget_38->setGeometry(QRect(10, 40, 201, 31));
        widget_38->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditID_2 = new QLineEdit(widget_38);
        lineEditID_2->setObjectName("lineEditID_2");
        lineEditID_2->setGeometry(QRect(0, 0, 201, 31));
        widget_39 = new QWidget(frame_6);
        widget_39->setObjectName("widget_39");
        widget_39->setGeometry(QRect(10, 100, 201, 31));
        widget_39->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditNom_2 = new QLineEdit(widget_39);
        lineEditNom_2->setObjectName("lineEditNom_2");
        lineEditNom_2->setGeometry(QRect(0, 0, 201, 31));
        widget_40 = new QWidget(frame_6);
        widget_40->setObjectName("widget_40");
        widget_40->setGeometry(QRect(10, 280, 201, 31));
        widget_40->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditTelephone_2 = new QLineEdit(widget_40);
        lineEditTelephone_2->setObjectName("lineEditTelephone_2");
        lineEditTelephone_2->setGeometry(QRect(0, 0, 201, 31));
        widget_41 = new QWidget(frame_6);
        widget_41->setObjectName("widget_41");
        widget_41->setGeometry(QRect(10, 350, 201, 31));
        widget_41->setStyleSheet(QString::fromUtf8("background-color: white; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 10px; /* Change the value for more or less rounding */\n"
"\n"
""));
        lineEditPointFidelite_2 = new QLineEdit(widget_41);
        lineEditPointFidelite_2->setObjectName("lineEditPointFidelite_2");
        lineEditPointFidelite_2->setGeometry(QRect(0, 0, 201, 31));
        btnAjouter_2 = new QPushButton(frame_6);
        btnAjouter_2->setObjectName("btnAjouter_2");
        btnAjouter_2->setGeometry(QRect(10, 430, 81, 31));
        btnAjouter_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnModifier_2 = new QPushButton(frame_6);
        btnModifier_2->setObjectName("btnModifier_2");
        btnModifier_2->setGeometry(QRect(130, 430, 81, 31));
        btnModifier_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        textEdit_28 = new QTextEdit(frame_6);
        textEdit_28->setObjectName("textEdit_28");
        textEdit_28->setGeometry(QRect(10, 320, 191, 31));
        textEdit_28->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        btnSupprimer_2 = new QPushButton(frame_6);
        btnSupprimer_2->setObjectName("btnSupprimer_2");
        btnSupprimer_2->setGeometry(QRect(70, 470, 81, 31));
        btnSupprimer_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        labelEtoiles_2 = new QLabel(frame_6);
        labelEtoiles_2->setObjectName("labelEtoiles_2");
        labelEtoiles_2->setGeometry(QRect(40, 390, 131, 31));
        label_11 = new QLabel(frame_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(530, 170, 141, 16));
        label_11->setFont(font2);
        btnPDF_2 = new QPushButton(frame_5);
        btnPDF_2->setObjectName("btnPDF_2");
        btnPDF_2->setGeometry(QRect(650, 120, 56, 18));
        btnPDF_2->setFont(font);
        btnPDF_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        comboBoxTri_2 = new QComboBox(frame_5);
        comboBoxTri_2->addItem(QString());
        comboBoxTri_2->addItem(QString());
        comboBoxTri_2->addItem(QString());
        comboBoxTri_2->addItem(QString());
        comboBoxTri_2->addItem(QString());
        comboBoxTri_2->setObjectName("comboBoxTri_2");
        comboBoxTri_2->setGeometry(QRect(720, 160, 71, 22));
        comboBoxTri_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        tableViewAchats_2 = new QTableView(frame_5);
        tableViewAchats_2->setObjectName("tableViewAchats_2");
        tableViewAchats_2->setGeometry(QRect(630, 400, 301, 171));
        tableViewAchats_2->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;"));
        buttonAchat_2 = new QPushButton(frame_5);
        buttonAchat_2->setObjectName("buttonAchat_2");
        buttonAchat_2->setGeometry(QRect(580, 600, 81, 20));
        QFont font5;
        font5.setBold(true);
        font5.setItalic(true);
        buttonAchat_2->setFont(font5);
        buttonAchat_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        buttonStats_2 = new QPushButton(frame_5);
        buttonStats_2->setObjectName("buttonStats_2");
        buttonStats_2->setGeometry(QRect(530, 130, 56, 18));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        buttonStats_2->setFont(font6);
        buttonStats_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 60, 101, 20));
        label_5->setFont(font3);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(690, 160, 16, 16));
        label_6->setFont(font4);
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(80, 110, 181, 481));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: #c6c6c6;\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 19px; /* Change the value for more or less rounding */\n"
""));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        textEditDashboard_3 = new QTextEdit(frame_7);
        textEditDashboard_3->setObjectName("textEditDashboard_3");
        textEditDashboard_3->setGeometry(QRect(40, 60, 121, 21));
        textEditDashboard_3->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        textEdit_4 = new QTextEdit(frame_7);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(40, 110, 101, 21));
        textEdit_4->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        textEditEmploye_3 = new QTextEdit(frame_7);
        textEditEmploye_3->setObjectName("textEditEmploye_3");
        textEditEmploye_3->setGeometry(QRect(40, 150, 101, 21));
        textEditEmploye_3->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        textEdit_7 = new QTextEdit(frame_7);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(40, 200, 101, 21));
        textEdit_7->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        textEdit_12 = new QTextEdit(frame_7);
        textEdit_12->setObjectName("textEdit_12");
        textEdit_12->setGeometry(QRect(40, 240, 101, 21));
        textEdit_12->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        textEdit_21 = new QTextEdit(frame_7);
        textEdit_21->setObjectName("textEdit_21");
        textEdit_21->setGeometry(QRect(40, 290, 121, 21));
        textEdit_21->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        pushButton_5 = new QPushButton(frame_7);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 150, 41, 21));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Downloads/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon);
        pushButton_6 = new QPushButton(frame_7);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 200, 41, 21));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../Downloads/user.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_6->setIcon(icon1);
        pushButton_10 = new QPushButton(frame_7);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(20, 450, 41, 21));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../Downloads/employees.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_10->setIcon(icon2);
        pushButton_15 = new QPushButton(frame_7);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(20, 400, 41, 21));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../Downloads/file-invoice-dollar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_15->setIcon(icon3);
        pushButton_16 = new QPushButton(frame_7);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(20, 350, 41, 21));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../Downloads/inboxes.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_16->setIcon(icon4);
        pushButton_17 = new QPushButton(frame_7);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(20, 300, 41, 21));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        pushButton_17->setIcon(icon1);
        pushButton_18 = new QPushButton(frame_7);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(20, 250, 41, 21));
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../Downloads/customer-care.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_18->setIcon(icon5);
        textEdit_22 = new QTextEdit(frame_7);
        textEdit_22->setObjectName("textEdit_22");
        textEdit_22->setGeometry(QRect(40, 330, 111, 21));
        textEdit_22->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
" qproperty-verticalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide vertical scrollbar */\n"
"    qproperty-horizontalScrollBarPolicy: ScrollBarAlwaysOff; /* Hide horizontal scrollbar */\n"
"}"));
        tableView_4 = new QTableView(frame_5);
        tableView_4->setObjectName("tableView_4");
        tableView_4->setGeometry(QRect(610, 210, 361, 181));
        tableView_4->setStyleSheet(QString::fromUtf8("background-color:  #c6c6c6;\n"
""));
        btnAfficher_4 = new QPushButton(frame_5);
        btnAfficher_4->setObjectName("btnAfficher_4");
        btnAfficher_4->setGeometry(QRect(930, 610, 81, 31));
        btnAfficher_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        btnEnvoyerSMS_4 = new QPushButton(frame_5);
        btnEnvoyerSMS_4->setObjectName("btnEnvoyerSMS_4");
        btnEnvoyerSMS_4->setGeometry(QRect(760, 640, 81, 21));
        btnEnvoyerSMS_4->setFont(font);
        btnEnvoyerSMS_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255)"));
        page2_2 = new QPushButton(frame_5);
        page2_2->setObjectName("page2_2");
        page2_2->setGeometry(QRect(470, 630, 81, 31));
        page2_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEditRecherche_2 = new QLineEdit(frame_5);
        lineEditRecherche_2->setObjectName("lineEditRecherche_2");
        lineEditRecherche_2->setGeometry(QRect(800, 130, 171, 21));
        arduino_2 = new QPushButton(frame_5);
        arduino_2->setObjectName("arduino_2");
        arduino_2->setGeometry(QRect(530, 540, 81, 31));
        arduino_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(70, 30, 781, 421));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 80, 161, 51));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 150, 161, 20));
        tableWidget_2 = new QTableWidget(groupBox_2);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(470, 100, 261, 151));
        enregistrer_2 = new QPushButton(groupBox_2);
        enregistrer_2->setObjectName("enregistrer_2");
        enregistrer_2->setGeometry(QRect(140, 230, 83, 29));
        UID_2 = new QLineEdit(groupBox_2);
        UID_2->setObjectName("UID_2");
        UID_2->setGeometry(QRect(260, 90, 113, 28));
        cin_2 = new QLineEdit(groupBox_2);
        cin_2->setObjectName("cin_2");
        cin_2->setGeometry(QRect(260, 150, 113, 28));
        statusLabel_2 = new QLabel(groupBox_2);
        statusLabel_2->setObjectName("statusLabel_2");
        statusLabel_2->setGeometry(QRect(170, 340, 201, 20));
        page1_2 = new QPushButton(groupBox_2);
        page1_2->setObjectName("page1_2");
        page1_2->setGeometry(QRect(450, 320, 81, 31));
        page1_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        wins->setCentralWidget(centralwidget);
        menubar = new QMenuBar(wins);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1052, 18));
        wins->setMenuBar(menubar);
        statusbar = new QStatusBar(wins);
        statusbar->setObjectName("statusbar");
        wins->setStatusBar(statusbar);

        retranslateUi(wins);

        tabWidget->setCurrentIndex(0);
        btnEnvoyerSMS_2->setDefault(false);
        buttonStats->setDefault(false);
        btnPDF->setDefault(false);
        buttonAchat->setDefault(false);
        acceuil->setDefault(false);
        tabWidget_2->setCurrentIndex(1);


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
        btnAfficher_3->setText(QCoreApplication::translate("wins", "Afficher", nullptr));
        btnEnvoyerSMS_3->setText(QCoreApplication::translate("wins", "Envoyer sms", nullptr));
        textEdit_14->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Id_client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_18->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        textEdit_19->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Nom_client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_20->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Email_client</span></p></body></html>", nullptr));
        textEdit_25->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Telephone</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        btnAjouter_2->setText(QCoreApplication::translate("wins", "Ajouter", nullptr));
        btnModifier_2->setText(QCoreApplication::translate("wins", "modifier", nullptr));
        textEdit_28->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Point_fidelite</span></p></body></html>", nullptr));
        btnSupprimer_2->setText(QCoreApplication::translate("wins", "Supprimer", nullptr));
        labelEtoiles_2->setText(QCoreApplication::translate("wins", ".", nullptr));
        label_11->setText(QCoreApplication::translate("wins", "Listes clients ", nullptr));
        btnPDF_2->setText(QCoreApplication::translate("wins", "PDF", nullptr));
        comboBoxTri_2->setItemText(0, QCoreApplication::translate("wins", "id", nullptr));
        comboBoxTri_2->setItemText(1, QCoreApplication::translate("wins", "nom", nullptr));
        comboBoxTri_2->setItemText(2, QCoreApplication::translate("wins", "prenom", nullptr));
        comboBoxTri_2->setItemText(3, QCoreApplication::translate("wins", "telephone", nullptr));
        comboBoxTri_2->setItemText(4, QCoreApplication::translate("wins", "email", nullptr));

        buttonAchat_2->setText(QCoreApplication::translate("wins", "Achat", nullptr));
        buttonStats_2->setText(QCoreApplication::translate("wins", "Stat", nullptr));
        label_5->setText(QCoreApplication::translate("wins", "Recherche :", nullptr));
        label_6->setText(QCoreApplication::translate("wins", "Tri :", nullptr));
        textEditDashboard_3->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\217\240</span><span style=\" font-size:12pt; font-style:italic;\">Dashboard</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-style:italic;\"><br /></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\221\244</span><span style=\" font-size:10pt;\">Client</span></p></body></html>", nullptr));
        textEditEmploye_3->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\221\250\342\200\215\360\237\222\274</span><span style=\" font-size:10pt;\">Employee</span></p></body></html>", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\233\222</span><span style=\" font-size:10pt;\">Produit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:4px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px; font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_12->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\223\246</span><span style=\" font-size:10pt;\">Stock </span></p></body></html>", nullptr));
        textEdit_21->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\216\252</span><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Hel"
                        "vetica Neue','Oxygen','Open Sans','sans-serif'; font-size:10pt; color:#404040;\">Evenement</span></p></body></html>", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_10->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        textEdit_22->setHtml(QCoreApplication::translate("wins", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\217\254</span><span style=\" font-size:10pt;\">Magasines</span></p></body></html>", nullptr));
        btnAfficher_4->setText(QCoreApplication::translate("wins", "Afficher", nullptr));
        btnEnvoyerSMS_4->setText(QCoreApplication::translate("wins", "Envoyer sms", nullptr));
        page2_2->setText(QCoreApplication::translate("wins", "page2", nullptr));
        arduino_2->setText(QCoreApplication::translate("wins", "arduino", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("wins", "Tab 1", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("wins", "GroupBox", nullptr));
        label_7->setText(QCoreApplication::translate("wins", "entre le UID de carte", nullptr));
        label_8->setText(QCoreApplication::translate("wins", "entrer le cin de employer", nullptr));
        enregistrer_2->setText(QCoreApplication::translate("wins", "enregistrer", nullptr));
        statusLabel_2->setText(QCoreApplication::translate("wins", "TextLabel", nullptr));
        page1_2->setText(QCoreApplication::translate("wins", "page1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("wins", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("wins", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class wins: public Ui_wins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINS_H
