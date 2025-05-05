/********************************************************************************
** Form generated from reading UI file 'pack.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACK_H
#define UI_PACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pack
{
public:
    QComboBox *comboBox_pack;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_18;
    QPushButton *pushButton_gererpack;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_43;
    QLabel *label_31;
    QLabel *label_20;
    QLabel *label_17;
    QLineEdit *LineEdit_rechercher_2;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *pack)
    {
        if (pack->objectName().isEmpty())
            pack->setObjectName("pack");
        pack->resize(1366, 768);
        comboBox_pack = new QComboBox(pack);
        comboBox_pack->setObjectName("comboBox_pack");
        comboBox_pack->setGeometry(QRect(290, 70, 141, 31));
        comboBox_pack->setStyleSheet(QString::fromUtf8("QComboBox::down-arrow {\n"
"    image: url(:/icons/down_arrow.svg); /* Optionnel - pour une fl\303\250che personnalis\303\251e */\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border: 1px solid #d5d5d5;\n"
"    border-radius: 8px;\n"
"    selection-background-color: #3498db;\n"
"    selection-color: white;\n"
"}\n"
""));
        label_5 = new QLabel(pack);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1080, -50, 49, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/0de86780-dae2-4175-a752-c75985b139c6-removebg-preview.png")));
        label_5->setScaledContents(true);
        label_4 = new QLabel(pack);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 40, 951, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color: #8B0000;\n"
"    letter-spacing: 0.5px;\n"
"}"));
        label_2 = new QLabel(pack);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 0, 1421, 1361));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Ressources/cff87cf7-fcc3-49f6-b133-8db62c629784.jfif")));
        label_2->setScaledContents(true);
        label_18 = new QLabel(pack);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(400, -60, 61, 61));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-04_at_19.44.19-removebg-preview.png")));
        label_18->setScaledContents(true);
        pushButton_gererpack = new QPushButton(pack);
        pushButton_gererpack->setObjectName("pushButton_gererpack");
        pushButton_gererpack->setGeometry(QRect(370, 110, 121, 31));
        pushButton_gererpack->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_9 = new QLabel(pack);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(18, 5, 31, 21));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-13_at_14.24.37-removebg-preview.png")));
        label_9->setScaledContents(true);
        label_11 = new QLabel(pack);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(250, 50, 21, 21));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-13_at_14.36.06-removebg-preview (1).png")));
        label_11->setScaledContents(true);
        label_43 = new QLabel(pack);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(1120, -30, 49, 16));
        label_43->setStyleSheet(QString::fromUtf8("font-family: \"Georgia\", \"Times New Roman\", serif;"));
        label_31 = new QLabel(pack);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(420, 70, 16, 31));
        label_20 = new QLabel(pack);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(750, 50, 31, 31));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/Downloads/WhatsApp_Image_2025-04-13_at_17.38.59-removebg-preview.png")));
        label_20->setScaledContents(true);
        label_17 = new QLabel(pack);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(70, 110, 311, 31));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Georgia\", \"Times New Roman\", serif;\n"
"    font-size: 16px;\n"
"    font-weight: normal;\n"
"    font-style: italic;\n"
"    color:  #0a0a55;\n"
"    letter-spacing: 0.5px;\n"
"}\n"
""));
        LineEdit_rechercher_2 = new QLineEdit(pack);
        LineEdit_rechercher_2->setObjectName("LineEdit_rechercher_2");
        LineEdit_rechercher_2->setGeometry(QRect(30, 60, 251, 41));
        LineEdit_rechercher_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_21 = new QLabel(pack);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(-2, 0, 1371, 761));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/image/WhatsApp Image 2025-05-01 at 11.42.27 (1).jpeg")));
        label_21->setScaledContents(true);
        label_22 = new QLabel(pack);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(250, 70, 21, 20));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-13_at_14.36.06-removebg-preview.png")));
        label_22->setScaledContents(true);
        label_23 = new QLabel(pack);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 110, 31, 31));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/image_zaineb/WhatsApp_Image_2025-04-13_at_17.38.59-removebg-preview.png")));
        label_23->setScaledContents(true);
        label = new QLabel(pack);
        label->setObjectName("label");
        label->setGeometry(QRect(438, -1, 421, 41));
        label->setStyleSheet(QString::fromUtf8("font-family:  \"Georgia\", \"Times New Roman\", serif;"));
        label_3 = new QLabel(pack);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(870, 10, 21, 21));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/WhatsApp_Image_2025-05-04_at_19.39.53-removebg-preview.png")));
        label_3->setScaledContents(true);
        label_21->raise();
        label_2->raise();
        comboBox_pack->raise();
        label_5->raise();
        label_4->raise();
        label_18->raise();
        pushButton_gererpack->raise();
        label_9->raise();
        label_11->raise();
        label_43->raise();
        label_31->raise();
        label_20->raise();
        label_17->raise();
        LineEdit_rechercher_2->raise();
        label_22->raise();
        label_23->raise();
        label->raise();
        label_3->raise();

        retranslateUi(pack);

        QMetaObject::connectSlotsByName(pack);
    } // setupUi

    void retranslateUi(QDialog *pack)
    {
        pack->setWindowTitle(QCoreApplication::translate("pack", "Dialog", nullptr));
        label_5->setText(QString());
        label_4->setText(QCoreApplication::translate("pack", "<html><head/><body><p><span style=\" font-weight:700; color:#c50003;\">\342\200\234Utilisez les filtres ci-dessous pour trouver plus rapidement les produits adapt\303\251s au pack cible.\342\200\235</span></p><p><span style=\" font-weight:700;\"><br/></span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_18->setText(QString());
        pushButton_gererpack->setText(QCoreApplication::translate("pack", "GERER LE PACK ", nullptr));
        label_9->setText(QString());
        label_11->setText(QString());
        label_43->setText(QCoreApplication::translate("pack", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ffffff;\">Admin</span></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("pack", "<html><head/><body><p><span style=\" font-size:7pt; color:#0a0a55;\">\342\226\274</span></p></body></html>", nullptr));
        label_20->setText(QString());
        label_17->setText(QCoreApplication::translate("pack", "<html><head/><body><p><span style=\" font-weight:700;\">Cliquez ici pour g\303\251rer vos packs :</span></p></body></html>", nullptr));
        LineEdit_rechercher_2->setText(QString());
        LineEdit_rechercher_2->setPlaceholderText(QCoreApplication::translate("pack", "Tapez le nom de la gamme...", nullptr));
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label->setText(QCoreApplication::translate("pack", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; text-decoration: underline; color:#0a0a55;\">Gestion des packs administrateur</span></p></body></html>", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class pack: public Ui_pack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACK_H
