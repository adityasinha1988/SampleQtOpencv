#-------------------------------------------------
#
# Project created by QtCreator 2015-03-06T16:40:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SampleQtOpencv
TEMPLATE = app
LIBS += `pkg-config opencv --cflags --libs`

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
