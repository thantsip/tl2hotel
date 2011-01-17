QT     += sql
CONFIG += qtestlib

TEMPLATE = app
TARGET   = testing





DEPENDPATH  += ..\..\src
INCLUDEPATH += ..\..\src

HEADERS += tpricemanagement.h       \ 
           pricemanagement.h       \  
           sqlMechanism.h           \
           sqlconnectionsingleton.h \
           filehandler.h
	  
                
           
SOURCES += tpricemanagement.cpp       \   
           pricemanagement.cpp       \
	   sqlMechanism.cpp           \
           sqlconnectionsingleton.cpp \
           filehandler.cpp
           
