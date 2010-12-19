QT     += core gui sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += troom.h room.h
SOURCES += troom.cpp room.cpp