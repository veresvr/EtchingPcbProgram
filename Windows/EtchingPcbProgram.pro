#-------------------------------------------------
#
# Project created by QtCreator 2017-10-17T00:39:51
#
#-------------------------------------------------

QT       += core gui
QT      += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = chemBarr
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    port.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    port.h \
    qcustomplot.h

FORMS    += mainwindow.ui
