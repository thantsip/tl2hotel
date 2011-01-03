/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 3. Jan 12:57:23 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Exit;
    QAction *Clean;
    QAction *Cut;
    QAction *Paste;
    QAction *Help;
    QAction *About;
    QAction *CleanTab;
    QWidget *centralWidget;
    QTabWidget *Tabs;
    QWidget *tab_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLineEdit *RoomNumberReservation;
    QLabel *label_9;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *NewReservation;
    QDateEdit *CheckInDate;
    QDateEdit *CheckOutDate;
    QLabel *label_3;
    QLineEdit *CustomerIdReservation;
    QTabWidget *Tabs2;
    QWidget *tab_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *gridLayoutWidget_8;
    QGridLayout *Grid;
    QWidget *tab_5;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_8;
    QLabel *label_30;
    QLineEdit *BedCapacity;
    QPushButton *FindRooms;
    QLabel *label_31;
    QLineEdit *RoomFloorFind;
    QLabel *label_32;
    QRadioButton *FreeRoomYes;
    QRadioButton *FreeRoomNo;
    QRadioButton *FreeRoomWhatEver;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *gridLayoutWidget_11;
    QGridLayout *Grid2;
    QWidget *tab_6;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_9;
    QLabel *label_28;
    QLineEdit *InstantEdit;
    QTableWidget *InstantTableView;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_10;
    QLabel *label_29;
    QLabel *PopNum;
    QLabel *label_34;
    QLabel *PopFloor;
    QLabel *label_36;
    QLabel *PopCap;
    QWidget *tab_7;
    QWidget *gridLayoutWidget_14;
    QGridLayout *gridLayout_12;
    QLabel *label_35;
    QLabel *label_37;
    QLineEdit *CheckOutNum;
    QPushButton *CheckOut;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *CustomerGroupId;
    QLineEdit *CustomerSurname;
    QLineEdit *CustomerName;
    QLineEdit *CustomerID;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *InsertCustomer;
    QLabel *label;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_3;
    QLineEdit *CustomerIDDelete;
    QLabel *label_16;
    QPushButton *DeleteCustomer;
    QLabel *label_4;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *FindGroupID;
    QLineEdit *FindSurname;
    QLineEdit *FindName;
    QLineEdit *FindID;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_20;
    QPushButton *SaveCustomer;
    QLabel *label_21;
    QPushButton *FindCustomer;
    QTableWidget *CustomerTable;
    QWidget *tab_2;
    QTabWidget *RefreshRoom2;
    QWidget *tab_8;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QLineEdit *FindRoomCapacity;
    QLineEdit *FindRoomFloor;
    QLineEdit *FindRoomNumber;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_26;
    QPushButton *SaveRoom;
    QLabel *label_27;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLineEdit *DeleteRoomNumber;
    QLabel *label_24;
    QPushButton *DeleteRoom;
    QLabel *label_25;
    QTableWidget *RoomTable;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *RoomCapacity;
    QLineEdit *RoomFloor;
    QLineEdit *RoomNumber;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *InsertRoom;
    QLabel *label_2;
    QWidget *tab_9;
    QWidget *gridLayoutWidget_13;
    QGridLayout *gridLayout_11;
    QLabel *label_33;
    QLineEdit *MassiveRoomTableNum;
    QPushButton *CreateMassiveRoomTable;
    QTableWidget *MassiveRoomTable;
    QPushButton *CreateMassiveRoom;
    QWidget *tab_10;
    QTableWidget *MassiveRoomEditTable;
    QPushButton *MassiveRoomEditSave;
    QPushButton *RefreshRoom;
    QWidget *tab_11;
    QPushButton *DeleteAllRooms;
    QTableWidget *MassiveRoomDeleteTable;
    QPushButton *Re;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 514);
        Exit = new QAction(MainWindow);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Clean = new QAction(MainWindow);
        Clean->setObjectName(QString::fromUtf8("Clean"));
        Cut = new QAction(MainWindow);
        Cut->setObjectName(QString::fromUtf8("Cut"));
        Paste = new QAction(MainWindow);
        Paste->setObjectName(QString::fromUtf8("Paste"));
        Help = new QAction(MainWindow);
        Help->setObjectName(QString::fromUtf8("Help"));
        About = new QAction(MainWindow);
        About->setObjectName(QString::fromUtf8("About"));
        CleanTab = new QAction(MainWindow);
        CleanTab->setObjectName(QString::fromUtf8("CleanTab"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Tabs = new QTabWidget(centralWidget);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        Tabs->setGeometry(QRect(0, 0, 691, 471));
        Tabs->setInputMethodHints(Qt::ImhNone);
        Tabs->setTabShape(QTabWidget::Rounded);
        Tabs->setDocumentMode(false);
        Tabs->setTabsClosable(false);
        Tabs->setMovable(true);
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayoutWidget_3 = new QWidget(tab_3);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 211, 161));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        RoomNumberReservation = new QLineEdit(gridLayoutWidget_3);
        RoomNumberReservation->setObjectName(QString::fromUtf8("RoomNumberReservation"));

        gridLayout_4->addWidget(RoomNumberReservation, 5, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 5, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_4->addWidget(label_17, 4, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 2, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_4->addWidget(label_19, 1, 0, 1, 1);

        NewReservation = new QPushButton(gridLayoutWidget_3);
        NewReservation->setObjectName(QString::fromUtf8("NewReservation"));

        gridLayout_4->addWidget(NewReservation, 6, 0, 1, 2);

        CheckInDate = new QDateEdit(gridLayoutWidget_3);
        CheckInDate->setObjectName(QString::fromUtf8("CheckInDate"));
        CheckInDate->setCalendarPopup(true);

        gridLayout_4->addWidget(CheckInDate, 1, 1, 1, 1);

        CheckOutDate = new QDateEdit(gridLayoutWidget_3);
        CheckOutDate->setObjectName(QString::fromUtf8("CheckOutDate"));
        CheckOutDate->setEnabled(true);
        CheckOutDate->setCalendarPopup(true);

        gridLayout_4->addWidget(CheckOutDate, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 2);

        CustomerIdReservation = new QLineEdit(gridLayoutWidget_3);
        CustomerIdReservation->setObjectName(QString::fromUtf8("CustomerIdReservation"));

        gridLayout_4->addWidget(CustomerIdReservation, 4, 1, 1, 1);

        Tabs2 = new QTabWidget(tab_3);
        Tabs2->setObjectName(QString::fromUtf8("Tabs2"));
        Tabs2->setGeometry(QRect(230, 10, 451, 431));
        Tabs2->setMovable(true);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        scrollArea = new QScrollArea(tab_4);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 431, 391));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 429, 389));
        gridLayoutWidget_8 = new QWidget(scrollAreaWidgetContents);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(10, 10, 411, 371));
        Grid = new QGridLayout(gridLayoutWidget_8);
        Grid->setSpacing(6);
        Grid->setContentsMargins(11, 11, 11, 11);
        Grid->setObjectName(QString::fromUtf8("Grid"));
        Grid->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        Tabs2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        gridLayoutWidget_9 = new QWidget(tab_5);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(10, 10, 241, 74));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(gridLayoutWidget_9);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_8->addWidget(label_30, 0, 0, 1, 1);

        BedCapacity = new QLineEdit(gridLayoutWidget_9);
        BedCapacity->setObjectName(QString::fromUtf8("BedCapacity"));

        gridLayout_8->addWidget(BedCapacity, 0, 1, 1, 1);

        FindRooms = new QPushButton(gridLayoutWidget_9);
        FindRooms->setObjectName(QString::fromUtf8("FindRooms"));

        gridLayout_8->addWidget(FindRooms, 4, 0, 1, 4);

        label_31 = new QLabel(gridLayoutWidget_9);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_8->addWidget(label_31, 0, 2, 1, 1);

        RoomFloorFind = new QLineEdit(gridLayoutWidget_9);
        RoomFloorFind->setObjectName(QString::fromUtf8("RoomFloorFind"));

        gridLayout_8->addWidget(RoomFloorFind, 0, 3, 1, 1);

        label_32 = new QLabel(gridLayoutWidget_9);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_8->addWidget(label_32, 1, 0, 1, 1);

        FreeRoomYes = new QRadioButton(gridLayoutWidget_9);
        FreeRoomYes->setObjectName(QString::fromUtf8("FreeRoomYes"));

        gridLayout_8->addWidget(FreeRoomYes, 1, 1, 1, 1);

        FreeRoomNo = new QRadioButton(gridLayoutWidget_9);
        FreeRoomNo->setObjectName(QString::fromUtf8("FreeRoomNo"));

        gridLayout_8->addWidget(FreeRoomNo, 1, 2, 1, 1);

        FreeRoomWhatEver = new QRadioButton(gridLayoutWidget_9);
        FreeRoomWhatEver->setObjectName(QString::fromUtf8("FreeRoomWhatEver"));
        FreeRoomWhatEver->setChecked(true);

        gridLayout_8->addWidget(FreeRoomWhatEver, 1, 3, 1, 1);

        scrollArea_2 = new QScrollArea(tab_5);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 90, 431, 271));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 429, 269));
        gridLayoutWidget_11 = new QWidget(scrollAreaWidgetContents_2);
        gridLayoutWidget_11->setObjectName(QString::fromUtf8("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(10, 10, 411, 251));
        Grid2 = new QGridLayout(gridLayoutWidget_11);
        Grid2->setSpacing(6);
        Grid2->setContentsMargins(11, 11, 11, 11);
        Grid2->setObjectName(QString::fromUtf8("Grid2"));
        Grid2->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        Tabs2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        gridLayoutWidget_10 = new QWidget(tab_6);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(10, 10, 431, 31));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(gridLayoutWidget_10);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_9->addWidget(label_28, 0, 0, 1, 1);

        InstantEdit = new QLineEdit(gridLayoutWidget_10);
        InstantEdit->setObjectName(QString::fromUtf8("InstantEdit"));

        gridLayout_9->addWidget(InstantEdit, 0, 1, 1, 1);

        InstantTableView = new QTableWidget(tab_6);
        InstantTableView->setObjectName(QString::fromUtf8("InstantTableView"));
        InstantTableView->setGeometry(QRect(10, 50, 431, 311));
        InstantTableView->setRowCount(0);
        InstantTableView->setColumnCount(0);
        Tabs2->addTab(tab_6, QString());
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 180, 211, 261));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 230, 255);"));
        gridLayoutWidget_12 = new QWidget(groupBox);
        gridLayoutWidget_12->setObjectName(QString::fromUtf8("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(10, 20, 191, 231));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(gridLayoutWidget_12);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8(""));

        gridLayout_10->addWidget(label_29, 0, 0, 1, 1);

        PopNum = new QLabel(gridLayoutWidget_12);
        PopNum->setObjectName(QString::fromUtf8("PopNum"));
        PopNum->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Comic Sans MS\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(PopNum, 1, 0, 1, 1);

        label_34 = new QLabel(gridLayoutWidget_12);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setFont(font);

        gridLayout_10->addWidget(label_34, 2, 0, 1, 1);

        PopFloor = new QLabel(gridLayoutWidget_12);
        PopFloor->setObjectName(QString::fromUtf8("PopFloor"));
        PopFloor->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Comic Sans MS\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(PopFloor, 3, 0, 1, 1);

        label_36 = new QLabel(gridLayoutWidget_12);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font);

        gridLayout_10->addWidget(label_36, 4, 0, 1, 1);

        PopCap = new QLabel(gridLayoutWidget_12);
        PopCap->setObjectName(QString::fromUtf8("PopCap"));
        PopCap->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Comic Sans MS\";\n"
"background-color: rgb(255, 255, 255);"));

        gridLayout_10->addWidget(PopCap, 5, 0, 1, 1);

        Tabs->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        gridLayoutWidget_14 = new QWidget(tab_7);
        gridLayoutWidget_14->setObjectName(QString::fromUtf8("gridLayoutWidget_14"));
        gridLayoutWidget_14->setGeometry(QRect(10, 10, 160, 71));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_14);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_35 = new QLabel(gridLayoutWidget_14);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_35, 0, 0, 1, 2);

        label_37 = new QLabel(gridLayoutWidget_14);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        gridLayout_12->addWidget(label_37, 1, 0, 1, 1);

        CheckOutNum = new QLineEdit(gridLayoutWidget_14);
        CheckOutNum->setObjectName(QString::fromUtf8("CheckOutNum"));

        gridLayout_12->addWidget(CheckOutNum, 1, 1, 1, 1);

        CheckOut = new QPushButton(gridLayoutWidget_14);
        CheckOut->setObjectName(QString::fromUtf8("CheckOut"));

        gridLayout_12->addWidget(CheckOut, 2, 0, 1, 2);

        Tabs->addTab(tab_7, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 201, 156));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CustomerGroupId = new QLineEdit(gridLayoutWidget);
        CustomerGroupId->setObjectName(QString::fromUtf8("CustomerGroupId"));

        gridLayout->addWidget(CustomerGroupId, 5, 1, 1, 1);

        CustomerSurname = new QLineEdit(gridLayoutWidget);
        CustomerSurname->setObjectName(QString::fromUtf8("CustomerSurname"));

        gridLayout->addWidget(CustomerSurname, 4, 1, 1, 1);

        CustomerName = new QLineEdit(gridLayoutWidget);
        CustomerName->setObjectName(QString::fromUtf8("CustomerName"));

        gridLayout->addWidget(CustomerName, 2, 1, 1, 1);

        CustomerID = new QLineEdit(gridLayoutWidget);
        CustomerID->setObjectName(QString::fromUtf8("CustomerID"));

        gridLayout->addWidget(CustomerID, 1, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        InsertCustomer = new QPushButton(gridLayoutWidget);
        InsertCustomer->setObjectName(QString::fromUtf8("InsertCustomer"));

        gridLayout->addWidget(InsertCustomer, 6, 0, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMouseTracking(false);
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        gridLayoutWidget_4 = new QWidget(tab);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(230, 10, 201, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        CustomerIDDelete = new QLineEdit(gridLayoutWidget_4);
        CustomerIDDelete->setObjectName(QString::fromUtf8("CustomerIDDelete"));

        gridLayout_3->addWidget(CustomerIDDelete, 2, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 2, 0, 1, 1);

        DeleteCustomer = new QPushButton(gridLayoutWidget_4);
        DeleteCustomer->setObjectName(QString::fromUtf8("DeleteCustomer"));

        gridLayout_3->addWidget(DeleteCustomer, 4, 0, 1, 2);

        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMouseTracking(false);
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 2);

        gridLayoutWidget_5 = new QWidget(tab);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(450, 10, 211, 191));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        FindGroupID = new QLineEdit(gridLayoutWidget_5);
        FindGroupID->setObjectName(QString::fromUtf8("FindGroupID"));

        gridLayout_5->addWidget(FindGroupID, 6, 1, 1, 1);

        FindSurname = new QLineEdit(gridLayoutWidget_5);
        FindSurname->setObjectName(QString::fromUtf8("FindSurname"));

        gridLayout_5->addWidget(FindSurname, 5, 1, 1, 1);

        FindName = new QLineEdit(gridLayoutWidget_5);
        FindName->setObjectName(QString::fromUtf8("FindName"));

        gridLayout_5->addWidget(FindName, 3, 1, 1, 1);

        FindID = new QLineEdit(gridLayoutWidget_5);
        FindID->setObjectName(QString::fromUtf8("FindID"));

        gridLayout_5->addWidget(FindID, 1, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 6, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 5, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 3, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 1, 0, 1, 1);

        SaveCustomer = new QPushButton(gridLayoutWidget_5);
        SaveCustomer->setObjectName(QString::fromUtf8("SaveCustomer"));

        gridLayout_5->addWidget(SaveCustomer, 7, 0, 1, 2);

        label_21 = new QLabel(gridLayoutWidget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMouseTracking(false);
        label_21->setFrameShape(QFrame::StyledPanel);
        label_21->setFrameShadow(QFrame::Plain);
        label_21->setTextFormat(Qt::AutoText);
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_21, 0, 0, 1, 2);

        FindCustomer = new QPushButton(gridLayoutWidget_5);
        FindCustomer->setObjectName(QString::fromUtf8("FindCustomer"));

        gridLayout_5->addWidget(FindCustomer, 2, 0, 1, 2);

        CustomerTable = new QTableWidget(tab);
        CustomerTable->setObjectName(QString::fromUtf8("CustomerTable"));
        CustomerTable->setGeometry(QRect(10, 211, 651, 221));
        CustomerTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        Tabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        RefreshRoom2 = new QTabWidget(tab_2);
        RefreshRoom2->setObjectName(QString::fromUtf8("RefreshRoom2"));
        RefreshRoom2->setGeometry(QRect(10, 10, 661, 431));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        gridLayoutWidget_7 = new QWidget(tab_8);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(450, 10, 201, 161));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        FindRoomCapacity = new QLineEdit(gridLayoutWidget_7);
        FindRoomCapacity->setObjectName(QString::fromUtf8("FindRoomCapacity"));

        gridLayout_7->addWidget(FindRoomCapacity, 5, 1, 1, 1);

        FindRoomFloor = new QLineEdit(gridLayoutWidget_7);
        FindRoomFloor->setObjectName(QString::fromUtf8("FindRoomFloor"));

        gridLayout_7->addWidget(FindRoomFloor, 3, 1, 1, 1);

        FindRoomNumber = new QLineEdit(gridLayoutWidget_7);
        FindRoomNumber->setObjectName(QString::fromUtf8("FindRoomNumber"));

        gridLayout_7->addWidget(FindRoomNumber, 1, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_7->addWidget(label_22, 5, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_7->addWidget(label_23, 3, 0, 1, 1);

        label_26 = new QLabel(gridLayoutWidget_7);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_7->addWidget(label_26, 1, 0, 1, 1);

        SaveRoom = new QPushButton(gridLayoutWidget_7);
        SaveRoom->setObjectName(QString::fromUtf8("SaveRoom"));

        gridLayout_7->addWidget(SaveRoom, 6, 0, 1, 2);

        label_27 = new QLabel(gridLayoutWidget_7);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFrameShape(QFrame::StyledPanel);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_27, 0, 0, 1, 2);

        pushButton = new QPushButton(gridLayoutWidget_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_7->addWidget(pushButton, 2, 0, 1, 2);

        gridLayoutWidget_6 = new QWidget(tab_8);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(230, 10, 201, 81));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        DeleteRoomNumber = new QLineEdit(gridLayoutWidget_6);
        DeleteRoomNumber->setObjectName(QString::fromUtf8("DeleteRoomNumber"));

        gridLayout_6->addWidget(DeleteRoomNumber, 1, 1, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_6->addWidget(label_24, 1, 0, 1, 1);

        DeleteRoom = new QPushButton(gridLayoutWidget_6);
        DeleteRoom->setObjectName(QString::fromUtf8("DeleteRoom"));

        gridLayout_6->addWidget(DeleteRoom, 3, 0, 1, 2);

        label_25 = new QLabel(gridLayoutWidget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFrameShape(QFrame::StyledPanel);
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_25, 0, 0, 1, 2);

        RoomTable = new QTableWidget(tab_8);
        RoomTable->setObjectName(QString::fromUtf8("RoomTable"));
        RoomTable->setGeometry(QRect(10, 180, 641, 221));
        RoomTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gridLayoutWidget_2 = new QWidget(tab_8);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 201, 129));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        RoomCapacity = new QLineEdit(gridLayoutWidget_2);
        RoomCapacity->setObjectName(QString::fromUtf8("RoomCapacity"));

        gridLayout_2->addWidget(RoomCapacity, 4, 1, 1, 1);

        RoomFloor = new QLineEdit(gridLayoutWidget_2);
        RoomFloor->setObjectName(QString::fromUtf8("RoomFloor"));

        gridLayout_2->addWidget(RoomFloor, 2, 1, 1, 1);

        RoomNumber = new QLineEdit(gridLayoutWidget_2);
        RoomNumber->setObjectName(QString::fromUtf8("RoomNumber"));

        gridLayout_2->addWidget(RoomNumber, 1, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        InsertRoom = new QPushButton(gridLayoutWidget_2);
        InsertRoom->setObjectName(QString::fromUtf8("InsertRoom"));

        gridLayout_2->addWidget(InsertRoom, 5, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        RefreshRoom2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        gridLayoutWidget_13 = new QWidget(tab_9);
        gridLayoutWidget_13->setObjectName(QString::fromUtf8("gridLayoutWidget_13"));
        gridLayoutWidget_13->setGeometry(QRect(10, 10, 268, 25));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_13);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(gridLayoutWidget_13);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_11->addWidget(label_33, 0, 0, 1, 1);

        MassiveRoomTableNum = new QLineEdit(gridLayoutWidget_13);
        MassiveRoomTableNum->setObjectName(QString::fromUtf8("MassiveRoomTableNum"));

        gridLayout_11->addWidget(MassiveRoomTableNum, 0, 1, 1, 1);

        CreateMassiveRoomTable = new QPushButton(gridLayoutWidget_13);
        CreateMassiveRoomTable->setObjectName(QString::fromUtf8("CreateMassiveRoomTable"));

        gridLayout_11->addWidget(CreateMassiveRoomTable, 0, 2, 1, 1);

        MassiveRoomTable = new QTableWidget(tab_9);
        MassiveRoomTable->setObjectName(QString::fromUtf8("MassiveRoomTable"));
        MassiveRoomTable->setGeometry(QRect(10, 40, 641, 331));
        CreateMassiveRoom = new QPushButton(tab_9);
        CreateMassiveRoom->setObjectName(QString::fromUtf8("CreateMassiveRoom"));
        CreateMassiveRoom->setEnabled(false);
        CreateMassiveRoom->setGeometry(QRect(520, 380, 131, 23));
        RefreshRoom2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        MassiveRoomEditTable = new QTableWidget(tab_10);
        MassiveRoomEditTable->setObjectName(QString::fromUtf8("MassiveRoomEditTable"));
        MassiveRoomEditTable->setGeometry(QRect(10, 40, 641, 331));
        MassiveRoomEditSave = new QPushButton(tab_10);
        MassiveRoomEditSave->setObjectName(QString::fromUtf8("MassiveRoomEditSave"));
        MassiveRoomEditSave->setGeometry(QRect(500, 380, 151, 23));
        RefreshRoom = new QPushButton(tab_10);
        RefreshRoom->setObjectName(QString::fromUtf8("RefreshRoom"));
        RefreshRoom->setGeometry(QRect(10, 10, 161, 23));
        RefreshRoom2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QString::fromUtf8("tab_11"));
        DeleteAllRooms = new QPushButton(tab_11);
        DeleteAllRooms->setObjectName(QString::fromUtf8("DeleteAllRooms"));
        DeleteAllRooms->setGeometry(QRect(480, 380, 171, 23));
        MassiveRoomDeleteTable = new QTableWidget(tab_11);
        MassiveRoomDeleteTable->setObjectName(QString::fromUtf8("MassiveRoomDeleteTable"));
        MassiveRoomDeleteTable->setGeometry(QRect(10, 40, 641, 331));
        Re = new QPushButton(tab_11);
        Re->setObjectName(QString::fromUtf8("Re"));
        Re->setGeometry(QRect(10, 10, 161, 23));
        RefreshRoom2->addTab(tab_11, QString());
        Tabs->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(Exit);
        menu_2->addAction(CleanTab);
        menu_2->addAction(Clean);
        menu_3->addAction(Help);
        menu_3->addSeparator();
        menu_3->addAction(About);

        retranslateUi(MainWindow);

        Tabs->setCurrentIndex(0);
        Tabs2->setCurrentIndex(0);
        RefreshRoom2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Reception", 0, QApplication::UnicodeUTF8));
        Exit->setText(QApplication::translate("MainWindow", "\316\210\316\276\316\277\316\264\316\277\317\202", 0, QApplication::UnicodeUTF8));
        Clean->setText(QApplication::translate("MainWindow", "\316\232\316\261\316\270\316\261\317\201\316\271\317\203\316\274\317\214\317\202 \316\214\316\273\317\211\316\275", 0, QApplication::UnicodeUTF8));
        Cut->setText(QApplication::translate("MainWindow", "\316\221\317\200\316\277\316\272\316\277\317\200\316\256", 0, QApplication::UnicodeUTF8));
        Paste->setText(QApplication::translate("MainWindow", "\316\225\317\200\316\271\316\272\317\214\316\273\316\273\316\267\317\203\316\267", 0, QApplication::UnicodeUTF8));
        Help->setText(QApplication::translate("MainWindow", "\316\222\316\277\316\256\316\270\316\265\316\271\316\261 \316\263\316\271\316\261 \317\204\316\277 Hotel Manager", 0, QApplication::UnicodeUTF8));
        About->setText(QApplication::translate("MainWindow", "\316\243\317\207\316\265\317\204\316\271\316\272\316\254 \316\274\316\265 \317\204\316\277 Hotel Manager", 0, QApplication::UnicodeUTF8));
        CleanTab->setText(QApplication::translate("MainWindow", "\316\232\316\261\316\270\316\261\317\201\316\271\317\203\316\274\317\214\317\202 \316\232\316\261\317\201\317\204\316\255\316\273\316\261\317\202", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "ID \316\240\316\265\316\273\316\254\317\204\316\267:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "\316\227\316\274\316\265\317\201\316\277\316\274\316\267\316\275\316\257\316\261 Check Out:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "\316\227\316\274\316\265\317\201\316\277\316\274\316\267\316\275\316\257\316\261 Check In:", 0, QApplication::UnicodeUTF8));
        NewReservation->setText(QApplication::translate("MainWindow", "\316\235\316\255\316\261 \316\232\317\201\316\254\317\204\316\267\317\203\316\267", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\316\235\316\255\316\261 \316\232\317\201\316\254\317\204\316\267\317\203\316\267", 0, QApplication::UnicodeUTF8));
        Tabs2->setTabText(Tabs2->indexOf(tab_4), QApplication::translate("MainWindow", "\316\224\317\211\316\274\316\254\317\204\316\271\316\261", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "\316\232\317\201\316\265\316\262\316\254\317\204\316\271\316\261:", 0, QApplication::UnicodeUTF8));
        FindRooms->setText(QApplication::translate("MainWindow", "\316\221\316\275\316\261\316\266\316\256\317\204\316\267\317\203\316\267", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "\316\214\317\201\316\277\317\206\316\277\317\202:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "\316\225\316\273\316\265\317\215\316\270\316\265\317\201\316\277:", 0, QApplication::UnicodeUTF8));
        FreeRoomYes->setText(QApplication::translate("MainWindow", "\316\235\316\261\316\257", 0, QApplication::UnicodeUTF8));
        FreeRoomNo->setText(QApplication::translate("MainWindow", "\316\214\317\207\316\271", 0, QApplication::UnicodeUTF8));
        FreeRoomWhatEver->setText(QApplication::translate("MainWindow", "\316\221\316\264\316\271\316\254\317\206\316\277\317\201\316\277", 0, QApplication::UnicodeUTF8));
        Tabs2->setTabText(Tabs2->indexOf(tab_5), QApplication::translate("MainWindow", "\316\225\317\215\317\201\316\265\317\203\316\267 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "\316\243\317\204\316\277\316\271\317\207\316\265\316\257\316\261 \316\263\316\271\316\261 \316\261\316\275\316\261\316\266\316\256\317\204\316\267\317\203\316\267:", 0, QApplication::UnicodeUTF8));
        Tabs2->setTabText(Tabs2->indexOf(tab_6), QApplication::translate("MainWindow", "\316\225\317\215\317\201\316\265\317\203\316\267 \316\240\316\265\316\273\316\261\317\204\317\216\316\275", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\316\243\317\204\316\277\316\271\317\207\316\265\316\257\316\261 \316\264\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202:", 0, QApplication::UnicodeUTF8));
        PopNum->setText(QString());
        label_34->setText(QApplication::translate("MainWindow", "\316\214\317\201\316\277\317\206\316\277\317\202:", 0, QApplication::UnicodeUTF8));
        PopFloor->setText(QString());
        label_36->setText(QApplication::translate("MainWindow", "\316\247\317\211\317\201\316\267\317\204\316\271\316\272\317\214\317\204\316\267\317\204\316\261:", 0, QApplication::UnicodeUTF8));
        PopCap->setText(QString());
        Tabs->setTabText(Tabs->indexOf(tab_3), QApplication::translate("MainWindow", "\316\235\316\255\316\261 \316\232\317\201\316\254\317\204\316\267\317\203\316\267", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindow", "CheckOut", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "\316\224\317\211\316\274\316\254\317\204\316\271\316\277:", 0, QApplication::UnicodeUTF8));
        CheckOut->setText(QApplication::translate("MainWindow", "CheckOut", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(tab_7), QApplication::translate("MainWindow", "CheckOut", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Group ID:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\316\225\317\200\317\216\316\275\317\205\316\274\316\277:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\316\214\316\275\316\277\316\274\316\261:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        InsertCustomer->setText(QApplication::translate("MainWindow", "\316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\243\317\204\316\277\316\271\317\207\316\265\316\257\317\211\316\275 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        DeleteCustomer->setText(QApplication::translate("MainWindow", "\316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Group ID:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\316\225\317\200\317\216\316\275\317\205\316\274\316\277:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "\316\214\316\275\316\277\316\274\316\261:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "ID:", 0, QApplication::UnicodeUTF8));
        SaveCustomer->setText(QApplication::translate("MainWindow", "\316\221\316\273\316\273\316\261\316\263\316\256 \316\243\317\204\316\277\316\271\317\207\316\265\316\257\317\211\316\275 \316\272\316\261\316\271 \316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "\316\225\317\200\316\265\316\276\316\265\317\201\316\263\316\261\317\203\316\257\316\261 \316\243\317\204\316\277\316\271\317\207\316\265\316\257\317\211\316\275 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        FindCustomer->setText(QApplication::translate("MainWindow", "\316\225\317\215\317\201\316\265\317\203\316\267 \316\240\316\265\316\273\316\254\317\204\316\267", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(tab), QApplication::translate("MainWindow", "\316\224\316\271\316\261\317\207\316\265\316\257\317\201\316\271\317\203\316\267 \316\240\316\265\316\273\316\261\317\204\317\216\316\275", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "\316\247\317\211\317\201\316\267\317\204\316\271\316\272\317\214\317\204\316\267\317\204\316\261:", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "\316\214\317\201\316\277\317\206\316\277\317\202:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202:", 0, QApplication::UnicodeUTF8));
        SaveRoom->setText(QApplication::translate("MainWindow", "\316\221\316\273\316\273\316\261\316\263\316\256 \316\243\317\204\316\277\316\271\317\207\316\265\316\257\317\211\316\275 \316\272\316\261\316\271 \316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "\316\225\317\200\316\265\316\276\316\265\317\201\316\263\316\261\317\203\316\257\316\261 \316\243\317\204\316\277\316\271\317\207\316\265\316\257\317\211\316\275 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\316\225\317\215\317\201\316\265\317\203\316\267 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202:", 0, QApplication::UnicodeUTF8));
        DeleteRoom->setText(QApplication::translate("MainWindow", "\316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "\316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\316\247\317\211\317\201\316\267\317\204\316\271\316\272\317\214\317\204\316\267\317\204\316\261:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\316\214\317\201\316\277\317\206\316\277\317\202:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\316\221\317\201\316\271\316\270\316\274\317\214\317\202:", 0, QApplication::UnicodeUTF8));
        InsertRoom->setText(QApplication::translate("MainWindow", "\316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\316\277\317\205", 0, QApplication::UnicodeUTF8));
        RefreshRoom2->setTabText(RefreshRoom2->indexOf(tab_8), QApplication::translate("MainWindow", "\316\224\316\271\316\261\317\207\316\265\316\257\317\201\316\271\317\203\316\267 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "\316\240\317\214\317\203\316\261 \316\264\317\211\316\274\316\254\317\204\316\271\316\261 \316\270\316\261 \316\265\316\271\317\203\316\254\316\263\316\265\317\204\316\265;", 0, QApplication::UnicodeUTF8));
        CreateMassiveRoomTable->setText(QApplication::translate("MainWindow", "\316\224\316\267\316\274\316\271\316\277\317\205\317\201\316\263\316\257\316\261", 0, QApplication::UnicodeUTF8));
        CreateMassiveRoom->setText(QApplication::translate("MainWindow", "\316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\264\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        RefreshRoom2->setTabText(RefreshRoom2->indexOf(tab_9), QApplication::translate("MainWindow", "\316\234\316\261\316\266\316\271\316\272\316\256 \316\225\316\271\317\203\316\261\316\263\317\211\316\263\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        MassiveRoomEditSave->setText(QApplication::translate("MainWindow", "\316\221\317\200\316\277\316\270\316\256\316\272\316\265\317\205\317\203\316\267 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        RefreshRoom->setText(QApplication::translate("MainWindow", "\316\221\316\275\316\261\316\275\316\255\317\211\317\203\316\267 \316\233\316\257\317\203\317\204\316\261\317\202 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275 ", 0, QApplication::UnicodeUTF8));
        RefreshRoom2->setTabText(RefreshRoom2->indexOf(tab_10), QApplication::translate("MainWindow", "\316\234\316\261\316\266\316\271\316\272\316\256 \316\225\317\200\316\265\316\276\316\265\317\201\316\263\316\261\317\203\316\257\316\261 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        DeleteAllRooms->setText(QApplication::translate("MainWindow", "\316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\237\316\273\317\211\316\275 \317\204\317\211\316\275 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        Re->setText(QApplication::translate("MainWindow", "\316\221\316\275\316\261\316\275\316\255\317\211\317\203\316\267 \316\233\316\257\317\203\317\204\316\261\317\202 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275 ", 0, QApplication::UnicodeUTF8));
        RefreshRoom2->setTabText(RefreshRoom2->indexOf(tab_11), QApplication::translate("MainWindow", "\316\234\316\261\316\266\316\271\316\272\316\256 \316\224\316\271\316\261\316\263\317\201\316\261\317\206\316\256 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        Tabs->setTabText(Tabs->indexOf(tab_2), QApplication::translate("MainWindow", "\316\224\316\271\316\261\317\207\316\265\316\257\317\201\316\271\317\203\316\267 \316\224\317\211\316\274\316\261\317\204\316\257\317\211\316\275", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\316\221\317\201\317\207\316\265\316\257\316\277", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\316\225\317\200\316\265\316\276\316\265\317\201\316\263\316\261\317\203\316\257\316\261", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\316\222\316\277\316\256\316\270\316\265\316\271\316\261", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
