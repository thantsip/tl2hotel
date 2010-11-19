/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 18. Nov 22:55:09 2010
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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *view;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *delEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *insertButton;
    QPushButton *deleteButton;
    QPushButton *quitButton;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *aemEdit;
    QLineEdit *nameEdit;
    QLineEdit *surnameEdit;
    QLabel *delLabel;
    QPushButton *delcheckButton;
    QPushButton *cancelButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(503, 349);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        view = new QTableView(centralWidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setGeometry(QRect(20, 20, 461, 161));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 210, 21, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 230, 27, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 260, 42, 16));
        delEdit = new QLineEdit(centralWidget);
        delEdit->setObjectName(QString::fromUtf8("delEdit"));
        delEdit->setEnabled(true);
        delEdit->setGeometry(QRect(370, 220, 91, 20));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 190, 77, 112));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        insertButton = new QPushButton(layoutWidget);
        insertButton->setObjectName(QString::fromUtf8("insertButton"));

        verticalLayout->addWidget(insertButton);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        verticalLayout->addWidget(quitButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(100, 200, 135, 74));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        aemEdit = new QLineEdit(layoutWidget1);
        aemEdit->setObjectName(QString::fromUtf8("aemEdit"));

        verticalLayout_3->addWidget(aemEdit);

        nameEdit = new QLineEdit(layoutWidget1);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout_3->addWidget(nameEdit);

        surnameEdit = new QLineEdit(layoutWidget1);
        surnameEdit->setObjectName(QString::fromUtf8("surnameEdit"));

        verticalLayout_3->addWidget(surnameEdit);

        delLabel = new QLabel(centralWidget);
        delLabel->setObjectName(QString::fromUtf8("delLabel"));
        delLabel->setGeometry(QRect(390, 200, 51, 16));
        delcheckButton = new QPushButton(centralWidget);
        delcheckButton->setObjectName(QString::fromUtf8("delcheckButton"));
        delcheckButton->setGeometry(QRect(370, 250, 41, 23));
        cancelButton = new QPushButton(centralWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(420, 250, 41, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 503, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "AEM", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Surname", 0, QApplication::UnicodeUTF8));
        insertButton->setText(QApplication::translate("MainWindow", "Insert", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        delLabel->setText(QApplication::translate("MainWindow", "Enter AEM", 0, QApplication::UnicodeUTF8));
        delcheckButton->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("MainWindow", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
