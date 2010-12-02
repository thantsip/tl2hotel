QT     += sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += tfilehandler.h filehandler.h
SOURCES += tfilehandler.cpp filehandler.cpp