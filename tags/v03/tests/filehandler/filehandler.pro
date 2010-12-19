QT          += sql
CONFIG      += qtestlib
TEMPLATE     = app
TARGET       = testing
DEPENDPATH  += ..\..\project
INCLUDEPATH += ..\..\project

HEADERS += tfilehandler.h \
           filehandler.h

SOURCES += tfilehandler.cpp \
           filehandler.cpp