QT       += core gui
QT       += sql
QT       += core gui sql printsupport
QT       += printsupport
QT       += charts sql
QT       += network
QT       += serialport
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
    main.cpp \
    menu.cpp \
    wins.cpp \
    Event.cpp \
    customcalendarwidget.cpp \
    mainwindow.cpp \
    arduino.cpp


HEADERS += \
    achat.h \
    client.h \
    connection.h \
    menu.h \
    wins.h \
    Event.h \
    arduino.h \
    customcalendarwidget.h \
    mainwindow.h

FORMS += \
    menu.ui \
    wins.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    img.qrc
