#-------------------------------------------------
#
# Project created by QtCreator 2010-12-08T11:42:26
#
#-------------------------------------------------

QT       += core gui sql

TARGET = Reception_v_13
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
    customer.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    sqlMechanism.h \
    sqlconnectionsingleton.h \
    roomManagement.h \
    room.h \
    reservationManagement.h \
    filehandler.h \
    customerManagement.h \
    customer.h \
    about.h

FORMS    += mainwindow.ui \
    about.ui
