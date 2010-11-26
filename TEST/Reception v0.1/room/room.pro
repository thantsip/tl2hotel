QT          += sql
CONFIG      += qtestlib
TEMPLATE     = app
TARGET       = testing
DEPENDPATH  += ..\..\project
INCLUDEPATH += ..\..\project

HEADERS += troom.h \
           room.h

SOURCES += troom.cpp \
           room.cpp