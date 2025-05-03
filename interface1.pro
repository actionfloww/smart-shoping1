QT       += core gui
QT       += sql
QT       += core gui sql printsupport
QT       += printsupport
QT       += charts sql
QT       += network
QT       += serialport
QT+= serialport sql printsupport  charts  quickwidgets location positioning printsupport quick network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++17
CONFIG += console
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    achat.cpp \
    client.cpp \
    connection.cpp \
    dialog.cpp \
    email.cpp \
    gestion_magasin.cpp \
    gestion_produit.cpp \
    magasins.cpp \
    main.cpp \
    menu.cpp \
    pack.cpp \
    produit.cpp \
    serialmanager.cpp \
    wins.cpp \
    Event.cpp \
    customcalendarwidget.cpp \
    mainwindow.cpp \
    arduino.cpp


HEADERS += \
    achat.h \
    client.h \
    connection.h \
    dialog.h \
    email.h \
    gestion_magasin.h \
    gestion_produit.h \
    magasins.h \
    menu.h \
    pack.h \
    produit.h \
    serialmanager.h \
    wins.h \
    Event.h \
    arduino.h \
    customcalendarwidget.h \
    mainwindow.h

FORMS += \
    dialog.ui \
    gestion_magasin.ui \
    gestion_produit.ui \
    menu.ui \
    pack.ui \
    wins.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
