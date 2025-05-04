/****************************************************************************
** Meta object code from reading C++ file 'gestion_stock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gestion_stock.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestion_stock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSgestion_stockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSgestion_stockENDCLASS = QtMocHelpers::stringData(
    "gestion_stock",
    "afficherStock",
    "",
    "afficherStockParType",
    "type",
    "on_pushButton_clicked",
    "onCellClicked",
    "row",
    "column",
    "on_pushButton_3_clicked",
    "on_pushButton_2_clicked",
    "on_comboBox_currentIndexChanged",
    "index",
    "genererPDF",
    "on_pushButton_13_clicked",
    "on_pushButton_14_clicked",
    "showFacebookStyleNotification",
    "count",
    "onRechercheTextChanged",
    "text",
    "checkCriticalStockAndNotify",
    "on_pushButton_17_clicked",
    "on_pushButton_15_clicked",
    "update_label",
    "send_automatic_alert"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSgestion_stockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x08,    1 /* Private */,
       3,    1,  117,    2, 0x08,    2 /* Private */,
       5,    0,  120,    2, 0x08,    4 /* Private */,
       6,    2,  121,    2, 0x08,    5 /* Private */,
       9,    0,  126,    2, 0x08,    8 /* Private */,
      10,    0,  127,    2, 0x08,    9 /* Private */,
      11,    1,  128,    2, 0x08,   10 /* Private */,
      13,    0,  131,    2, 0x08,   12 /* Private */,
      14,    0,  132,    2, 0x08,   13 /* Private */,
      15,    0,  133,    2, 0x08,   14 /* Private */,
      16,    1,  134,    2, 0x08,   15 /* Private */,
      18,    1,  137,    2, 0x08,   17 /* Private */,
      20,    0,  140,    2, 0x08,   19 /* Private */,
      21,    0,  141,    2, 0x08,   20 /* Private */,
      22,    0,  142,    2, 0x08,   21 /* Private */,
      23,    0,  143,    2, 0x08,   22 /* Private */,
      24,    0,  144,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gestion_stock::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSgestion_stockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSgestion_stockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSgestion_stockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gestion_stock, std::true_type>,
        // method 'afficherStock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afficherStockParType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'genererPDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_13_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_14_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFacebookStyleNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onRechercheTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'checkCriticalStockAndNotify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_17_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_15_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_label'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_automatic_alert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gestion_stock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gestion_stock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->afficherStock(); break;
        case 1: _t->afficherStockParType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->onCellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->genererPDF(); break;
        case 8: _t->on_pushButton_13_clicked(); break;
        case 9: _t->on_pushButton_14_clicked(); break;
        case 10: _t->showFacebookStyleNotification((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->onRechercheTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->checkCriticalStockAndNotify(); break;
        case 13: _t->on_pushButton_17_clicked(); break;
        case 14: _t->on_pushButton_15_clicked(); break;
        case 15: _t->update_label(); break;
        case 16: _t->send_automatic_alert(); break;
        default: ;
        }
    }
}

const QMetaObject *gestion_stock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gestion_stock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSgestion_stockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gestion_stock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
