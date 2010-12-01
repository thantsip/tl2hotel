#-------------------------------------------------
#
# Project created by QtCreator 2010-12-02T01:12:14
#
#-------------------------------------------------

QT       += core gui sql

TARGET = Reception_v1_1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sqlMechanism.cpp \
    sqlconnectionsingleton.cpp \
    roomManagement.cpp \
    room.cpp \
    reservationManagement.cpp \
    filehandler.cpp \
    customerManagement.cpp \
    customer.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h \
    sqlMechanism.h \
    sqlconnectionsingleton.h \
    roomManagement.h \
    room.h \
    reservationManagement.h \
    filehandler.h \
    customerManagement.h \
    customer.h

FORMS    += mainwindow.ui
