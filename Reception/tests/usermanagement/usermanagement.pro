
QT     += sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing





DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src
# Input
HEADERS += tusermanagement.h \
    user.h \
    sqlMechanism.h \
    sqlconnectionsingleton.h \
    filehandler.h \
    usermanagement.h
SOURCES += tusermanagement.cpp \
    user.cpp \
    sqlMechanism.cpp \
    sqlconnectionsingleton.cpp \
    filehandler.cpp \
    usermanagement.cpp
