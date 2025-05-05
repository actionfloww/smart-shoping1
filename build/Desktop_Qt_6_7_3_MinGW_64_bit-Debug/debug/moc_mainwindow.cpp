/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pushButton_clicked",
    "",
    "on_tab_affichage_clicked",
    "QModelIndex",
    "index",
    "on_sup_clicked",
    "on_update_clicked",
    "on_sup_2_clicked",
    "viderFormulaire",
    "generatePDF",
    "rechercherEvent",
    "refreshPage",
    "trierParType",
    "goToStatisticsPage",
    "afficherStatistiques",
    "switchToStatisticsPage",
    "switchTocalender",
    "afficherEvenementsSurCalendrier",
    "afficherDetailsEvenement",
    "date",
    "afficherAfficheEvenement",
    "masquerAfficheEvenement",
    "obtenirModeleInitial",
    "QAbstractItemModel*",
    "switchToNews",
    "update_label",
    "send_automatic_alert",
    "applyTableViewStyle",
    "on_analytics_3_clicked",
    "on_calendar_4_clicked",
    "on_P_3_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    1,  171,    2, 0x08,    2 /* Private */,
       6,    0,  174,    2, 0x08,    4 /* Private */,
       7,    0,  175,    2, 0x08,    5 /* Private */,
       8,    0,  176,    2, 0x08,    6 /* Private */,
       9,    0,  177,    2, 0x08,    7 /* Private */,
      10,    0,  178,    2, 0x08,    8 /* Private */,
      11,    0,  179,    2, 0x08,    9 /* Private */,
      12,    0,  180,    2, 0x08,   10 /* Private */,
      13,    0,  181,    2, 0x08,   11 /* Private */,
      14,    0,  182,    2, 0x08,   12 /* Private */,
      15,    0,  183,    2, 0x08,   13 /* Private */,
      16,    0,  184,    2, 0x08,   14 /* Private */,
      17,    0,  185,    2, 0x08,   15 /* Private */,
      18,    0,  186,    2, 0x08,   16 /* Private */,
      19,    1,  187,    2, 0x08,   17 /* Private */,
      21,    0,  190,    2, 0x08,   19 /* Private */,
      22,    0,  191,    2, 0x08,   20 /* Private */,
      23,    0,  192,    2, 0x08,   21 /* Private */,
      25,    0,  193,    2, 0x08,   22 /* Private */,
      26,    0,  194,    2, 0x08,   23 /* Private */,
      27,    0,  195,    2, 0x08,   24 /* Private */,
      28,    0,  196,    2, 0x08,   25 /* Private */,
      29,    0,  197,    2, 0x08,   26 /* Private */,
      30,    0,  198,    2, 0x08,   27 /* Private */,
      31,    0,  199,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   20,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tab_affichage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_sup_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_update_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sup_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'viderFormulaire'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generatePDF'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rechercherEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'trierParType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goToStatisticsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afficherStatistiques'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToStatisticsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchTocalender'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afficherEvenementsSurCalendrier'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'afficherDetailsEvenement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'afficherAfficheEvenement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'masquerAfficheEvenement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'obtenirModeleInitial'
        QtPrivate::TypeAndForceComplete<QAbstractItemModel *, std::false_type>,
        // method 'switchToNews'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_label'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_automatic_alert'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'applyTableViewStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_analytics_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_calendar_4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_P_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_tab_affichage_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->on_sup_clicked(); break;
        case 3: _t->on_update_clicked(); break;
        case 4: _t->on_sup_2_clicked(); break;
        case 5: _t->viderFormulaire(); break;
        case 6: _t->generatePDF(); break;
        case 7: _t->rechercherEvent(); break;
        case 8: _t->refreshPage(); break;
        case 9: _t->trierParType(); break;
        case 10: _t->goToStatisticsPage(); break;
        case 11: _t->afficherStatistiques(); break;
        case 12: _t->switchToStatisticsPage(); break;
        case 13: _t->switchTocalender(); break;
        case 14: _t->afficherEvenementsSurCalendrier(); break;
        case 15: _t->afficherDetailsEvenement((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 16: _t->afficherAfficheEvenement(); break;
        case 17: _t->masquerAfficheEvenement(); break;
        case 18: { QAbstractItemModel* _r = _t->obtenirModeleInitial();
            if (_a[0]) *reinterpret_cast< QAbstractItemModel**>(_a[0]) = std::move(_r); }  break;
        case 19: _t->switchToNews(); break;
        case 20: _t->update_label(); break;
        case 21: _t->send_automatic_alert(); break;
        case 22: _t->applyTableViewStyle(); break;
        case 23: _t->on_analytics_3_clicked(); break;
        case 24: _t->on_calendar_4_clicked(); break;
        case 25: _t->on_P_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
