/********************************************************************************
** Form generated from reading UI file 'draggablelabel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAGGABLELABEL_H
#define UI_DRAGGABLELABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_draggablelabel
{
public:

    void setupUi(QDialog *draggablelabel)
    {
        if (draggablelabel->objectName().isEmpty())
            draggablelabel->setObjectName("draggablelabel");
        draggablelabel->resize(400, 300);

        retranslateUi(draggablelabel);

        QMetaObject::connectSlotsByName(draggablelabel);
    } // setupUi

    void retranslateUi(QDialog *draggablelabel)
    {
        draggablelabel->setWindowTitle(QCoreApplication::translate("draggablelabel", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class draggablelabel: public Ui_draggablelabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGGABLELABEL_H
