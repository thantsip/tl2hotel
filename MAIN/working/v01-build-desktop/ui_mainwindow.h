/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 26. Nov 01:29:26 2010
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *CNameEdit;
    QLineEdit *CSurnameEdit;
    QLineEdit *CIDEdit;
    QLabel *CIDLabel;
    QLabel *CNameLabel;
    QLabel *CSurnameLabel;
    QPushButton *InsertCustomerButton;
    QPushButton *InsertRoomButton;
    QLabel *RIDLabel;
    QLabel *RNumLabel;
    QLabel *RFlLabel;
    QLineEdit *RIDEdit;
    QLineEdit *RNumEdit;
    QLineEdit *RFlEdit;
    QLabel *RCapLabel;
    QLineEdit *RCapEdit;
    QLineEdit *ResRIDEdit;
    QLineEdit *ResCIDEdit;
    QDateEdit *DateFrom;
    QDateEdit *DateTo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *InsertReservation;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(606, 376);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        CNameEdit = new QLineEdit(centralWidget);
        CNameEdit->setObjectName(QString::fromUtf8("CNameEdit"));
        CNameEdit->setGeometry(QRect(160, 50, 113, 20));
        CSurnameEdit = new QLineEdit(centralWidget);
        CSurnameEdit->setObjectName(QString::fromUtf8("CSurnameEdit"));
        CSurnameEdit->setGeometry(QRect(160, 90, 113, 20));
        CIDEdit = new QLineEdit(centralWidget);
        CIDEdit->setObjectName(QString::fromUtf8("CIDEdit"));
        CIDEdit->setGeometry(QRect(160, 10, 113, 20));
        CIDLabel = new QLabel(centralWidget);
        CIDLabel->setObjectName(QString::fromUtf8("CIDLabel"));
        CIDLabel->setGeometry(QRect(50, 10, 60, 13));
        CNameLabel = new QLabel(centralWidget);
        CNameLabel->setObjectName(QString::fromUtf8("CNameLabel"));
        CNameLabel->setGeometry(QRect(50, 50, 76, 13));
        CSurnameLabel = new QLabel(centralWidget);
        CSurnameLabel->setObjectName(QString::fromUtf8("CSurnameLabel"));
        CSurnameLabel->setGeometry(QRect(50, 90, 91, 13));
        InsertCustomerButton = new QPushButton(centralWidget);
        InsertCustomerButton->setObjectName(QString::fromUtf8("InsertCustomerButton"));
        InsertCustomerButton->setGeometry(QRect(100, 140, 101, 23));
        InsertRoomButton = new QPushButton(centralWidget);
        InsertRoomButton->setObjectName(QString::fromUtf8("InsertRoomButton"));
        InsertRoomButton->setGeometry(QRect(410, 170, 75, 23));
        RIDLabel = new QLabel(centralWidget);
        RIDLabel->setObjectName(QString::fromUtf8("RIDLabel"));
        RIDLabel->setGeometry(QRect(360, 10, 41, 13));
        RNumLabel = new QLabel(centralWidget);
        RNumLabel->setObjectName(QString::fromUtf8("RNumLabel"));
        RNumLabel->setGeometry(QRect(360, 50, 67, 13));
        RFlLabel = new QLabel(centralWidget);
        RFlLabel->setObjectName(QString::fromUtf8("RFlLabel"));
        RFlLabel->setGeometry(QRect(360, 90, 54, 13));
        RIDEdit = new QLineEdit(centralWidget);
        RIDEdit->setObjectName(QString::fromUtf8("RIDEdit"));
        RIDEdit->setGeometry(QRect(450, 10, 113, 20));
        RNumEdit = new QLineEdit(centralWidget);
        RNumEdit->setObjectName(QString::fromUtf8("RNumEdit"));
        RNumEdit->setGeometry(QRect(450, 50, 113, 20));
        RFlEdit = new QLineEdit(centralWidget);
        RFlEdit->setObjectName(QString::fromUtf8("RFlEdit"));
        RFlEdit->setGeometry(QRect(450, 90, 113, 20));
        RCapLabel = new QLabel(centralWidget);
        RCapLabel->setObjectName(QString::fromUtf8("RCapLabel"));
        RCapLabel->setGeometry(QRect(360, 130, 72, 13));
        RCapEdit = new QLineEdit(centralWidget);
        RCapEdit->setObjectName(QString::fromUtf8("RCapEdit"));
        RCapEdit->setGeometry(QRect(450, 130, 113, 20));
        ResRIDEdit = new QLineEdit(centralWidget);
        ResRIDEdit->setObjectName(QString::fromUtf8("ResRIDEdit"));
        ResRIDEdit->setGeometry(QRect(310, 277, 113, 20));
        ResCIDEdit = new QLineEdit(centralWidget);
        ResCIDEdit->setObjectName(QString::fromUtf8("ResCIDEdit"));
        ResCIDEdit->setGeometry(QRect(440, 277, 113, 20));
        DateFrom = new QDateEdit(centralWidget);
        DateFrom->setObjectName(QString::fromUtf8("DateFrom"));
        DateFrom->setGeometry(QRect(70, 277, 110, 22));
        DateFrom->setCalendarPopup(true);
        DateTo = new QDateEdit(centralWidget);
        DateTo->setObjectName(QString::fromUtf8("DateTo"));
        DateTo->setGeometry(QRect(190, 277, 110, 22));
        DateTo->setCalendarPopup(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 257, 50, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 257, 37, 13));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 257, 40, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(460, 250, 59, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 210, 177, 25));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        InsertReservation = new QPushButton(centralWidget);
        InsertReservation->setObjectName(QString::fromUtf8("InsertReservation"));
        InsertReservation->setGeometry(QRect(260, 310, 98, 23));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        CIDLabel->setText(QApplication::translate("MainWindow", "Customer ID", 0, QApplication::UnicodeUTF8));
        CNameLabel->setText(QApplication::translate("MainWindow", "Customer Name", 0, QApplication::UnicodeUTF8));
        CSurnameLabel->setText(QApplication::translate("MainWindow", "Customer Surname", 0, QApplication::UnicodeUTF8));
        InsertCustomerButton->setText(QApplication::translate("MainWindow", "Insert Customer", 0, QApplication::UnicodeUTF8));
        InsertRoomButton->setText(QApplication::translate("MainWindow", "Insert Room", 0, QApplication::UnicodeUTF8));
        RIDLabel->setText(QApplication::translate("MainWindow", "Room ID", 0, QApplication::UnicodeUTF8));
        RNumLabel->setText(QApplication::translate("MainWindow", "Room Number", 0, QApplication::UnicodeUTF8));
        RFlLabel->setText(QApplication::translate("MainWindow", "Room Floor", 0, QApplication::UnicodeUTF8));
        RCapLabel->setText(QApplication::translate("MainWindow", "Room Capacity", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Date From", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Date To", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Room Id", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Customer Id", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "New Reservation : ", 0, QApplication::UnicodeUTF8));
        InsertReservation->setText(QApplication::translate("MainWindow", "Insert Reservation", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
