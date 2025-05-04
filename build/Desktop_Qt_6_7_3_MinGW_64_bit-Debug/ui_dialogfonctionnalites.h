/********************************************************************************
** Form generated from reading UI file 'dialogfonctionnalites.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFONCTIONNALITES_H
#define UI_DIALOGFONCTIONNALITES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_DialogFonctionnalites
{
public:

    void setupUi(QDialog *DialogFonctionnalites)
    {
        if (DialogFonctionnalites->objectName().isEmpty())
            DialogFonctionnalites->setObjectName("DialogFonctionnalites");
        DialogFonctionnalites->resize(400, 300);

        retranslateUi(DialogFonctionnalites);

        QMetaObject::connectSlotsByName(DialogFonctionnalites);
    } // setupUi

    void retranslateUi(QDialog *DialogFonctionnalites)
    {
        DialogFonctionnalites->setWindowTitle(QCoreApplication::translate("DialogFonctionnalites", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogFonctionnalites: public Ui_DialogFonctionnalites {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFONCTIONNALITES_H
