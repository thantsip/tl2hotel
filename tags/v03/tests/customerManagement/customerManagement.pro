QT     += core gui sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += tcustomerManagement.h    \
           customerManagement.h     \
           sqlMechanism.h           \
           sqlconnectionsingleton.h \
           filehandler.h            \
           customer.h

SOURCES += tcustomerManagement.cpp    \
           customerManagement.cpp     \
           sqlMechanism.cpp           \
           sqlconnectionsingleton.cpp \
           filehandler.cpp            \
           customer.cpp