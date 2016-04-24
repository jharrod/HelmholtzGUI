#-------------------------------------------------
#
# Project created by QtCreator 2016-04-23T19:53:13
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelmholtzGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calibrate.cpp \
    settings.cpp

HEADERS  += mainwindow.h \
    calibrate.h \
    settings.h \
    calibrationdata.h

FORMS    += mainwindow.ui \
    calibrate.ui \
    settings.ui

RESOURCES += \
    buttons.qrc
