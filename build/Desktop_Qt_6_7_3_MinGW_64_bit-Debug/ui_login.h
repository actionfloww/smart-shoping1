/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QFrame *frame_2;
    QPushButton *pushButton_Register;
    QFrame *frame;
    QLineEdit *em;
    QLineEdit *pa;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QPushButton *log;
    QPushButton *forget;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(1400, 820);
        frame_2 = new QFrame(login);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(40, 550, 421, 111));
        frame_2->setStyleSheet(QString::fromUtf8(" background-color: #162945; /* Dark background color */\n"
"    color: white; /* Light text color */\n"
"    border-radius: 40px;\n"
"    padding: 15px 30px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #162945; /* Border color matching background */\n"
"    min-width: 120px;\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    text-align: center; /* Center-align text */"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_Register = new QPushButton(frame_2);
        pushButton_Register->setObjectName("pushButton_Register");
        pushButton_Register->setGeometry(QRect(-10, 0, 441, 91));
        pushButton_Register->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #162945; /* Fond bleu fonc\303\251 */\n"
"    color: white; /* Texte blanc */\n"
"    border: 2px solid #162945; /* Bordure assortie */\n"
" /* Coins arrondis */\n"
"    padding: 15px 30px;\n"
"    min-width: 120px;\n"
"    \n"
"    /* Propri\303\251t\303\251s texte */\n"
"    font-size: 22px; \n"
"    font-weight: bold;\n"
"    font-family:  \"Georgia\", \"Times New Roman\", serif;\n"
"    \n"
"    /* Alignement et espacement */\n"
"    qproperty-alignment: AlignCenter; /* Centrage Qt */\n"
"    margin-bottom: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #162945; /* Variation bleu plus clair */\n"
"    border-color: #162945;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #162945; /* Variation bleu plus fonc\303\251 */\n"
"    border-color: #162945;\n"
"}"));
        frame = new QFrame(login);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(40, 30, 421, 491));
        frame->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 15px;\n"
"background-color: #162945;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        em = new QLineEdit(frame);
        em->setObjectName("em");
        em->setGeometry(QRect(60, 250, 281, 41));
        em->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    color: white;\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    selection-background-color: #0078D7;\n"
"    selection-color: white;\n"
"    /* Simuler une ombre avec un d\303\251grad\303\251 */\n"
"    border-bottom: 2px solid rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0078D7;\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"    outline: none;\n"
"    /* Effet de surbrillance au focus */\n"
"    border-bottom: 2px solid #0078D7;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 0.5);\n"
"    font-style: italic;\n"
"    font-size: 13px;\n"
"}"));
        pa = new QLineEdit(frame);
        pa->setObjectName("pa");
        pa->setGeometry(QRect(60, 330, 281, 41));
        pa->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    color: white;\n"
"    background-color: rgba(255, 255, 255, 0.1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    selection-background-color: #0078D7;\n"
"    selection-color: white;\n"
"    /* Simuler une ombre avec un d\303\251grad\303\251 */\n"
"    border-bottom: 2px solid rgba(0, 0, 0, 0.2);\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #0078D7;\n"
"    background-color: rgba(255, 255, 255, 0.2);\n"
"    outline: none;\n"
"    /* Effet de surbrillance au focus */\n"
"    border-bottom: 2px solid #0078D7;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: rgba(255, 255, 255, 0.5);\n"
"    font-style: italic;\n"
"    font-size: 13px;\n"
"}"));
        pa->setEchoMode(QLineEdit::EchoMode::Password);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 190, 48, 40));
        label_4->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/ma/ma.png);\n"
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
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 260, 48, 40));
        label_5->setStyleSheet(QString::fromUtf8("   /* Chemin ABSOLU de l'image */\n"
"    background-image: url(:/ps/ps.png);\n"
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
"color: #d9d9d9; /* Couleur de l'ic\303\264ne */\n"
"    font-size: 16px; /* Taille de l'ic\303\264ne */\n"
"    padding-right: 8px; /* Espacement avec le champ */\n"
"   "));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, 260, 31, 20));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_15.29.29-removebg-preview.png")));
        label_3->setScaledContents(true);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 310, 101, 81));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_15.36.51-removebg-preview (1).png")));
        label_6->setScaledContents(true);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(148, 40, 131, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/t\303\251l\303\251chargement__7_-removebg-preview.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 60, 141, 121));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_16.15.07-removebg-preview.png")));
        label_2->setScaledContents(true);
        log = new QPushButton(frame);
        log->setObjectName("log");
        log->setGeometry(QRect(40, 400, 160, 61));
        log->setStyleSheet(QString::fromUtf8("background-color: #E3E3E7; /* Couleur de fond */\n"
"    border-radius: 20px; /* Bord arrondi */\n"
"    padding: 8px 20px; /* Espacement interne */\n"
"    font-size: 12px; /* Taille de police */\n"
"    color: #000; /* Couleur du texte */\n"
"    border: none; /* Pas de bordure */\n"
"\n"
"background-color: #E3E3E7;\n"
"color: rgb(4, 16, 59); /* Couleur du texte principal */\n"
" font-size: 18px; /* Taille de la police du titre */\n"
"font-weight: bold; /* Texte en gras */\n"
" text-align: center; /* Centrer le texte */\n"
"margin-bottom: 20px;\n"
"font-family: \"Segoe UI\", \"Roboto\", Arial, sans-serif; /* Police simple et moderne */\n"
"color: #000; /* Couleur du texte */\n"
"font-family: \"Georgia\", \"Times New Roman\", serif; /* Police modifi\303\251e */\n"
"  color: #162945; /* Couleur de texte modifi\303\251e */"));
        forget = new QPushButton(frame);
        forget->setObjectName("forget");
        forget->setGeometry(QRect(250, 390, 161, 41));
        forget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #FFFFFF; /* Blanc (correction de #white \342\206\222 #FFFFFF) */\n"
"    font-size: 116px; /* Conserv\303\251 */\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif; /* Police serif comme demand\303\251 */\n"
"    \n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: #FFFFFF; /* Blanc au survol (d\303\251j\303\240 pr\303\251sent) */\n"
"    text-decoration: underline; /* Conserv\303\251 */\n"
"}\n"
""));
        label_6->raise();
        pa->raise();
        label_3->raise();
        em->raise();
        label_4->raise();
        label_5->raise();
        label->raise();
        label_2->raise();
        log->raise();
        forget->raise();
        label_7 = new QLabel(login);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(400, -20, 1401, 801));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp Image 2025-05-04 at 16.22.41.jpeg")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(login);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-2, -5, 1401, 701));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp Image 2025-05-04 at 16.34.21.jpeg")));
        label_8->setScaledContents(true);
        label_10 = new QLabel(login);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(700, 190, 321, 101));
        label_10->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_11 = new QLabel(login);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(980, 320, 311, 91));
        label_11->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_12 = new QLabel(login);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(470, 140, 321, 281));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_16.34.50-removebg-preview.png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(login);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(990, 460, 701, 61));
        label_13->setStyleSheet(QString::fromUtf8(" font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_7->raise();
        label_8->raise();
        frame_2->raise();
        frame->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("login", "\"  Connectez-vous, explorez plus  \"", nullptr));
        em->setText(QString());
        em->setPlaceholderText(QCoreApplication::translate("login", "Email ID", nullptr));
        pa->setText(QString());
        pa->setPlaceholderText(QCoreApplication::translate("login", "Mot de passe ", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_6->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        log->setText(QCoreApplication::translate("login", "Se connecter", nullptr));
        forget->setText(QCoreApplication::translate("login", "mot de passe oubli\303\251 ?", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_10->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:72pt; font-weight:700; font-style:italic; color:#162945;\">onova</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:72pt; font-weight:700; font-style:italic; color:#b5bfeb;\">Mall</span></p></body></html>", nullptr));
        label_12->setText(QString());
        label_13->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-weight:700; color:#dadada;\">Monova Mall, votre espace centralis\303\251 pour tout g\303\251rer : <br/>produits, \303\251v\303\251nements, magasins et bien plus encore..</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
