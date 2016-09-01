#-------------------------------------------------
#
# Project created by QtCreator 2016-08-31T20:34:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpencvQtTest
TEMPLATE = app

INCLUDEPATH += C:/opencv/include
LIBS += -LC:\opencv\x86\vc10\lib -lopencv_world310d -lopencv_ts310d \
        -LC:\opencv\x86\vc10\staticlib -lippicvmt


SOURCES += main.cpp\
        MainWindow.cpp

HEADERS  += MainWindow.h

FORMS    += MainWindow.ui

