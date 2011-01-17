QT     += sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing


DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += treservationManagement.h \
           reservationManagement.h  \
	   roomManagement.h         \
           sqlMechanism.h           \
           sqlconnectionsingleton.h \
           filehandler.h            \
           room.h                   \
	   customer.h \			
    customerManagement.h

SOURCES += treservationManagement.cpp \
           roomManagement.cpp         \
           sqlMechanism.cpp           \
           sqlconnectionsingleton.cpp \
           filehandler.cpp            \
	   room.cpp                   \ 
	   customer.cpp \               
    reservationManagement.cpp \
    customerManagement.cpp
	                     
	                
