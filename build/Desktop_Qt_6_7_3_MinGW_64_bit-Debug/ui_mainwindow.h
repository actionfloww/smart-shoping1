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
    QLabel *label_24;
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
    QLabel *label;
    QGroupBox *groupBox_4;
    QLabel *label_19;
    QTableView *tableView;
    QPushButton *P_2;
    QPushButton *pushButton_exporter_2;
    QPushButton *sup;
    QPushButton *sup_2;
    QLabel *statuslabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_13;
    QPushButton *search_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLabel *label_2;
    QPushButton *filter;
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
        MainWindow->resize(1591, 1020);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 1341, 71));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(45, 51, 71);\n"
"    background-color: #2D334;/* Couleur de fond issue de l'image */\n"
"    border-right: 2px solid #b0c4c0; /* Une teinte l\303\251g\303\250rement plus fonc\303\251e */\n"
"    width: 250px;\n"
"    padding: 10px;\n"
"}"));
        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 20, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoHome));
        pushButton_2->setIcon(icon);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        analytics_3 = new QPushButton(widget_2);
        analytics_3->setObjectName("analytics_3");
        analytics_3->setGeometry(QRect(240, 20, 141, 31));
        analytics_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
""));
        analytics_3->setAutoDefault(false);
        analytics_3->setFlat(false);
        calendar_4 = new QPushButton(widget_2);
        calendar_4->setObjectName("calendar_4");
        calendar_4->setGeometry(QRect(420, 20, 141, 31));
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
"\n"
""));
        calendar_4->setAutoDefault(false);
        calendar_4->setFlat(false);
        P_3 = new QPushButton(widget_2);
        P_3->setObjectName("P_3");
        P_3->setGeometry(QRect(600, 20, 141, 31));
        P_3->setFont(font);
        P_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
"  font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"\n"
""));
        P_3->setAutoDefault(false);
        P_3->setFlat(false);
        label_24 = new QLabel(widget_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(1080, 20, 121, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Georgia")});
        font1.setPointSize(12);
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);"));
        analytics_3->raise();
        calendar_4->raise();
        P_3->raise();
        pushButton_2->raise();
        label_24->raise();
        pdf = new QPushButton(centralwidget);
        pdf->setObjectName("pdf");
        pdf->setGeometry(QRect(2070, 550, 93, 29));
        QFont font2;
        font2.setBold(true);
        pdf->setFont(font2);
        pdf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/pdf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pdf->setIcon(icon1);
        calendar = new QPushButton(centralwidget);
        calendar->setObjectName("calendar");
        calendar->setGeometry(QRect(2180, 550, 93, 31));
        calendar->setFont(font2);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/calendar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        calendar->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Downloads/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search->setIcon(icon3);
        analytics = new QPushButton(centralwidget);
        analytics->setObjectName("analytics");
        analytics->setGeometry(QRect(1950, 550, 93, 31));
        analytics->setFont(font2);
        analytics->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #4CAF50; /* Couleur et largeur de la bordure */\n"
"    border-radius: 15px; /* Rayon de l'arrondi */\n"
"  background-color:   #8c8c8c;\n"
"    color: white; /* Couleur du texte */\n"
"    padding: 10px 20px; /* Espacement interne */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Style du texte */\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Downloads/analytics.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        analytics->setIcon(icon4);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(2240, 480, 71, 41));
        pushButton_3->setFont(font2);
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
        calendar_2->setFont(font2);
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
        calendar_2->setIcon(icon2);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(1670, 230, 71, 41));
        pushButton_11->setFont(font2);
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
        tabWidget->setGeometry(QRect(0, 70, 1181, 701));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        frame_2 = new QFrame(tab);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(0, 0, 1231, 721));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(199, 199, 199);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_11 = new QLabel(frame_2);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(460, 20, 111, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Georgia")});
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 20, 401, 601));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QTabBar::tab {\n"
"    height: 0px;\n"
"    width: 0px;\n"
"    margin: 0px;\n"
"    padding: 0px;\n"
"    border: none;\n"
"}"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(70, 40, 271, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(5);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Georgia")});
        font4.setBold(false);
        font4.setUnderline(true);
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("color: #0a0a55;"));
        lineEdit_8 = new QLineEdit(groupBox_3);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(140, 460, 113, 26));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 470, 81, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Georgia")});
        font5.setBold(false);
        label_13->setFont(font5);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(20, 400, 81, 21));
        label_14->setFont(font5);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateEdit_5 = new QDateEdit(groupBox_3);
        dateEdit_5->setObjectName("dateEdit_5");
        dateEdit_5->setGeometry(QRect(140, 390, 110, 26));
        QFont font6;
        font6.setPointSize(9);
        dateEdit_5->setFont(font6);
        dateEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 330, 111, 21));
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dateEdit_6 = new QDateEdit(groupBox_3);
        dateEdit_6->setObjectName("dateEdit_6");
        dateEdit_6->setGeometry(QRect(140, 330, 110, 26));
        QFont font7;
        font7.setPointSize(8);
        dateEdit_6->setFont(font7);
        dateEdit_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(20, 270, 63, 31));
        label_16->setFont(font5);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_9 = new QLineEdit(groupBox_3);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(140, 270, 113, 26));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 200, 111, 31));
        label_17->setFont(font5);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textEdit_3 = new QTextEdit(groupBox_3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(140, 180, 191, 61));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 140, 63, 20));
        label_18->setFont(font5);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit_5 = new QLineEdit(groupBox_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(140, 130, 113, 26));
        update = new QPushButton(groupBox_3);
        update->setObjectName("update");
        update->setGeometry(QRect(230, 510, 121, 31));
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
        pushButton->setGeometry(QRect(40, 510, 101, 31));
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
        label = new QLabel(groupBox_3);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 41, 31));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-13_at_19.38.47-removebg-preview.png")));
        label->setScaledContents(true);
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(430, 110, 731, 511));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(240, 29, 361, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Georgia")});
        font8.setPointSize(10);
        font8.setBold(false);
        font8.setUnderline(true);
        label_19->setFont(font8);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        tableView = new QTableView(groupBox_4);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 90, 691, 331));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Georgia")});
        font9.setPointSize(14);
        tableView->setFont(font9);
        tableView->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
" QTableView {\n"
"            background-color: #f8f9fa;\n"
"            border: 1px solid #dee2e6;\n"
"            border-radius: 10px;\n"
"            gridline-color: #1B2A49;\n"
"            padding: 2px;\n"
"            alternate-background-color: #E6F0FA;\n"
"            font-family: Georgia, \"Times New Roman\", serif;\n"
"        }\n"
"        QTableView QTableCornerButton::section {\n"
"            background-color: #A8B8A8;\n"
"            border: none;\n"
"            border-top-left-radius: 10px;\n"
"        }\n"
"        QHeaderView::section {\n"
"            background-color: #2B2F48;\n"
"            color: #F0F0F0;\n"
"            padding: 8px;\n"
"            border: none;\n"
"            border-right: 1px solid #F0F0F0;\n"
"            font-family: Georgia, \"Times New Roman\", serif;\n"
"            font-style: italic;\n"
"            font-size: 12px;\n"
"            font-weight: bold;\n"
"        }\n"
"        QHeaderView::section:last {\n"
"            border-right: "
                        "none;\n"
"        }\n"
"        QTableView::item {\n"
"            padding: 6px;\n"
"            border-bottom: 1px  #2B2F48;\n"
"            border-right: 1px  #2B2F48;\n"
"        }\n"
"        QTableView::item:last {\n"
"            border-right: none;\n"
"        }\n"
"        QTableView::item:selected {\n"
"            background-color: #grey;\n"
"            color: #2B2F48;\n"
"        }\n"
"        QTableView::item:hover {\n"
"            background-color: #e0e0ff;\n"
"        }"));
        P_2 = new QPushButton(groupBox_4);
        P_2->setObjectName("P_2");
        P_2->setGeometry(QRect(80, 430, 111, 31));
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
        sup->setGeometry(QRect(580, 430, 111, 29));
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
        sup_2 = new QPushButton(groupBox_4);
        sup_2->setObjectName("sup_2");
        sup_2->setGeometry(QRect(320, 430, 121, 31));
        sup_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        statuslabel = new QLabel(groupBox_4);
        statuslabel->setObjectName("statuslabel");
        statuslabel->setGeometry(QRect(20, 0, 211, 51));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 430, 41, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.28.47-removebg-preview.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(280, 430, 31, 20));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_21.36.49-removebg-preview.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(540, 430, 31, 21));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_22.10.38-removebg-preview.png")));
        label_5->setScaledContents(true);
        pushButton_13 = new QPushButton(frame_2);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(440, 70, 31, 21));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("tournant.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_13->setIcon(icon5);
        search_3 = new QPushButton(frame_2);
        search_3->setObjectName("search_3");
        search_3->setGeometry(QRect(600, 70, 81, 31));
        search_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        search_3->setIcon(icon6);
        search_3->setAutoDefault(false);
        search_3->setFlat(false);
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(560, 10, 191, 41));
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
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(760, 10, 151, 41));
        QFont font10;
        font10.setPointSize(11);
        comboBox_2->setFont(font10);
        comboBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        checkBox_2 = new QCheckBox(frame_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(920, 30, 91, 24));
        checkBox_2->setFont(font3);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(920, 10, 91, 24));
        checkBox->setFont(font3);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 20, 21, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-11_at_22.14.42-removebg-preview.png")));
        label_2->setScaledContents(true);
        filter = new QPushButton(frame_2);
        filter->setObjectName("filter");
        filter->setGeometry(QRect(490, 70, 81, 31));
        filter->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border: 2px solid #0a0a55;   /* Grey border */\n"
"    border-radius: 10px;         /* Round the corners */\n"
"    padding: 0 8px;              /* Padding inside the button */\n"
"    background: #c6c6c6;         /* Grey background */\n"
"    color: #0a0a55;                /* White text color */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("filter.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        filter->setIcon(icon7);
        filter->setAutoDefault(false);
        filter->setFlat(false);
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
        calendarWidget->setGeometry(QRect(19, 15, 1171, 611));
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
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1591, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(false);
        analytics_3->setDefault(false);
        calendar_4->setDefault(false);
        P_3->setDefault(false);
        tabWidget->setCurrentIndex(0);
        search_3->setDefault(false);
        filter->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "ACCEUIL", nullptr));
        analytics_3->setText(QCoreApplication::translate("MainWindow", "STATISTIQUES", nullptr));
        calendar_4->setText(QCoreApplication::translate("MainWindow", "CALENDRIER", nullptr));
        P_3->setText(QCoreApplication::translate("MainWindow", "AFFICHE", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pdf->setText(QString());
        calendar->setText(QString());
        search->setText(QString());
        analytics->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        calendar_2->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Rechercher :</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#0a0a55;\">AJOUT  D'UN EVENEMENT</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Produit:</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Date Fin:</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Date debut:</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Type:</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Description:</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Nom:</span></p></body></html>", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        label->setText(QString());
        groupBox_4->setTitle(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#0a0a55;\">LISTE DES EVENEMENTS</span></p></body></html>", nullptr));
        P_2->setText(QCoreApplication::translate("MainWindow", "EXPORTER", nullptr));
        pushButton_exporter_2->setText(QCoreApplication::translate("MainWindow", "EXPORTER", nullptr));
        sup->setText(QCoreApplication::translate("MainWindow", "SUPPRIMER", nullptr));
        sup_2->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        statuslabel->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        pushButton_13->setText(QString());
        search_3->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "rechercher un evennement", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "type", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "nom", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "date d\303\251but", nullptr));

        checkBox_2->setText(QCoreApplication::translate("MainWindow", "DESC", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "ASC", nullptr));
        label_2->setText(QString());
        filter->setText(QString());
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
