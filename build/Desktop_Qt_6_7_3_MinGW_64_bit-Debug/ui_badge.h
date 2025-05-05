/********************************************************************************
** Form generated from reading UI file 'badge.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BADGE_H
#define UI_BADGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_badge
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *enregistrer;
    QLineEdit *UID;
    QLineEdit *cin;
    QPushButton *quitter;
    QLabel *statusLabel;

    void setupUi(QDialog *badge)
    {
        if (badge->objectName().isEmpty())
            badge->setObjectName("badge");
        badge->resize(1011, 709);
        groupBox = new QGroupBox(badge);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 70, 961, 501));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 80, 161, 51));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 150, 161, 20));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(670, 80, 261, 151));
        enregistrer = new QPushButton(groupBox);
        enregistrer->setObjectName("enregistrer");
        enregistrer->setGeometry(QRect(140, 230, 83, 29));
        UID = new QLineEdit(groupBox);
        UID->setObjectName("UID");
        UID->setGeometry(QRect(260, 90, 113, 28));
        cin = new QLineEdit(groupBox);
        cin->setObjectName("cin");
        cin->setGeometry(QRect(260, 150, 113, 28));
        quitter = new QPushButton(groupBox);
        quitter->setObjectName("quitter");
        quitter->setGeometry(QRect(30, 430, 83, 29));
        statusLabel = new QLabel(badge);
        statusLabel->setObjectName("statusLabel");
        statusLabel->setGeometry(QRect(20, 0, 501, 91));

        retranslateUi(badge);

        QMetaObject::connectSlotsByName(badge);
    } // setupUi

    void retranslateUi(QDialog *badge)
    {
        badge->setWindowTitle(QCoreApplication::translate("badge", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("badge", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("badge", "entre le UID de carte", nullptr));
        label_2->setText(QCoreApplication::translate("badge", "entrer le cin de employer", nullptr));
        enregistrer->setText(QCoreApplication::translate("badge", "enregistrer", nullptr));
        quitter->setText(QCoreApplication::translate("badge", "quitter", nullptr));
        statusLabel->setText(QCoreApplication::translate("badge", "TEXT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class badge: public Ui_badge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BADGE_H
