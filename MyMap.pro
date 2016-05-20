#-------------------------------------------------
#
# Project created by QtCreator 2016-05-19T21:34:35
#
#-------------------------------------------------

QT       += core gui
QT += widgets axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyMap
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    webaxwidget.h

FORMS    += mainwindow.ui

DISTFILES +=

RESOURCES += \
    mymap.qrc
