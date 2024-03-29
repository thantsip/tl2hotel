#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDate>

#include "customerManagement.h"
#include "roomManagement.h"
#include "reservationManagement.h"
#include "about.h"
#include "pricemanagement.h"
#include "usermanagement.h"
#include "user.h"
#include <QGridLayout>
#include <QScrollArea>


static const QString Title                 = QObject::tr("Hotel Manager");
static const QString EmptyRes              = QObject::tr("Please fill out customer ID and room number");
static const QString DateBeforeCurrentDate = QObject::tr("Check In date must be after current date");
static const QString CheckOutBeforeCheckIn = QObject::tr("Check Out date must be after Check In date");
static const QString NotAllCustomerData    = QObject::tr("Please fill out all customer data");
static const QString NoCustomerID          = QObject::tr("Please fill out Customer ID");
static const QString NotAllRoomData        = QObject::tr("Please fill out all Room data");
static const QString NoRoomNumber          = QObject::tr("Please fill out Room Number");

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

    bool eventFilter(QObject *obj, QEvent *event);

private:
    Ui::MainWindow *ui;
    CustomerManagement CM;
    RoomManagement RM;
    ReservationManagement ResM;
    PriceManagement PM;
    UserManagement UM;
    QGridLayout * Grid;
    QScrollArea *scroll;
    QVBoxLayout *layout;

private slots:
    void on_Search_clicked();
    void on_SaveUser_clicked();
    void on_FindUser_clicked();
    void on_DeleteUser_clicked();
    void on_InsertUser_clicked();
    void on_UpdateNewPrice_clicked();
    void on_FindNewPrice_clicked();
    void on_DeleteNewPrice_clicked();
    void on_InsertNewPrice_clicked();
    void on_DeleteAllRooms_clicked();
    void on_Re_clicked();
    void on_MassiveRoomEditSave_clicked();
    void on_RefreshRoom_clicked();
    void on_CheckOut_clicked();
    void on_CreateMassiveRoom_clicked();
    void on_CreateMassiveRoomTable_clicked();
    void on_About_triggered();
    void on_InstantTableView_cellClicked(int row, int column);
    void on_InstantEdit_textChanged(QString );
    void on_Tabs2_selected(QString );
    void on_SaveRoom_clicked();
    void on_pushButton_clicked();
    void on_DeleteRoom_clicked();
    void on_InsertRoom_clicked();
    void on_SaveCustomer_clicked();
    void on_FindCustomer_clicked();
    void on_DeleteCustomer_clicked();
    void on_InsertCustomer_clicked();
    void on_NewReservation_clicked();
    void on_CleanTab_triggered();
    void on_Tabs_selected(QString );
    void on_Clean_triggered();
    void on_Exit_triggered();

    void showRoomGrid();
    void CustomerTableView();
    void RoomTableView();
    void PricesTableView();
    void UserTableView();
};

#endif // MAINWINDOW_H
