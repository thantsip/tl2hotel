CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing

DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += treceptionist.h \
            receptionist.h \
			        user.h

SOURCES += treceptionist.cpp \
            receptionist.cpp \
			        user.cpp