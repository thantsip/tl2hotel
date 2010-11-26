QT          += sql
CONFIG      += qtestlib
TEMPLATE     = app
TARGET       = testing
DEPENDPATH  += ..\..\project
INCLUDEPATH += ..\..\project

HEADERS += tcustomer.h \
           customer.h

SOURCES += tcustomer.cpp \
           customer.cpp