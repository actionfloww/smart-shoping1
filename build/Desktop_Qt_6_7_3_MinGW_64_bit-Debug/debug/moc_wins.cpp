/****************************************************************************
** Meta object code from reading C++ file 'wins.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../wins.h"
#include <QtNetwork/QSslError>
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
#error "The header file 'wins.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSwinsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSwinsENDCLASS = QtMocHelpers::stringData(
    "wins",
    "accessGranted",
    "",
    "employeeName",
    "accessDenied",
    "on_acceuil_clicked",
    "on_btnAjouter_clicked",
    "on_btnModifier_clicked",
    "on_btnSupprimer_clicked",
    "on_btnAfficher_2_clicked",
    "on_lineEditRecherche_textChanged",
    "arg1",
    "on_comboBoxTri_currentIndexChanged",
    "index",
    "on_btnPDF_clicked",
    "on_buttonAchat_clicked",
    "mettreAJourAffichagePoints",
    "idClient",
    "actualiserTableauAchats",
    "on_buttonStats_clicked",
    "goToPage1",
    "goToPage2",
    "onSmsSent",
    "QNetworkReply*",
    "reply",
    "on_tableView_2_clicked",
    "QModelIndex",
    "on_lineEditID_textChanged",
    "verifierNumero",
    "numero",
    "on_btnEnvoyerSMS_2_clicked",
    "animateStars",
    "newStars",
    "on_tabWidget_currentChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSwinsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x06,    1 /* Public */,
       4,    0,  155,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,  156,    2, 0x08,    4 /* Private */,
       6,    0,  157,    2, 0x08,    5 /* Private */,
       7,    0,  158,    2, 0x08,    6 /* Private */,
       8,    0,  159,    2, 0x08,    7 /* Private */,
       9,    0,  160,    2, 0x08,    8 /* Private */,
      10,    1,  161,    2, 0x08,    9 /* Private */,
      12,    1,  164,    2, 0x08,   11 /* Private */,
      14,    0,  167,    2, 0x08,   13 /* Private */,
      15,    0,  168,    2, 0x08,   14 /* Private */,
      16,    1,  169,    2, 0x08,   15 /* Private */,
      18,    0,  172,    2, 0x08,   17 /* Private */,
      19,    0,  173,    2, 0x08,   18 /* Private */,
      20,    0,  174,    2, 0x08,   19 /* Private */,
      21,    0,  175,    2, 0x08,   20 /* Private */,
      22,    1,  176,    2, 0x08,   21 /* Private */,
      25,    1,  179,    2, 0x08,   23 /* Private */,
      27,    1,  182,    2, 0x08,   25 /* Private */,
      28,    1,  185,    2, 0x08,   27 /* Private */,
      30,    0,  188,    2, 0x08,   29 /* Private */,
      31,    1,  189,    2, 0x08,   30 /* Private */,
      33,    1,  192,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   13,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject wins::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSwinsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSwinsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSwinsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<wins, std::true_type>,
        // method 'accessGranted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'accessDenied'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_acceuil_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAjouter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnModifier_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnSupprimer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAfficher_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEditRecherche_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_comboBoxTri_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnPDF_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonAchat_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mettreAJourAffichagePoints'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'actualiserTableauAchats'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonStats_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goToPage1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goToPage2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSmsSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'on_tableView_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_lineEditID_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'verifierNumero'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_btnEnvoyerSMS_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animateStars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_tabWidget_currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void wins::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<wins *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accessGranted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->accessDenied(); break;
        case 2: _t->on_acceuil_clicked(); break;
        case 3: _t->on_btnAjouter_clicked(); break;
        case 4: _t->on_btnModifier_clicked(); break;
        case 5: _t->on_btnSupprimer_clicked(); break;
        case 6: _t->on_btnAfficher_2_clicked(); break;
        case 7: _t->on_lineEditRecherche_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->on_comboBoxTri_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_btnPDF_clicked(); break;
        case 10: _t->on_buttonAchat_clicked(); break;
        case 11: _t->mettreAJourAffichagePoints((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->actualiserTableauAchats(); break;
        case 13: _t->on_buttonStats_clicked(); break;
        case 14: _t->goToPage1(); break;
        case 15: _t->goToPage2(); break;
        case 16: _t->onSmsSent((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 17: _t->on_tableView_2_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 18: _t->on_lineEditID_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->verifierNumero((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->on_btnEnvoyerSMS_2_clicked(); break;
        case 21: _t->animateStars((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_tabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (wins::*)(QString );
            if (_t _q_method = &wins::accessGranted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (wins::*)();
            if (_t _q_method = &wins::accessDenied; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *wins::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wins::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSwinsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int wins::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void wins::accessGranted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void wins::accessDenied()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
