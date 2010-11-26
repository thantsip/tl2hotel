QT += sql

TARGET = v01
TEMPLATE = app

SOURCES += main.cpp                  \
           mainwindow.cpp            \
           sqlMechanism.cpp          \
           roomManagement.cpp        \
           room.cpp                  \
           reservationManagement.cpp \
           filehandler.cpp           \
           customerManagement.cpp    \
           customer.cpp              \
           sqlconnectionsingleton.cpp

HEADERS += mainwindow.h            \
           sqlMechanism.h          \
           roomManagement.h        \
           room.h                  \
           reservationManagement.h \
           filehandler.h           \
           customerManagement.h    \
           customer.h              \
           sqlconnectionsingleton.h

FORMS += mainwindow.ui
