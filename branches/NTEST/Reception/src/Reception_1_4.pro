#-------------------------------------------------
#
# Project created by QtCreator 2010-12-28T17:09:28
#
#-------------------------------------------------

QT       += core gui sql

TARGET = Reception_1_4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    sqlMechanism.cpp \
    sqlconnectionsingleton.cpp \
    roomManagement.cpp \
    room.cpp \
    reservationManagement.cpp \
    receptionist.cpp \
    filehandler.cpp \
    customerManagement.cpp \
    customer.cpp \
    admin.cpp \
    about.cpp \
    pricemanagement.cpp \
    usermanagement.cpp

HEADERS  += mainwindow.h \
    user.h \
    ui_mainwindow.h \
    ui_about.h \
    sqlMechanism.h \
    sqlconnectionsingleton.h \
    roomManagement.h \
    room.h \
    reservationManagement.h \
    receptionist.h \
    filehandler.h \
    customerManagement.h \
    customer.h \
    admin.h \
    about.h \
    pricemanagement.h \
    usermanagement.h

FORMS    += mainwindow.ui \
    about.ui
