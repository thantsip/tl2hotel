#ifndef GUIMANAGMENT_H
#define GUIMANAGMENT_H

#include <QLabel>
#include <QObject>
#include <QDate>
#include <QLineEdit>
#include <QMainWindow>
#include <QGridLayout>
#include <QTableWidget>
#include <QMessageBox>
#include <QDateEdit>

#include "customerManagement.h"
#include "roomManagement.h"
#include "reservationManagement.h"

static const QString Title                 = QObject::tr("Hotel Manager");
static const QString EmptyRes              = QObject::tr("Please fill out customer ID and room number");
static const QString DateBeforeCurrentDate = QObject::tr("Check In date must be after current date");
static const QString CheckOutBeforeCheckIn = QObject::tr("Check Out date must be after Check In date");

class GuiManagment
{
private:
        CustomerManagement CM ;
        RoomManagement RM ;
        ReservationManagement ResM;

public:
    GuiManagment();
    void CustomerTableView(QTableWidget *customerTable , QLineEdit *edt ) ;
    void RoomtableView( QTableWidget *roomTable ) ;
    void ShowRoomGrid( QGridLayout *Grid , QMainWindow *wnd ) ;
    void CreateNewReservation( QLineEdit *CustomerIdReservation , QLineEdit *RoomNumberReservation , QDateEdit *CheckInDate , QDateEdit *CheckOutDate ) ;
};

#endif // GUIMANAGMENT_H
