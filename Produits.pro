QT += core gui sql charts widgets
QT       += core gui
QT       += core gui sql  # Ajout de SQL pour la base de données
QT += printsupport
QT += sql charts
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connexion.cpp \
    main.cpp \
    mainwindow.cpp \
    pack.cpp \
    produit.cpp \
    dialog.cpp

HEADERS += \
    connexion.h \
    mainwindow.h \
    pack.h \
    produit.h \
    dialog.h

FORMS += \
    dialog.ui \
    mainwindow.ui \
    pack.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc

