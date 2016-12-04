#-------------------------------------------------
#
# Project created by QtCreator 2016-12-02T10:49:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SySPDV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    realizarvenda.cpp \
    verificarvendas.cpp

HEADERS  += mainwindow.h \
    realizarvenda.h \
    verificarvendas.h

FORMS    += mainwindow.ui \
    realizarvenda.ui \
    verificarvendas.ui
