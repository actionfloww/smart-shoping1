QT       += core gui
QT       += sql
QT       += core gui sql printsupport
QT       += printsupport
QT       += charts sql
QT       += network
QT       += serialport
QT+= serialport sql printsupport  charts  quickwidgets location positioning printsupport quick network


QT += printsupport gui widgets
CONFIG += c++17
QT += sql charts
QT       += network
QT += core gui multimedia widgets
QT += multimedia
QT += core gui sql serialport  ##

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++17
CONFIG += console
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    achat.cpp \
    badge.cpp \
    client.cpp \
    confi.cpp \
    connection.cpp \
    dialog.cpp \
    dialogfonctionnalites.cpp \
    email.cpp \
    employer.cpp \
    forget.cpp \
    gestion_employe.cpp \
    gestion_magasin.cpp \
    gestion_produit.cpp \
    gestion_stock.cpp \
    gestionstock.cpp \
    login.cpp \
    magasins.cpp \
    main.cpp \
    menu.cpp \
    pack.cpp \
    pasw.cpp \
    produit.cpp \
    serialmanager.cpp \
    wins.cpp \
    Event.cpp \
    customcalendarwidget.cpp \
    mainwindow.cpp \
    arduino.cpp


HEADERS += \
    achat.h \
    badge.h \
    client.h \
    confi.h \
    connection.h \
    dialog.h \
    dialogfonctionnalites.h \
    email.h \
    employer.h \
    forget.h \
    gestion_employe.h \
    gestion_magasin.h \
    gestion_produit.h \
    gestion_stock.h \
    gestionstock.h \
    login.h \
    magasins.h \
    menu.h \
    pack.h \
    pasw.h \
    produit.h \
    serialmanager.h \
    shareddata.h \
    wins.h \
    Event.h \
    arduino.h \
    customcalendarwidget.h \
    mainwindow.h

FORMS += \
    badge.ui \
    confi.ui \
    dialog.ui \
    dialogfonctionnalites.ui \
    forget.ui \
    gestion_employe.ui \
    gestion_magasin.ui \
    gestion_produit.ui \
    gestion_stock.ui \
    login.ui \
    menu.ui \
    pack.ui \
    pasw.ui \
    wins.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc

