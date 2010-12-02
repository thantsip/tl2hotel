QT     += sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += tcustomer.h customer.h
SOURCES += tcustomer.cpp customer.cpp