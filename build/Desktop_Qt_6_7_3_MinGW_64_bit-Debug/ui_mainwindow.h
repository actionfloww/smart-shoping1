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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QTextEdit *textEdit_8;
    QFrame *frame_3;
    QTextEdit *textEdit_13;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_25;
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
    QLineEdit *lineEditTotalAchat;
    QTextEdit *textEdit_26;
    QPushButton *btnAjouter;
    QPushButton *modifier_2;
    QDateEdit *dateEditDerniereVisite;
    QTextEdit *textEdit_27;
    QLabel *label_11;
    QTableView *tableView;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_12;
    QLabel *label;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(857, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 191, 481));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(95, 167, 173);\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 19px; /* Change the value for more or less rounding */\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 50, 121, 21));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(40, 110, 101, 21));
        textEdit_2->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_3 = new QTextEdit(frame);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(40, 150, 101, 21));
        textEdit_3->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_4 = new QTextEdit(frame);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(40, 200, 101, 21));
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
        textEdit_5 = new QTextEdit(frame);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(40, 240, 101, 21));
        textEdit_5->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        textEdit_7 = new QTextEdit(frame);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(40, 290, 121, 21));
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
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 150, 41, 21));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 200, 41, 21));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2->setIcon(icon1);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 450, 41, 21));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_5->setIcon(icon2);
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(20, 400, 41, 21));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_6->setIcon(icon3);
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(20, 350, 41, 21));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_7->setIcon(icon4);
        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(20, 300, 41, 21));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: none;                    /* Remove border */\n"
"    background: transparent;         /* Make background transparent */\n"
"    padding: 0;                      /* No padding */\n"
"    margin: 0;                       /* No margin */\n"
"    color: black;                    /* Black text color */\n"
"    font-weight: bold;               /* Bold text */\n"
"    font-size: 10px;                 /* Font size set to 20 */\n"
"}"));
        pushButton_8->setIcon(icon1);
        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(20, 250, 41, 21));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_10->setIcon(icon5);
        textEdit_8 = new QTextEdit(frame);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(40, 330, 111, 21));
        textEdit_8->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(190, 0, 241, 561));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #7eb6bf; /* Change to your desired color */\n"
"border: 1px solid lightgray; /* Optional: Change the border color */\n"
"border-radius: 19px; /* Change the value for more or less rounding */\n"
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
        textEdit_25 = new QTextEdit(frame_3);
        textEdit_25->setObjectName("textEdit_25");
        textEdit_25->setGeometry(QRect(10, 320, 161, 31));
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
        lineEditTotalAchat = new QLineEdit(widget_35);
        lineEditTotalAchat->setObjectName("lineEditTotalAchat");
        lineEditTotalAchat->setGeometry(QRect(0, 0, 201, 31));
        textEdit_26 = new QTextEdit(frame_3);
        textEdit_26->setObjectName("textEdit_26");
        textEdit_26->setGeometry(QRect(10, 380, 191, 31));
        textEdit_26->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
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
        btnAjouter = new QPushButton(frame_3);
        btnAjouter->setObjectName("btnAjouter");
        btnAjouter->setGeometry(QRect(20, 510, 81, 31));
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
        modifier_2 = new QPushButton(frame_3);
        modifier_2->setObjectName("modifier_2");
        modifier_2->setGeometry(QRect(120, 510, 81, 31));
        modifier_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        dateEditDerniereVisite = new QDateEdit(frame_3);
        dateEditDerniereVisite->setObjectName("dateEditDerniereVisite");
        dateEditDerniereVisite->setGeometry(QRect(20, 410, 181, 22));
        textEdit_27 = new QTextEdit(frame_3);
        textEdit_27->setObjectName("textEdit_27");
        textEdit_27->setGeometry(QRect(10, 440, 191, 31));
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
        label_11 = new QLabel(frame_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 470, 111, 31));
        QFont font;
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        label_11->setFont(font);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(530, 220, 231, 171));
        tableView->setStyleSheet(QString::fromUtf8("background-color: #7eb6bf;"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(540, 240, 91, 16));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(true);
        label_10->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(560, 350, 61, 18));
        QFont font2;
        font2.setBold(true);
        pushButton_3->setFont(font2);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(600, 160, 81, 20));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        pushButton_4->setFont(font3);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(610, 50, 171, 21));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(690, 110, 56, 18));
        pushButton_12->setFont(font2);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(490, 50, 101, 20));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setStrikeOut(false);
        label->setFont(font4);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(510, 110, 91, 20));
        pushButton_11->setFont(font2);
        pushButton_11->setStyleSheet(QString::fromUtf8("background=rgb(85, 0, 255)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 857, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\217\240   </span><span style=\" font-size:14pt; font-style:italic;\">Dashboard</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-style:italic;\"><br /></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\221\244   </span><span style=\" font-size:12pt;\">Client</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\221\250\342\200\215\360\237\222\274   </span><span style=\" font-size:12pt;\">Employee</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:4px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\233\222   </span><span style=\" font-size:12pt;\">Produit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:4px; margin-bottom:0px; margin-left:0px; margin-rig"
                        "ht:0px; -qt-block-indent:0; text-indent:0px; font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\223\246   </span><span style=\" font-size:12pt;\">Stock </span></p></body></html>", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; font-weight:400; color:#404040;\">\360\237\216\252   </span><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','"
                        "Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:12pt; color:#404040;\">Evenement</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_10->setText(QString());
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Inter','system-ui','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Noto Sans','Ubuntu','Cantarell','Helvetica Neue','Oxygen','Open Sans','sans-serif'; font-size:16px; color:#404040;\">\360\237\217\254   </span><span style=\" font-size:12pt;\">Magasines</span></p></body></html>", nullptr));
        textEdit_13->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Id client</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_15->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Prenom</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_16->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Nom</span></p></body></html>", nullptr));
        textEdit_17->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Email</span></p></body></html>", nullptr));
        textEdit_24->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Telephone</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        textEdit_25->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">Total achat</span></p></body></html>", nullptr));
        textEdit_26->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:700;\">Derniere visite</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        btnAjouter->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
        modifier_2->setText(QCoreApplication::translate("MainWindow", "modifier", nullptr));
        textEdit_27->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:20px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Point fidelite</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">\342\230\206\342\230\206\342\230\206\342\230\206\342\230\206</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Listes clients inactif", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Envoyer sms", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Ajouter un etoile", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "PDF", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Recherche :", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Trier par etoile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
