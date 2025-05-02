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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_2;
    QPushButton *pushButton_2;
    QPushButton *analytics_3;
    QPushButton *calendar_4;
    QPushButton *P_3;
    QWidget *widget;
    QLabel *logo;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_7;
    QPushButton *pushButton_15;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pdf;
    QPushButton *calendar;
    QPushButton *search;
    QPushButton *analytics;
    QPushButton *pushButton_3;
    QPushButton *calendar_2;
    QPushButton *pushButton_11;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame_2;
    QPushButton *search_3;
    QLabel *label_11;
    QGroupBox *groupBox_3;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QLabel *label_13;
    QLabel *label_14;
    QDateEdit *dateEdit_5;
    QLabel *label_15;
    QDateEdit *dateEdit_6;
    QLabel *label_16;
    QLineEdit *lineEdit_9;
    QLabel *label_17;
    QTextEdit *textEdit_3;
    QLabel *label_18;
    QLineEdit *lineEdit_5;
    QPushButton *update;
    QPushButton *pushButton;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QTableView *tableView;
    QPushButton *sup_2;
    QLineEdit *updatee_2;
    QLabel *label_20;
    QPushButton *P_2;
    QPushButton *pushButton_exporter_2;
    QPushButton *sup;
    QPushButton *filter;
    QPushButton *pushButton_13;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QWidget *tab_2;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QCalendarWidget *calendarWidget;
    QWidget *tab_4;
    QLabel *labelAffiche;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1570, 773);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(120, 0, 1381, 71));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #0a0a55;/* Couleur de fond issue de l'image */\n"
"    border-right: 2px solid #b0c4c0; /* Une teinte l\303\251g\303\250rement plus fonc\303\251e */\n"
"    width: 250px;\n"
"    padding: 10px;\n"
"}"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(70, 20, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        analytics_3 = new QPushButton(widget_2);
        analytics_3->setObjectName("analytics_3");
        analytics_3->setGeometry(QRect(210, 20, 141, 31));
        analytics_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        analytics_3->setAutoDefault(false);
        analytics_3->setFlat(false);
        calendar_4 = new QPushButton(widget_2);
        calendar_4->setObjectName("calendar_4");
        calendar_4->setGeometry(QRect(370, 20, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setPointSize(9);
        calendar_4->setFont(font);
        calendar_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"  font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        calendar_4->setAutoDefault(false);
        calendar_4->setFlat(false);
        P_3 = new QPushButton(widget_2);
        P_3->setObjectName("P_3");
        P_3->setGeometry(QRect(520, 20, 141, 31));
        P_3->setFont(font);
        P_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"  font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        P_3->setAutoDefault(false);
        P_3->setFlat(false);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 120, 731));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #0a0a55;/* Couleur de fond issue de l'image */\n"
"    border-right: 2px solid #b0c4c0; /* Une teinte l\303\251g\303\250rement plus fonc\303\251e */\n"
"    width: 250px;\n"
"    padding: 10px;\n"
"}"));
        logo = new QLabel(widget);
        logo->setObjectName("logo");
        logo->setGeometry(QRect(0, 10, 281, 111));
        logo->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(10, 180, 101, 31));
        pushButton_12->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_12->setAutoDefault(false);
        pushButton_12->setFlat(false);
        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(10, 230, 91, 31));
        pushButton_14->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_14->setAutoDefault(false);
        pushButton_14->setFlat(false);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(10, 290, 101, 31));
        pushButton_7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
""));
        pushButton_7->setAutoDefault(false);
        pushButton_7->setFlat(false);
        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(10, 410, 101, 31));
        pushButton_15->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_15->setAutoDefault(false);
        pushButton_15->setFlat(false);
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(10, 350, 101, 31));
        pushButton_10->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_10->setAutoDefault(false);
        pushButton_10->setFlat(false);
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(10, 530, 91, 31));
        pushButton_8->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_8->setAutoDefault(false);
        pushButton_8->setFlat(false);
        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(0, 470, 111, 31));
        pushButton_9->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_9->setAutoDefault(false);
        pushButton_9->setFlat(false);
        pdf = new QPushButton(centralwidget);
        pdf->setObjectName("pdf");
        pdf->setGeometry(QRect(2070, 550, 93, 29));
        QFont font1;
        font1.setBold(true);
        pdf->setFont(font1);
        pdf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/pdf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pdf->setIcon(icon);
        calendar = new QPushButton(centralwidget);
        calendar->setObjectName("calendar");
        calendar->setGeometry(QRect(2180, 550, 93, 31));
        calendar->setFont(font1);
        calendar->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        calendar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/calendar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        calendar->setIcon(icon1);
        search = new QPushButton(centralwidget);
        search->setObjectName("search");
        search->setGeometry(QRect(1870, 490, 51, 31));
        search->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search->setIcon(icon2);
        analytics = new QPushButton(centralwidget);
        analytics->setObjectName("analytics");
        analytics->setGeometry(QRect(1950, 550, 93, 31));
        analytics->setFont(font1);
        analytics->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Downloads/analytics.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        analytics->setIcon(icon3);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(2240, 480, 71, 41));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        calendar_2 = new QPushButton(centralwidget);
        calendar_2->setObjectName("calendar_2");
        calendar_2->setGeometry(QRect(1610, 300, 93, 31));
        calendar_2->setFont(font1);
        calendar_2->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        calendar_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        calendar_2->setIcon(icon1);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(1670, 230, 71, 41));
        pushButton_11->setFont(font1);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(120, 40, 1381, 681));
        tab = new QWidget();
        tab->setObjectName("tab");
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-10, 0, 1391, 651));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(198, 198, 198);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        search_3 = new QPushButton(frame_2);
        search_3->setObjectName("search_3");
        search_3->setGeometry(QRect(890, 30, 51, 31));
        search_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        search_3->setIcon(icon2);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(480, 40, 91, 20));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(60, 50, 391, 561));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 50, 221, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Georgia")});
        font2.setBold(false);
        font2.setUnderline(true);
        label_12->setFont(font2);
        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(120, 390, 113, 26));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 390, 81, 21));
        label_13->setFont(font1);
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 360, 81, 21));
        label_14->setFont(font1);
        dateEdit_5 = new QDateEdit(groupBox_3);
        dateEdit_5->setObjectName("dateEdit_5");
        dateEdit_5->setGeometry(QRect(120, 350, 110, 26));
        QFont font3;
        font3.setPointSize(9);
        dateEdit_5->setFont(font3);
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 320, 111, 21));
        label_15->setFont(font1);
        dateEdit_6 = new QDateEdit(groupBox_3);
        dateEdit_6->setObjectName("dateEdit_6");
        dateEdit_6->setGeometry(QRect(120, 310, 110, 26));
        QFont font4;
        font4.setPointSize(8);
        dateEdit_6->setFont(font4);
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 260, 63, 31));
        label_16->setFont(font1);
        lineEdit_9 = new QLineEdit(groupBox_3);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(120, 260, 113, 26));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 210, 111, 31));
        label_17->setFont(font1);
        textEdit_3 = new QTextEdit(groupBox_3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(120, 180, 221, 61));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 140, 63, 20));
        label_18->setFont(font1);
        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(120, 130, 113, 26));
        update = new QPushButton(groupBox_3);
        update->setObjectName("update");
        update->setGeometry(QRect(230, 470, 121, 31));
        update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 470, 101, 31));
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
"}\n"
""));
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(470, 130, 821, 481));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(50, 30, 211, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Georgia")});
        font5.setPointSize(10);
        font5.setBold(false);
        font5.setUnderline(true);
        label_19->setFont(font5);
        tableView = new QTableView(groupBox_4);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 81, 761, 311));
        tableView->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    border-radius: 15px;  /* Coins arrondis */\n"
"    background-color: #f4f4f4;  /* Couleur de fond */\n"
"    transition: all 0.3s ease;  /* Animation douce pour les changements */\n"
"}\n"
"\n"
"QWidget:hover {\n"
"    background-color: #e0e0e0;  /* Changement de fond lors du survol */\n"
"    cursor: pointer;  /* Changement du curseur */\n"
"}"));
        sup_2 = new QPushButton(groupBox_4);
        sup_2->setObjectName("sup_2");
        sup_2->setGeometry(QRect(710, 10, 41, 51));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Downloads/update.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        sup_2->setIcon(icon4);
        updatee_2 = new QLineEdit(groupBox_4);
        updatee_2->setObjectName("updatee_2");
        updatee_2->setGeometry(QRect(580, 20, 113, 26));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(280, 20, 301, 20));
        P_2 = new QPushButton(groupBox_4);
        P_2->setObjectName("P_2");
        P_2->setGeometry(QRect(200, 410, 111, 31));
        P_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_exporter_2 = new QPushButton(groupBox_4);
        pushButton_exporter_2->setObjectName("pushButton_exporter_2");
        pushButton_exporter_2->setGeometry(QRect(-180, 240, 111, 31));
        pushButton_exporter_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        sup = new QPushButton(groupBox_4);
        sup->setObjectName("sup");
        sup->setGeometry(QRect(520, 410, 111, 29));
        sup->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        filter = new QPushButton(frame_2);
        filter->setObjectName("filter");
        filter->setGeometry(QRect(1220, 60, 91, 31));
        filter->setFont(font1);
        filter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("filter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        filter->setIcon(icon5);
        pushButton_13 = new QPushButton(frame_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1340, 10, 41, 41));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("tournant.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_13->setIcon(icon6);
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(1080, 60, 131, 26));
        comboBox_2->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(582, 25, 291, 41));
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
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(1070, 100, 91, 24));
        checkBox_2 = new QCheckBox(frame_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(1140, 100, 91, 24));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 10, 93, 29));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        calendarWidget = new QCalendarWidget(tab_3);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(19, 15, 1351, 611));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(57, 115, 172, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(88, 172, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(72, 143, 213, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(29, 57, 86, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(38, 77, 115, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(156, 185, 213, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(29, 57, 86, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(74, 149, 224, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush11);
        calendarWidget->setPalette(palette);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        labelAffiche = new QLabel(tab_4);
        labelAffiche->setObjectName("labelAffiche");
        labelAffiche->setGeometry(QRect(12, 9, 1351, 611));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        tabWidget->raise();
        widget_2->raise();
        widget->raise();
        pdf->raise();
        calendar->raise();
        search->raise();
        analytics->raise();
        pushButton_3->raise();
        calendar_2->raise();
        pushButton_11->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1570, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(false);
        analytics_3->setDefault(false);
        calendar_4->setDefault(false);
        P_3->setDefault(false);
        pushButton_12->setDefault(false);
        pushButton_14->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_15->setDefault(false);
        pushButton_10->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_9->setDefault(false);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "ACCEUIL", nullptr));
        analytics_3->setText(QCoreApplication::translate("MainWindow", "STATISTIQUES", nullptr));
        calendar_4->setText(QCoreApplication::translate("MainWindow", "CALENDRIER", nullptr));
        P_3->setText(QCoreApplication::translate("MainWindow", "AFFICHE", nullptr));
        logo->setText(QString());
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "EMPLOYES", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "CLIENTS", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PRODUITS", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "MAGASINS", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "STOCKS", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "QUITTER", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "EVENEMENT", nullptr));
        pdf->setText(QString());
        calendar->setText(QString());
        search->setText(QString());
        analytics->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        calendar_2->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        search_3->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "rechercher :", nullptr));
        groupBox_3->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "AJOUT EVENEMENT:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Produit:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Date fin:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Date d\303\251but:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Description:", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Nom:", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        groupBox_4->setTitle(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "LISTE DES EVENEMENTS:", nullptr));
        sup_2->setText(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "entrer l'ID de l'\303\251v\303\250nement \303\240 modifier: ", nullptr));
        P_2->setText(QCoreApplication::translate("MainWindow", "EXPORTER", nullptr));
        pushButton_exporter_2->setText(QCoreApplication::translate("MainWindow", "EXPORTER", nullptr));
        sup->setText(QCoreApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        filter->setText(QString());
        pushButton_13->setText(QString());
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "type", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "date d\303\251but", nullptr));

        checkBox->setText(QCoreApplication::translate("MainWindow", "ASC", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "desc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Page", nullptr));
        labelAffiche->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
