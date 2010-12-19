QT     += core gui sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += troomManagement.h        \
           roomManagement.h         \
           sqlMechanism.h           \
           sqlconnectionsingleton.h \
           filehandler.h            \
           room.h

SOURCES += troomManagement.cpp        \
           roomManagement.cpp         \
           sqlMechanism.cpp           \
           sqlconnectionsingleton.cpp \
           filehandler.cpp            \
           room.cpp