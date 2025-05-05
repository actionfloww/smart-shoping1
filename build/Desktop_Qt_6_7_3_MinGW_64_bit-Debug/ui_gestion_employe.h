/********************************************************************************
** Form generated from reading UI file 'gestion_employe.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_EMPLOYE_H
#define UI_GESTION_EMPLOYE_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_employe
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
    QPushButton *ajouter;
    QLineEdit *cin;
    QLineEdit *nom;
    QLineEdit *email;
    QLineEdit *tel;
    QLineEdit *poste;
    QLineEdit *status;
    QLineEdit *IDEMPLOYE;
    QLineEdit *MOT_DE_PASSE;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *update;
    QLineEdit *prenom;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *kkk;
    QComboBox *tri;
    QLineEdit *sup;
    QPushButton *supprimer;
    QPushButton *export_2;
    QLineEdit *rec;
    QComboBox *kkk_2;
    QPushButton *export_4;
    QGroupBox *groupBox;
    QPushButton *pushButton_17;
    QPushButton *export_3;
    QGroupBox *groupBox_2;
    QLabel *label_17;
    QTableView *table;
    QLabel *label_5;
    QLabel *label_34;
    QLabel *label_33;
    QLabel *label_37;
    QLabel *label_41;
    QLabel *label_40;
    QLabel *label_19;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_employe)
    {
        if (gestion_employe->objectName().isEmpty())
            gestion_employe->setObjectName("gestion_employe");
        gestion_employe->resize(1400, 800);
        centralwidget = new QWidget(gestion_employe);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1401, 831));
        frame->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 10px;\n"
"background-color: rgb(206, 206, 206);\n"
"background-color: white;\n"
"background-color: #E3E3E7;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(50, 50, 411, 701));
        frame_3->setStyleSheet(QString::fromUtf8("  color: black;\n"
"\n"
"border: 2px solid #0a0a55\n"
";\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background-color: white;\n"
"background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        ID = new QLabel(frame_3);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(10, 30, 151, 31));
        ID->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 210, 71, 31));
        label_10->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 260, 111, 41));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 330, 71, 31));
        label_12->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 390, 171, 41));
        label_13->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(10, 450, 181, 41));
        label_14->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        ajouter = new QPushButton(frame_3);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(20, 570, 140, 41));
        ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        ajouter->setFlat(false);
        cin = new QLineEdit(frame_3);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(20, 180, 261, 28));
        cin->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        nom = new QLineEdit(frame_3);
        nom->setObjectName("nom");
        nom->setGeometry(QRect(20, 240, 261, 28));
        nom->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        email = new QLineEdit(frame_3);
        email->setObjectName("email");
        email->setGeometry(QRect(20, 360, 261, 28));
        email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        tel = new QLineEdit(frame_3);
        tel->setObjectName("tel");
        tel->setGeometry(QRect(20, 430, 261, 28));
        tel->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        poste = new QLineEdit(frame_3);
        poste->setObjectName("poste");
        poste->setGeometry(QRect(20, 490, 261, 28));
        poste->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        status = new QLineEdit(frame_3);
        status->setObjectName("status");
        status->setGeometry(QRect(220, 530, 171, 28));
        status->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        IDEMPLOYE = new QLineEdit(frame_3);
        IDEMPLOYE->setObjectName("IDEMPLOYE");
        IDEMPLOYE->setGeometry(QRect(20, 60, 261, 28));
        IDEMPLOYE->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        MOT_DE_PASSE = new QLineEdit(frame_3);
        MOT_DE_PASSE->setObjectName("MOT_DE_PASSE");
        MOT_DE_PASSE->setGeometry(QRect(20, 120, 261, 28));
        MOT_DE_PASSE->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        MOT_DE_PASSE->setEchoMode(QLineEdit::EchoMode::Password);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 150, 151, 31));
        label_15->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 90, 151, 31));
        label_16->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        update = new QPushButton(frame_3);
        update->setObjectName("update");
        update->setGeometry(QRect(210, 570, 140, 41));
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
"}\n"
""));
        update->setFlat(false);
        prenom = new QLineEdit(frame_3);
        prenom->setObjectName("prenom");
        prenom->setGeometry(QRect(20, 300, 261, 28));
        prenom->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, -10, 231, 61));
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
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 520, 181, 41));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"    color: black;\n"
"    border: none;\n"
"    padding: 10px 15px;\n"
"    border-radius: 5px;\n"
"    cursor: pointer;\n"
"    font-size: 16px;\n"
"\n"
"font-weight: bold;\n"
"color: black;\n"
"padding: 8px;"));
        kkk = new QComboBox(frame);
        kkk->setObjectName("kkk");
        kkk->setGeometry(QRect(1010, 70, 111, 31));
        kkk->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        tri = new QComboBox(frame);
        tri->addItem(QString());
        tri->setObjectName("tri");
        tri->setGeometry(QRect(690, 110, 161, 31));
        tri->setStyleSheet(QString::fromUtf8("border: 2px solid #0a0a55\n"
";\n"
"background-color: white;\n"
"\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        sup = new QLineEdit(frame);
        sup->setObjectName("sup");
        sup->setGeometry(QRect(960, 110, 101, 31));
        sup->setStyleSheet(QString::fromUtf8("  color: black;\n"
"\n"
"border: 2px solid #0a0a55\n"
";\n"
"border-radius: 10px;\n"
"padding: 5px;\n"
"background-color: white;\n"
"background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        supprimer = new QPushButton(frame);
        supprimer->setObjectName("supprimer");
        supprimer->setGeometry(QRect(1110, 640, 140, 41));
        supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        supprimer->setFlat(false);
        export_2 = new QPushButton(frame);
        export_2->setObjectName("export_2");
        export_2->setGeometry(QRect(850, 640, 140, 41));
        export_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        export_2->setFlat(false);
        rec = new QLineEdit(frame);
        rec->setObjectName("rec");
        rec->setGeometry(QRect(710, 60, 301, 41));
        rec->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        kkk_2 = new QComboBox(frame);
        kkk_2->setObjectName("kkk_2");
        kkk_2->setGeometry(QRect(850, 110, 71, 31));
        kkk_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    color: black;"));
        export_4 = new QPushButton(frame);
        export_4->setObjectName("export_4");
        export_4->setGeometry(QRect(550, 640, 171, 41));
        export_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        export_4->setFlat(false);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, -40, 1291, 91));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        pushButton_17 = new QPushButton(groupBox);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(10, 50, 121, 31));
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
        export_3 = new QPushButton(groupBox);
        export_3->setObjectName("export_3");
        export_3->setGeometry(QRect(180, 40, 171, 41));
        export_3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: white;   /* Darker grey on hover */\n"
"}\n"
""));
        export_3->setFlat(false);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(510, 190, 781, 451));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #0a0a55; /* Couleur turquoise pour la bordure */\n"
"    border-radius: 10px;  /* Coins arrondis */\n"
"    padding: 10px;  /* Espacement interne */\n"
"    margin-bottom: 20px;  /* Espacement en bas */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}"));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(300, 20, 351, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Georgia")});
        font.setBold(true);
        font.setUnderline(true);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        table = new QTableView(groupBox_2);
        table->setObjectName("table");
        table->setGeometry(QRect(20, 60, 741, 331));
        table->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 410, 41, 31));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Capture_d_\303\251cran_2025-03-30_120921-removebg-preview.png")));
        label_5->setScaledContents(true);
        label_34 = new QLabel(groupBox_2);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(610, 410, 41, 31));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/Capture_d_\303\251cran_2025-03-30_120840-removebg-preview.png")));
        label_34->setScaledContents(true);
        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(60, 390, 21, 21));
        label_33->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_21.28.47-removebg-preview.png")));
        label_33->setScaledContents(true);
        label_37 = new QLabel(groupBox_2);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(320, 390, 21, 21));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_21.36.49-removebg-preview.png")));
        label_37->setScaledContents(true);
        label_41 = new QLabel(groupBox_2);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(600, 390, 21, 21));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-11_at_22.10.38-removebg-preview.png")));
        label_41->setScaledContents(true);
        label_40 = new QLabel(groupBox_2);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(570, 20, 21, 21));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-13_at_19.45.15-removebg-preview (1).png")));
        label_40->setScaledContents(true);
        label_19 = new QLabel(frame);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(580, 110, 91, 31));
        label_19->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(790, 760, 63, 20));
        gestion_employe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_employe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1400, 22));
        gestion_employe->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_employe);
        statusbar->setObjectName("statusbar");
        gestion_employe->setStatusBar(statusbar);

        retranslateUi(gestion_employe);

        ajouter->setDefault(false);
        update->setDefault(false);
        supprimer->setDefault(false);
        export_2->setDefault(false);
        export_4->setDefault(false);
        pushButton_17->setDefault(false);
        export_3->setDefault(false);


        QMetaObject::connectSlotsByName(gestion_employe);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_employe)
    {
        gestion_employe->setWindowTitle(QCoreApplication::translate("gestion_employe", "MainWindow", nullptr));
        ID->setText(QCoreApplication::translate("gestion_employe", "ID EMPLOYER", nullptr));
        label_10->setText(QCoreApplication::translate("gestion_employe", "NOM", nullptr));
        label_11->setText(QCoreApplication::translate("gestion_employe", "PRENOM", nullptr));
        label_12->setText(QCoreApplication::translate("gestion_employe", "EMAIL", nullptr));
        label_13->setText(QCoreApplication::translate("gestion_employe", "TELEPHONE", nullptr));
        label_14->setText(QCoreApplication::translate("gestion_employe", "POSTE", nullptr));
        ajouter->setText(QCoreApplication::translate("gestion_employe", "AJOUTER", nullptr));
        cin->setText(QString());
        cin->setPlaceholderText(QCoreApplication::translate("gestion_employe", "CIN", nullptr));
        nom->setText(QString());
        nom->setPlaceholderText(QCoreApplication::translate("gestion_employe", "NOM", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("gestion_employe", "EMAIL", nullptr));
        tel->setPlaceholderText(QCoreApplication::translate("gestion_employe", "TELEPHONE", nullptr));
        poste->setPlaceholderText(QCoreApplication::translate("gestion_employe", "POSTE", nullptr));
        status->setPlaceholderText(QCoreApplication::translate("gestion_employe", "STATUS", nullptr));
        IDEMPLOYE->setText(QString());
        IDEMPLOYE->setPlaceholderText(QCoreApplication::translate("gestion_employe", "ID", nullptr));
        MOT_DE_PASSE->setText(QString());
        MOT_DE_PASSE->setPlaceholderText(QCoreApplication::translate("gestion_employe", "MODE DE PASSE", nullptr));
        label_15->setText(QCoreApplication::translate("gestion_employe", "CIN", nullptr));
        label_16->setText(QCoreApplication::translate("gestion_employe", "MODE DE  PASSE", nullptr));
        update->setText(QCoreApplication::translate("gestion_employe", "MODIFIER", nullptr));
        prenom->setPlaceholderText(QCoreApplication::translate("gestion_employe", "PRENOM", nullptr));
        label_4->setText(QCoreApplication::translate("gestion_employe", "AJOUTER EMPLOYER", nullptr));
        label_2->setText(QCoreApplication::translate("gestion_employe", "STATUS", nullptr));
#if QT_CONFIG(whatsthis)
        kkk->setWhatsThis(QCoreApplication::translate("gestion_employe", "<html><head/><body><p>prenom</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        kkk->setPlaceholderText(QString());
        tri->setItemText(0, QCoreApplication::translate("gestion_employe", "TRI PAR SALAIRE", nullptr));

#if QT_CONFIG(whatsthis)
        tri->setWhatsThis(QCoreApplication::translate("gestion_employe", "<html><head/><body><p>prenom</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tri->setPlaceholderText(QString());
        sup->setText(QString());
        sup->setPlaceholderText(QCoreApplication::translate("gestion_employe", "ID", nullptr));
        supprimer->setText(QCoreApplication::translate("gestion_employe", "SUPPRIMER ", nullptr));
        export_2->setText(QCoreApplication::translate("gestion_employe", "Export pdf", nullptr));
        rec->setText(QString());
        rec->setPlaceholderText(QCoreApplication::translate("gestion_employe", "RECHERCHE  PAR  ....", nullptr));
#if QT_CONFIG(whatsthis)
        kkk_2->setWhatsThis(QCoreApplication::translate("gestion_employe", "<html><head/><body><p>prenom</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        kkk_2->setPlaceholderText(QString());
        export_4->setText(QCoreApplication::translate("gestion_employe", "badge arduino", nullptr));
        groupBox->setTitle(QString());
        pushButton_17->setText(QCoreApplication::translate("gestion_employe", "ACCEUIL", nullptr));
        export_3->setText(QCoreApplication::translate("gestion_employe", "statistique  ", nullptr));
        groupBox_2->setTitle(QString());
        label_17->setText(QCoreApplication::translate("gestion_employe", "<html><head/><body><p><span style=\" font-size:14pt; color:#0a0a55;\">Liste des tous les employes</span></p></body></html>", nullptr));
        label_5->setText(QString());
        label_34->setText(QString());
        label_33->setText(QString());
        label_37->setText(QString());
        label_41->setText(QString());
        label_40->setText(QString());
        label_19->setText(QCoreApplication::translate("gestion_employe", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; font-style:italic; color:#0a0a55;\">Trier par :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("gestion_employe", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestion_employe: public Ui_gestion_employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_EMPLOYE_H
