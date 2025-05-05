/********************************************************************************
** Form generated from reading UI file 'gestion_stock.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_STOCK_H
#define UI_GESTION_STOCK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_stock
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_8;
    QLineEdit *recherche;
    QPushButton *pushButton_15;
    QPlainTextEdit *contenu;
    QPlainTextEdit *dest;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QPushButton *pushButton_17;
    QLabel *statusLabel;
    QGroupBox *groupBox_2;
    QTableWidget *tableStock;
    QComboBox *comboBox;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_32;
    QGroupBox *groupBox;
    QLineEdit *lineEditQuantite;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditPrixUnitaire;
    QLineEdit *lineEditNomProduit;
    QLabel *label_6;
    QLineEdit *lineEditFournisseur;
    QLabel *label_4;
    QDateEdit *dateEditAjout;
    QLabel *label_3;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QFrame *frame_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_28;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_stock)
    {
        if (gestion_stock->objectName().isEmpty())
            gestion_stock->setObjectName("gestion_stock");
        gestion_stock->resize(1449, 920);
        centralwidget = new QWidget(gestion_stock);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-180, 40, 1551, 811));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(600, 80, 121, 31));
        recherche = new QLineEdit(frame);
        recherche->setObjectName("recherche");
        recherche->setGeometry(QRect(700, 75, 161, 31));
        recherche->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_15 = new QPushButton(frame);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(210, 570, 71, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image_tasnim/mail.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_15->setIcon(icon);
        pushButton_15->setIconSize(QSize(50, 50));
        contenu = new QPlainTextEdit(frame);
        contenu->setObjectName("contenu");
        contenu->setGeometry(QRect(310, 570, 221, 61));
        dest = new QPlainTextEdit(frame);
        dest->setObjectName("dest");
        dest->setGeometry(QRect(310, 520, 211, 31));
        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(900, 70, 81, 61));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/pdf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_12->setIcon(icon1);
        pushButton_12->setIconSize(QSize(50, 50));
        pushButton_14 = new QPushButton(frame);
        pushButton_14->setObjectName("pushButton_14");
        pushButton_14->setGeometry(QRect(1140, 70, 81, 61));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image_tasnim/nt.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_14->setIcon(icon2);
        pushButton_14->setIconSize(QSize(50, 50));
        pushButton_13 = new QPushButton(frame);
        pushButton_13->setObjectName("pushButton_13");
        pushButton_13->setGeometry(QRect(1000, 70, 131, 61));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("image_tasnim/st.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_13->setIcon(icon3);
        pushButton_13->setIconSize(QSize(50, 40));
        pushButton_17 = new QPushButton(frame);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(1280, 100, 93, 29));
        statusLabel = new QLabel(frame);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(212, 49, 161, 51));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(570, 140, 811, 481));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #001F3F; /* Contour bleu fonc\303\251 */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    margin-top: 10px; /* Espace entre le titre et la bordure */\n"
"    padding: 10px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    color: #001F3F; /* Couleur du texte bleu fonc\303\251 */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* Position du titre */\n"
"    padding: 2px 5px; /* Espacement autour du titre */\n"
"    background-color: white; /* Fond blanc pour le titre */\n"
"    color: #001F3F; /* Texte bleu fonc\303\251 */\n"
"    border-radius: 3px; /* Coins arrondis du titre */\n"
"}\n"
""));
        tableStock = new QTableWidget(groupBox_2);
        if (tableStock->columnCount() < 6)
            tableStock->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableStock->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableStock->rowCount() < 8)
            tableStock->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableStock->setVerticalHeaderItem(7, __qtablewidgetitem13);
        tableStock->setObjectName("tableStock");
        tableStock->setGeometry(QRect(20, 80, 771, 331));
        comboBox = new QComboBox(groupBox_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(150, 30, 191, 26));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 30, 121, 31));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 430, 93, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #001F3F; /* Bleu fonc\303\251 */\n"
"    color: white; /* Texte blanc */\n"
"    border: 2px solid white; /* Contour blanc */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px 10px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #003366; /* Bleu un peu plus clair au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #000C1A; /* Bleu encore plus fonc\303\251 quand cliqu\303\251 */\n"
"}\n"
""));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 430, 93, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #001F3F; /* Bleu fonc\303\251 */\n"
"    color: white; /* Texte blanc */\n"
"    border: 2px solid white; /* Contour blanc */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px 10px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #003366; /* Bleu un peu plus clair au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #000C1A; /* Bleu encore plus fonc\303\251 quand cliqu\303\251 */\n"
"}\n"
""));
        pushButton_32 = new QPushButton(frame);
        pushButton_32->setObjectName("pushButton_32");
        pushButton_32->setGeometry(QRect(820, 70, 41, 41));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image_tasnim/tri.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_32->setIcon(icon4);
        pushButton_32->setIconSize(QSize(50, 50));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(210, 110, 341, 391));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 2px solid #001F3F; /* Contour bleu fonc\303\251 */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    margin-top: 10px; /* Espace entre le titre et la bordure */\n"
"    padding: 10px; /* Espacement int\303\251rieur */\n"
"    font-size: 14px; /* Taille du texte */\n"
"    font-weight: bold; /* Texte en gras */\n"
"    color: #001F3F; /* Couleur du texte bleu fonc\303\251 */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left; /* Position du titre */\n"
"    padding: 2px 5px; /* Espacement autour du titre */\n"
"    background-color: white; /* Fond blanc pour le titre */\n"
"    color: #001F3F; /* Texte bleu fonc\303\251 */\n"
"    border-radius: 3px; /* Coins arrondis du titre */\n"
"}\n"
""));
        lineEditQuantite = new QLineEdit(groupBox);
        lineEditQuantite->setObjectName("lineEditQuantite");
        lineEditQuantite->setGeometry(QRect(150, 80, 113, 26));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 250, 101, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 91, 41));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 121, 21));
        lineEditPrixUnitaire = new QLineEdit(groupBox);
        lineEditPrixUnitaire->setObjectName("lineEditPrixUnitaire");
        lineEditPrixUnitaire->setGeometry(QRect(150, 130, 113, 26));
        lineEditNomProduit = new QLineEdit(groupBox);
        lineEditNomProduit->setObjectName("lineEditNomProduit");
        lineEditNomProduit->setGeometry(QRect(150, 40, 113, 26));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 300, 51, 31));
        lineEditFournisseur = new QLineEdit(groupBox);
        lineEditFournisseur->setObjectName("lineEditFournisseur");
        lineEditFournisseur->setGeometry(QRect(150, 250, 113, 26));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 190, 121, 31));
        dateEditAjout = new QDateEdit(groupBox);
        dateEditAjout->setObjectName("dateEditAjout");
        dateEditAjout->setGeometry(QRect(150, 190, 110, 26));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 111, 31));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 350, 93, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #001F3F; /* Bleu fonc\303\251 */\n"
"    color: white; /* Texte blanc */\n"
"    border: 2px solid white; /* Contour blanc */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px 10px; /* Espace int\303\251rieur */\n"
"    font-size: 14px; /* Taille du texte */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #003366; /* Bleu un peu plus clair au survol */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #000C1A; /* Bleu encore plus fonc\303\251 quand cliqu\303\251 */\n"
"}\n"
""));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(150, 300, 111, 26));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(-130, 0, 1581, 91));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 49, 66);\n"
""));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_5 = new QPushButton(frame_4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(260, 30, 91, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #f8fff7; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_5->setAutoDefault(false);
        pushButton_5->setFlat(false);
        pushButton_28 = new QPushButton(frame_4);
        pushButton_28->setObjectName("pushButton_28");
        pushButton_28->setGeometry(QRect(430, 30, 141, 31));
        pushButton_28->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    border-radius: 15px;        /* Coins arrondis */\n"
"    background-color: #c6c6c6; /* Conserve la couleur d'origine */\n"
" font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"}\n"
""));
        pushButton_28->setAutoDefault(false);
        pushButton_28->setFlat(false);
        pushButton_30 = new QPushButton(frame_4);
        pushButton_30->setObjectName("pushButton_30");
        pushButton_30->setGeometry(QRect(180, 20, 51, 51));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20-removebg-preview.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_30->setIcon(icon5);
        pushButton_30->setIconSize(QSize(50, 50));
        pushButton_31 = new QPushButton(frame_4);
        pushButton_31->setObjectName("pushButton_31");
        pushButton_31->setGeometry(QRect(370, 20, 51, 51));
        pushButton_31->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/WhatsApp_Image_2025-05-01_at_11.43.20__1_-removebg-preview.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_31->setIcon(icon6);
        pushButton_31->setIconSize(QSize(50, 50));
        gestion_stock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_stock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1449, 22));
        gestion_stock->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_stock);
        statusbar->setObjectName("statusbar");
        gestion_stock->setStatusBar(statusbar);

        retranslateUi(gestion_stock);

        pushButton_5->setDefault(false);
        pushButton_28->setDefault(false);


        QMetaObject::connectSlotsByName(gestion_stock);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_stock)
    {
        gestion_stock->setWindowTitle(QCoreApplication::translate("gestion_stock", "MainWindow", nullptr));
        label_8->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Recherche</span></p></body></html>", nullptr));
        pushButton_15->setText(QString());
        contenu->setPlainText(QString());
        contenu->setPlaceholderText(QCoreApplication::translate("gestion_stock", "contenu du mail", nullptr));
        dest->setPlainText(QString());
        dest->setPlaceholderText(QCoreApplication::translate("gestion_stock", "@ du destinataire", nullptr));
        pushButton_12->setText(QString());
        pushButton_14->setText(QString());
        pushButton_13->setText(QString());
        pushButton_17->setText(QCoreApplication::translate("gestion_stock", "Actualiser", nullptr));
        statusLabel->setText(QCoreApplication::translate("gestion_stock", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("gestion_stock", "Liste des stocks ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableStock->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("gestion_stock", "Nom du stock", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableStock->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("gestion_stock", "Quantit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableStock->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("gestion_stock", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableStock->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("gestion_stock", "Prix unitaire", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableStock->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("gestion_stock", "Date d'ajout", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableStock->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("gestion_stock", "Fournisseur", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableStock->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("gestion_stock", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableStock->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("gestion_stock", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableStock->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("gestion_stock", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableStock->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("gestion_stock", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableStock->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("gestion_stock", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableStock->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("gestion_stock", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableStock->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("gestion_stock", "7", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("gestion_stock", "Cosm\303\251tique ", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("gestion_stock", "Vestimentaire ", nullptr));

        label_7->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Tri par type</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("gestion_stock", "Modifier", nullptr));
        pushButton_3->setText(QCoreApplication::translate("gestion_stock", "supprimer", nullptr));
        pushButton_32->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("gestion_stock", "Ajout stock", nullptr));
        label_5->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#000054;\">Fournisseur </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#000054;\">Quantit\303\251 </span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-weight:700; color:#000054;\">NOM DU STOCK</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#000054;\">Type </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#000054;\">Date d'ajout </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("gestion_stock", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#000054;\">Prix Unitaire </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("gestion_stock", "Ajouter", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("gestion_stock", "Alimentaire ", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("gestion_stock", "Cosm\303\251tique ", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("gestion_stock", "Vestimentaire ", nullptr));

        pushButton_5->setText(QCoreApplication::translate("gestion_stock", "ACCEUIL", nullptr));
        pushButton_28->setText(QCoreApplication::translate("gestion_stock", "STATISTIQUES", nullptr));
        pushButton_30->setText(QString());
        pushButton_31->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gestion_stock: public Ui_gestion_stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_STOCK_H
