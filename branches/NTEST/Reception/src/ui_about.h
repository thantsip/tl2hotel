/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Tue 28. Dec 18:53:26 2010
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_26;
    QLabel *label_27;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_24;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_22;
    QLabel *label_25;
    QLabel *label_18;
    QLabel *label_20;
    QLabel *label_19;
    QWidget *tab_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(628, 421);
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 141, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        tabWidget = new QTabWidget(About);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 611, 341));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 10, 351, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_26->setFont(font1);
        label_27 = new QLabel(tab);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 30, 351, 16));
        label_27->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 433, 300));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 2, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout->addWidget(label_14, 7, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 4, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 4, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout->addWidget(label_16, 5, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 2, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 7, 2, 1, 1);

        label_24 = new QLabel(gridLayoutWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout->addWidget(label_24, 11, 0, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 10, 0, 1, 1);

        label_23 = new QLabel(gridLayoutWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout->addWidget(label_23, 9, 0, 1, 1);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout->addWidget(label_22, 8, 0, 1, 1);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout->addWidget(label_25, 8, 2, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 9, 2, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 10, 2, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 11, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit = new QTextEdit(tab_3);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 591, 301));
        textEdit->setReadOnly(true);
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(540, 390, 75, 23));

        retranslateUi(About);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("About", "Reception 0.2 ", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("About", "To Reception \316\265\316\257\316\275\316\261\316\271 \316\274\316\271\316\261 \316\265\316\273\316\265\317\215\316\270\316\265\317\201\316\267 \316\265\317\206\316\261\317\201\316\274\316\277\316\263\316\256", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("About", "\316\264\316\271\316\261\317\207\316\265\316\257\317\201\316\271\317\203\316\267\317\202 \316\276\316\265\316\275\316\277\316\264\316\277\317\207\316\265\316\257\317\211\316\275. ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("About", " \316\243\317\207\316\265\317\204\316\271\316\272\316\254 \316\274\316\265 \317\204\316\277 Hotel Manager", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("About", "Analyser", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("About", "\316\223\316\265\317\211\317\201\316\263\316\277\316\274\316\256\317\204\317\201\316\277\317\202 \316\232\317\211\316\275/\316\275\316\277\317\202", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("About", "Tester - Analyser ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("About", "\316\224\316\265\316\273\316\256\317\202 \316\235\316\271\316\272\317\214\316\273\316\261\316\277\317\202 ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("About", "\316\223\316\265\317\211\317\201\316\263\316\277\317\205\316\264\316\254\316\272\316\267\317\202 \316\223\316\271\316\254\316\275\316\275\316\267\317\202 ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("About", "Architect", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("About", "Configuration Manager ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("About", "\316\234\316\267\317\204\317\201\316\254\316\271 \316\224\316\267\316\274\316\256\317\204\317\201\316\267\317\202 ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("About", "\316\234\316\261\317\201\316\257\316\261\317\202 \316\243\317\204\316\255\317\201\316\263\316\271\316\277\317\202 ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("About", "\316\231\316\277\317\201\316\264\316\261\316\275\316\257\316\264\316\267\317\202 \316\221\316\273\316\255\316\276\316\261\316\275\316\264\317\201\316\277\317\202", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("About", "\316\226\316\261\317\207\316\261\317\201\317\214\317\200\316\277\317\205\316\273\316\277\317\202 \316\230\316\265\316\277\316\273\317\214\316\263\316\277\317\202", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("About", "\316\221\317\201\316\261\317\200\316\261\317\204\316\266\316\256 \316\247\317\201\317\205\317\203\316\277\317\215\316\273\316\261", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("About", "Leader", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("About", "Developer", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("About", "Configuration Manager Assistant - Developer - GUI Developer", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("About", "Developer", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("About", "\316\247\316\261\317\204\316\266\316\267\316\272\317\205\317\201\316\271\316\261\316\272\316\257\316\264\316\267\317\202 \316\225\317\205\317\203\317\204\316\254\316\270\316\271\316\277\317\202", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("About", "\316\244\316\277\317\200\316\261\316\273\316\257\316\264\316\277\317\205 \316\240\316\261\317\205\316\273\316\257\316\275\316\261", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("About", "\316\243\317\211\317\206\317\201\316\277\316\275\316\254\317\202 \316\225\317\205\316\254\316\263\316\263\316\265\316\273\316\277\317\202  ", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("About", "\316\234\317\200\316\261\317\201\316\266\317\214\316\272\316\261\317\202 \316\222\316\261\317\203\316\257\316\273\316\267\317\202 ", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("About", "System Administrator ", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("About", "Developer", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("About", "Developer", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("About", "Tester", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("About", "\316\243\317\205\316\263\316\263\317\201\316\261\317\206\316\265\316\257\317\202", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">                    GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">                       Version 3, 29 June 2007</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-f"
                        "amily:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"> Copyright (C) 2007 Free Software Foundation, Inc. &lt;http://fsf.org/&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"> Everyone is permitted to copy and distribute verbatim copies</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"> of this license document, but changing it is not allowed.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px"
                        "; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">                            Preamble</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The GNU General Public License is a free, copyleft license for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cou"
                        "rier New,courier'; font-size:8pt; color:#000000;\">software and other kinds of works.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The licenses for most software and other practical works are designed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to take away your freedom to share and change the works.  By contrast,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><spa"
                        "n style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the GNU General Public License is intended to guarantee your freedom to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">share and change all versions of a program--to make sure it remains free</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">software for all its users.  We, the Free Software Foundation, use the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">GNU General Public License for most of our software; it applies also to</span"
                        "></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">any other work released this way by its authors.  You can apply it to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">your programs, too.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  When we speak of free software, we are referring to freedom, not"
                        "</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">price.  Our General Public Licenses are designed to make sure that you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">have the freedom to distribute copies of free software (and charge for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">them if you wish), that you receive source code or can get it if you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fam"
                        "ily:'Courier New,courier'; font-size:8pt; color:#000000;\">want it, that you can change the software or use pieces of it in new</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">free programs, and that you know you can do these things.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  To protect your rights, we need to prevent others from denying you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">these rights or asking you to surrender the rights.  Therefore, you have</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">certain responsibilities if you distribute copies of the software, or if</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">you modify it: responsibilities to respect the freedom of others.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  For example, if you distribute copies of such a program, whether</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">gratis or for a fee, you must pass on to the recipients the same</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">freedoms that you received.  You must make sure that they, too, receive</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">or"
                        " can get the source code.  And you must show them these terms so they</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">know their rights.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Developers that use the GNU GPL protect your rights with two steps:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#00"
                        "0000;\">(1) assert copyright on the software, and (2) offer you this License</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">giving you legal permission to copy, distribute and/or modify it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  For the developers' and authors' protection, the GPL clearly explains</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fon"
                        "t-family:'Courier New,courier'; font-size:8pt; color:#000000;\">that there is no warranty for this free software.  For both users' and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">authors' sake, the GPL requires that modified versions be marked as</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">changed, so that their problems will not be attributed erroneously to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">authors of previous versions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Some devices are designed to deny users access to install or run</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modified versions of the software inside them, although the manufacturer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">can do so.  This is fundamentally incompatible with the aim of</span></p>\n"
"<"
                        "p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">protecting users' freedom to change the software.  The systematic</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">pattern of such abuse occurs in the area of products for individuals to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">use, which is precisely where it is most unacceptable.  Therefore, we</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,cou"
                        "rier'; font-size:8pt; color:#000000;\">have designed this version of the GPL to prohibit the practice for those</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">products.  If such problems arise substantially in other domains, we</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">stand ready to extend this provision to those domains in future versions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">of the GPL, as needed to protect the freedom of users.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Finally, every program is threatened constantly by software patents.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">States should not allow patents to restrict development and use of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">software on general-purpose computers, but in those that do, we wish to</sp"
                        "an></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">avoid the special danger that patents applied to a free program could</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">make it effectively proprietary.  To prevent this, the GPL assures that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patents cannot be used to render the program non-free.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Couri"
                        "er New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The precise terms and conditions for copying, distribution and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modification follow.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">                      "
                        " TERMS AND CONDITIONS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  0. Definitions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  &quot;This License&quot; refers to version 3 of the GNU General Public License.</span></p>\n"
"<p style=\"-"
                        "qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  &quot;Copyright&quot; also means copyright-like laws that apply to other kinds of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">works, such as semiconductor masks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  &quot;The Program&quot; refers to any copyrightable work licensed under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License.  Each licensee is addressed as &quot;you&quot;.  &quot;Licensees&quot; and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">&quot;recipients&quot; may be individuals or organizations.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:"
                        "8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  To &quot;modify&quot; a work means to copy from or adapt all or part of the work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in a fashion requiring copyright permission, other than the making of an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">exact copy.  The resulting work is called a &quot;modified version&quot; of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">earlier work or a work &quot;based on&quot; the earlier work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A &quot;covered work&quot; means either the unmodified Program or a work based</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">on the Program.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  To &quot;propagate&quot; a work means to do anything with it that, without</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">permission, would make you directly or secondarily liable for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">infringement under applicable copyright law, except executing it on a</span></p>\n"
"<p style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">computer or modifying a private copy.  Propagation includes copying,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">distribution (with or without modification), making available to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">public, and in some countries other activities as well.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>"
                        "\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  To &quot;convey&quot; a work means any kind of propagation that enables other</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">parties to make or receive copies.  Mere interaction with a user through</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">a computer network, with no transfer of a copy, is not conveying.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; fon"
                        "t-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  An interactive user interface displays &quot;Appropriate Legal Notices&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to the extent that it includes a convenient and prominently visible</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">feature that (1) displays an appropriate copyright notice, and (2)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">tells the user that there is no warranty for the work (except to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">extent that warranties are provided), that licensees may convey the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work under this License, and how to view a copy of this License.  If</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the interface presents a list of user commands"
                        " or options, such as a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">menu, a prominent item in the list meets this criterion.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  1. Source Code.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-b"
                        "ottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The &quot;source code&quot; for a work means the preferred form of the work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for making modifications to it.  &quot;Object code&quot; means any non-source</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">form of a work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" mar"
                        "gin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A &quot;Standard Interface&quot; means an interface that either is an official</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">standard defined by a recognized standards body, or, in the case of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">interfaces specified for a particular programming language, one that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier"
                        "'; font-size:8pt; color:#000000;\">is widely used among developers working in that language.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The &quot;System Libraries&quot; of an executable work include anything, other</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">than the work as a whole, that (a) is included in the normal form of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">packaging a Major Component, but which is not part of that Major</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Component, and (b) serves only to enable use of the work with that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Major Component, or to implement a Standard Interface for which an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">implementation is available to the public in source code form.  A</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">&quot;Major Component&quot;, in this context, means a major essential component</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">(kernel, window system, and so on) of the specific operating system</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">(if any) on which the executable work runs, or a compiler used to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier "
                        "New,courier'; font-size:8pt; color:#000000;\">produce the work, or an object code interpreter used to run it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The &quot;Corresponding Source&quot; for a work in object code form means all</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the source code needed to generate, install, and (for an executable</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work) run the object code and to modify the work, including scripts to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">control those activities.  However, it does not include the work's</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">System Libraries, or general-purpose tools or generally available free</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">programs which are used unmodified in performing those "
                        "activities but</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">which are not part of the work.  For example, Corresponding Source</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">includes interface definition files associated with source files for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the work, and the source code for shared libraries and dynamically</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" fo"
                        "nt-family:'Courier New,courier'; font-size:8pt; color:#000000;\">linked subprograms that the work is specifically designed to require,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">such as by intimate data communication or control flow between those</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">subprograms and other parts of the work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The Corresponding Source need not include anything that users</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">can regenerate automatically from other parts of the Corresponding</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Source.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The Corresponding Source for a work in source code form is that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">same work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  2. Basic Permissions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,co"
                        "urier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  All rights granted under this License are granted for the term of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">copyright on the Program, and are irrevocable provided the stated</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">conditions are met.  This License explicitly affirms your unlimited</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">permission to run the unmodified Program.  The output from running a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">covered work is covered by this License only if the output, given its</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">content, constitutes a covered work.  This License acknowledges your</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">rights of fair use or other equivalent, as provided by copyright law.</span></p>"
                        "\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may make, run and propagate covered works that you do not</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">convey, without conditions so long as your license otherwise remains</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in force.  You may convey co"
                        "vered works to others for the sole purpose</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">of having them make modifications exclusively for you, or provide you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">with facilities for running those works, provided that you comply with</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the terms of this License in conveying all material for which you do</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; t"
                        "ext-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">not control copyright.  Those thus making or running the covered works</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for you must do so exclusively on your behalf, under your direction</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">and control, on terms that prohibit them from making any copies of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">your copyrighted material outside their relationship with you.</s"
                        "pan></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Conveying under any other circumstances is permitted solely under</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the conditions stated below.  Sublicensing is not allowed; section 10</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">makes it unnece"
                        "ssary.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  3. Protecting Users' Legal Rights From Anti-Circumvention Law.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  No covered work shall be deemed part of an effective technological</span></"
                        "p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">measure under any applicable law fulfilling obligations under article</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">11 of the WIPO copyright treaty adopted on 20 December 1996, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">similar laws prohibiting or restricting circumvention of such</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier"
                        "'; font-size:8pt; color:#000000;\">measures.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  When you convey a covered work, you waive any legal power to forbid</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">circumvention of technological measures to the extent such circumvention</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,couri"
                        "er'; font-size:8pt; color:#000000;\">is effected by exercising rights under this License with respect to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the covered work, and you disclaim any intention to limit operation or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modification of the work as a means of enforcing, against the work's</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">users, your or third parties' legal rights to forbid circumvention of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">technological measures.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  4. Conveying Verbatim Copies.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may convey verbatim copies of the Program's source code as you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">receive it, in any medium, provided that you conspicuously and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">appropriately publish on each copy an appropriate copyright notice;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">keep intact all notices stating that this License and any</span></p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">non-permissive terms added in accord with section 7 apply to the code;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">keep intact all notices of the absence of any warranty; and give all</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">recipients a copy of this License along with the Program.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#00"
                        "0000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may charge any price or no price for each copy that you convey,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">and you may offer support or warranty protection for a fee.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  5. Conveying Modi"
                        "fied Source Versions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may convey a work based on the Program, or the modifications to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">produce it from the Program, in the form of source code under the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000"
                        "000;\">terms of section 4, provided that you also meet all of these conditions:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    a) The work must carry prominent notices stating that you modified</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    it, and giving a relevant date.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier Ne"
                        "w,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    b) The work must carry prominent notices stating that it is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    released under this License and any conditions added under section</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    7.  This requirement modifies the requirement in section 4 to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    &quot;keep intact all notices&quot;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    c) You must license the entire work, as a whole, under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    License to anyone who comes into possession of a copy.  This</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    License will therefore apply, along with any applicable section 7</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    additional terms, to the whole of the work, and all its parts,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    regardless of how they are packaged.  This License gives no</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    permission to license the work in any other way, but it does "
                        "not</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    invalidate such permission if you have separately received it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    d) If the work has interactive user interfaces, each must display</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Approp"
                        "riate Legal Notices; however, if the Program has interactive</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    interfaces that do not display Appropriate Legal Notices, your</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    work need not make them do so.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color"
                        ":#000000;\">  A compilation of a covered work with other separate and independent</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">works, which are not by their nature extensions of the covered work,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">and which are not combined with it such as to form a larger program,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in or on a volume of a storage or distribution medium, is called an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">&quot;aggregate&quot; if the compilation and its resulting copyright are not</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">used to limit the access or legal rights of the compilation's users</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">beyond what the individual works permit.  Inclusion of a covered work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in an aggregate does "
                        "not cause this License to apply to the other</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">parts of the aggregate.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  6. Conveying Non-Source Forms.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may convey a covered work in object code form under the terms</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">of sections 4 and 5, provided that you also convey the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">machine-readable Corresponding Source under the terms of this License,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in one"
                        " of these ways:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    a) Convey the object code in, or embodied in, a physical product</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    (including a physical distribution medium), accompanied by the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\""
                        ">    Corresponding Source fixed on a durable physical medium</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    customarily used for software interchange.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    b) Convey the object code in, or embodied in, a physical product</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-s"
                        "ize:8pt; color:#000000;\">    (including a physical distribution medium), accompanied by a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    written offer, valid for at least three years and valid for as</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    long as you offer spare parts or customer support for that product</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    model, to give anyone who possesses the object code either (1) a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    copy of the Corresponding Source for all the software in the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    product that is covered by this License, on a durable physical</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    medium customarily used for software interchange, for a price no</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    more than your reason"
                        "able cost of physically performing this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    conveying of source, or (2) access to copy the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Corresponding Source from a network server at no charge.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\""
                        ">    c) Convey individual copies of the object code with a copy of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    written offer to provide the Corresponding Source.  This</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    alternative is allowed only occasionally and noncommercially, and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    only if you received the object code with such an offer, in accord</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    with subsection 6b.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    d) Convey the object code by offering access from a designated</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    place (gratis or for a charge), and offer equivalent access to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Corresponding Source in the same way through the same place at no</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    further charge.  You need not require recipients to copy the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Corresponding Source along with the object code.  If the place to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    copy the object code is a netwo"
                        "rk server, the Corresponding Source</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    may be on a different server (operated by you or a third party)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    that supports equivalent copying facilities, provided you maintain</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    clear directions next to the object code saying where to find the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Corresponding Source.  Regardless of what server hosts the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Corresponding Source, you remain obligated to ensure that it is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    available for as long as needed to satisfy these requirements.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; "
                        "margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    e) Convey the object code using peer-to-peer transmission, provided</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    you inform other peers where the object code and Corresponding</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Source of the work are being offered to the general public at no</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    charge under subsect"
                        "ion 6d.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A separable portion of the object code, whose source code is excluded</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">from the Corresponding Source as a System Library, need not be</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">included"
                        " in conveying the object code work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A &quot;User Product&quot; is either (1) a &quot;consumer product&quot;, which means any</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">tangible personal property which is normally used for personal, family,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courie"
                        "r New,courier'; font-size:8pt; color:#000000;\">or household purposes, or (2) anything designed or sold for incorporation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">into a dwelling.  In determining whether a product is a consumer product,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">doubtful cases shall be resolved in favor of coverage.  For a particular</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">product received by a particular user, &quot;normally used&quot; refers to a</span></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">typical or common use of that class of product, regardless of the status</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">of the particular user or of the way in which the particular user</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">actually uses, or expects or is expected to use, the product.  A product</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';"
                        " font-size:8pt; color:#000000;\">is a consumer product regardless of whether the product has substantial</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">commercial, industrial or non-consumer uses, unless such uses represent</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the only significant mode of use of the product.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  &quot;Installation Information&quot; for a User Product means any methods,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">procedures, authorization keys, or other information required to install</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">and execute modified versions of a covered work in that User Product from</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">a modified version of its Corresponding Source.  The information must</s"
                        "pan></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">suffice to ensure that the continued functioning of the modified object</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">code is in no case prevented or interfered with solely because</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modification has been made.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; c"
                        "olor:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If you convey an object code work under this section in, or with, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">specifically for use in, a User Product, and the conveying occurs as</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">part of a transaction in which the right of possession and use of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" "
                        "font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">User Product is transferred to the recipient in perpetuity or for a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">fixed term (regardless of how the transaction is characterized), the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Corresponding Source conveyed under this section must be accompanied</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">by the Installation Information.  But this requirement does not apply</span></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">if neither you nor any third party retains the ability to install</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modified object code on the User Product (for example, the work has</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">been installed in ROM).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p sty"
                        "le=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The requirement to provide Installation Information does not include a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">requirement to continue to provide support service, warranty, or updates</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for a work that has been modified or installed by the recipient, or for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier Ne"
                        "w,courier'; font-size:8pt; color:#000000;\">the User Product in which it has been modified or installed.  Access to a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">network may be denied when the modification itself materially and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">adversely affects the operation of the network or violates the rules and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">protocols for communication across the network.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Corresponding Source conveyed, and Installation Information provided,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in accord with this section must be in a format that is publicly</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">documented (and with an implementation available to the public in</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">source code form), and must require no special password or key for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">unpacking, reading or copying.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  7. Additional Terms.</span></p>\n"
"<p style=\"-qt-paragraph-type:"
                        "empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  &quot;Additional permissions&quot; are terms that supplement the terms of this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License by making exceptions from one or more of its conditions.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Additional permissions that are applicable to the "
                        "entire Program shall</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">be treated as though they were included in this License, to the extent</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">that they are valid under applicable law.  If additional permissions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">apply only to part of the Program, that part may be used separately</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span "
                        "style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">under those permissions, but the entire Program remains governed by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">this License without regard to the additional permissions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  When you convey a copy of a covered work, you may at your option</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">remove any additional permissions from that copy, or from any part of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">it.  (Additional permissions may be written to require their own</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">removal in certain cases when you modify the work.)  You may place</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">additional permissions on material, added by you t"
                        "o a covered work,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for which you have or can give appropriate copyright permission.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Notwithstanding any other provision of this License, for material you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000"
                        ";\">add to a covered work, you may (if authorized by the copyright holders of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">that material) supplement the terms of this License with terms:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    a) Disclaiming warranty or limiting liability differently from the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "family:'Courier New,courier'; font-size:8pt; color:#000000;\">    terms of sections 15 and 16 of this License; or</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    b) Requiring preservation of specified reasonable legal notices or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    author attributions in that material or in the Appropriate Legal</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0"
                        "; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Notices displayed by works containing it; or</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    c) Prohibiting misrepresentation of the origin of that material, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    requiring that modified versions of such material be marked in</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    reasonable ways as different from the original version; or</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    d) Limiting the use for publicity purposes of names of licensors or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    authors of the material; or</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    e) Declining to grant rights under trademark law for use of some</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    trade names, trademarks, or service marks; or</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    f) Requiring indemnification of licensors and authors of that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    material by anyone who conveys the material (or modified versions of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    it) with contractual assumptions of liability to the recipient, for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    any liability that these contr"
                        "actual assumptions directly impose on</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    those licensors and authors.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  All other non-permissive additional terms are considered &quot;further</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">restric"
                        "tions&quot; within the meaning of section 10.  If the Program as you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">received it, or any part of it, contains a notice stating that it is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">governed by this License along with a term that is a further</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">restriction, you may remove that term.  If a license document contains</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">a further restriction but permits relicensing or conveying under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License, you may add to a covered work material governed by the terms</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">of that license document, provided that the further restriction does</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">not survive such relicensing or conveying.</s"
                        "pan></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If you add terms to a covered work in accord with this section, you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">must place, in the relevant source files, a statement of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">additional terms that "
                        "apply to those files, or a notice indicating</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">where to find the applicable terms.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Additional terms, permissive or non-permissive, may be stated in the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\""
                        ">form of a separately written license, or stated as exceptions;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the above requirements apply either way.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  8. Termination.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may not propagate or modify a covered work except as expressly</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">provided under this License.  Any attempt otherwise to propagate or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modify it is void, and will automatically terminate your rights under</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font"
                        "-size:8pt; color:#000000;\">this License (including any patent licenses granted under the third</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">paragraph of section 11).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  However, if you cease all violation of this License, then your</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courie"
                        "r'; font-size:8pt; color:#000000;\">license from a particular copyright holder is reinstated (a)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">provisionally, unless and until the copyright holder explicitly and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">finally terminates your license, and (b) permanently, if the copyright</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">holder fails to notify you of the violation by some reasonable means</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">prior to 60 days after the cessation.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Moreover, your license from a particular copyright holder is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">reinstated permanently if the copyright holder notifies you of the</span></p>\n"
"<p style=\" margin-top:0px; margin"
                        "-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">violation by some reasonable means, this is the first time you have</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">received notice of violation of this License (for any work) from that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">copyright holder, and you cure the violation prior to 30 days after</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000"
                        ";\">your receipt of the notice.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Termination of your rights under this section does not terminate the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">licenses of parties who have received copies or rights from you under</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:"
                        "8pt; color:#000000;\">this License.  If your rights have been terminated and not permanently</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">reinstated, you do not qualify to receive new licenses for the same</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">material under section 10.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,couri"
                        "er'; font-size:8pt; color:#000000;\">  9. Acceptance Not Required for Having Copies.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You are not required to accept this License in order to receive or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">run a copy of the Program.  Ancillary propagation of a covered work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
                        "=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">occurring solely as a consequence of using peer-to-peer transmission</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to receive a copy likewise does not require acceptance.  However,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">nothing other than this License grants you permission to propagate or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">modify any covered work.  These actions infringe copyright if you do</span></p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">not accept this License.  Therefore, by modifying or propagating a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">covered work, you indicate your acceptance of this License to do so.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  10. Automatic Licensing of Downstream R"
                        "ecipients.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Each time you convey a covered work, the recipient automatically</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">receives a license from the original licensors, to run, modify and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">propag"
                        "ate that work, subject to this License.  You are not responsible</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for enforcing compliance by third parties with this License.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  An &quot;entity transaction&quot; is a transaction transferring control of an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:"
                        "'Courier New,courier'; font-size:8pt; color:#000000;\">organization, or substantially all assets of one, or subdividing an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">organization, or merging organizations.  If propagation of a covered</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work results from an entity transaction, each party to that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">transaction who receives a copy of the work also receives whatever</span></p>\n"
"<p style=\" margin-top:0px; margin-bo"
                        "ttom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">licenses to the work the party's predecessor in interest had or could</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">give under the previous paragraph, plus a right to possession of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Corresponding Source of the work from the predecessor in interest, if</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000"
                        ";\">the predecessor has it or can get it with reasonable efforts.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You may not impose any further restrictions on the exercise of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">rights granted or affirmed under this License.  For example, you may</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'C"
                        "ourier New,courier'; font-size:8pt; color:#000000;\">not impose a license fee, royalty, or other charge for exercise of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">rights granted under this License, and you may not initiate litigation</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">(including a cross-claim or counterclaim in a lawsuit) alleging that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">any patent claim is infringed by making, using, selling, offering for</span></p>\n"
"<p style=\" margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">sale, or importing the Program or any portion of it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  11. Patents.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A &quot;contributor&quot; is a copyright holder who authorizes use under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License of the Program or a work on which the Program is based.  The</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work thus licensed is called the contributor's &quot;contributor version&quot;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  A contributor's &quot;essential patent claims&quot; are all patent claims</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">owned or controlled by the contributor, whether already acquired or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">hereafter acquired, that would be infringed by some manner, permitted</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; "
                        "color:#000000;\">by this License, of making, using, or selling its contributor version,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">but do not include claims that would be infringed only as a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">consequence of further modification of the contributor version.  For</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">purposes of this definition, &quot;control&quot; includes the right to grant</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px"
                        "; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patent sublicenses in a manner consistent with the requirements of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">this License.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Each contributor grants you a non-exclusive, worldwide, royalty-free</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patent license under the contributor's essential patent claims, to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">make, use, sell, offer for sale, import and otherwise run, modify and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">propagate the contents of its contributor version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  In the following three paragraphs, a &quot;patent license&quot; is any express</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">agreement or commitment, however denominated, not to enforce a patent</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">(such as an express permission to practice a patent or covenant not to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; fo"
                        "nt-size:8pt; color:#000000;\">sue for patent infringement).  To &quot;grant&quot; such a patent license to a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">party means to make such an agreement or commitment not to enforce a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patent against the party.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'C"
                        "ourier New,courier'; font-size:8pt; color:#000000;\">  If you convey a covered work, knowingly relying on a patent license,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">and the Corresponding Source of the work is not available for anyone</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to copy, free of charge and under the terms of this License, through a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">publicly available network server or other readily accessible means,</span></p>\n"
"<p style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">then you must either (1) cause the Corresponding Source to be so</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">available, or (2) arrange to deprive yourself of the benefit of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patent license for this particular work, or (3) arrange, in a manner</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:"
                        "#000000;\">consistent with the requirements of this License, to extend the patent</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">license to downstream recipients.  &quot;Knowingly relying&quot; means you have</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">actual knowledge that, but for the patent license, your conveying the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">covered work in a country, or your recipient's use of the covered work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in a country, would infringe one or more identifiable patents in that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">country that you have reason to believe are valid.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If, pursuant to or in connection with a single transaction or</span></p>\n"
"<p style=\" margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">arrangement, you convey, or propagate by procuring conveyance of, a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">covered work, and grant a patent license to some of the parties</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">receiving the covered work authorizing them to use, propagate, modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; co"
                        "lor:#000000;\">or convey a specific copy of the covered work, then the patent license</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">you grant is automatically extended to all recipients of the covered</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work and works based on it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; "
                        "font-size:8pt; color:#000000;\">  A patent license is &quot;discriminatory&quot; if it does not include within</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the scope of its coverage, prohibits the exercise of, or is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">conditioned on the non-exercise of one or more of the rights that are</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">specifically granted under this License.  You may not convey a covered</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0p"
                        "x; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">work if you are a party to an arrangement with a third party that is</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">in the business of distributing software, under which you make payment</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to the third party based on the extent of your activity of conveying</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the"
                        " work, and under which the third party grants, to any of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">parties who would receive the covered work from you, a discriminatory</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">patent license (a) in connection with copies of the covered work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">conveyed by you (or copies made from those copies), or (b) primarily</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">for and in connection with specific products or compilations that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">contain the covered work, unless you entered into that arrangement,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">or that patent license was granted, prior to 28 March 2007.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Nothing in this License shall be construed as excluding or limiting</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">any implied license or other defenses to infringement that may</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">otherwise be available to you under applicable patent law.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p styl"
                        "e=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  12. No Surrender of Others' Freedom.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If conditions are imposed on you (whether by court order, agreement or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">otherwise) that contradict the conditions of this License, th"
                        "ey do not</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">excuse you from the conditions of this License.  If you cannot convey a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">covered work so as to satisfy simultaneously your obligations under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License and any other pertinent obligations, then as a consequence you may</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span"
                        " style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">not convey it at all.  For example, if you agree to terms that obligate you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to collect a royalty for further conveying from those to whom you convey</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the Program, the only way you could satisfy both those terms and this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">License would be to refrain entirely from conveying the Program.</span></p>"
                        "\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  13. Use with the GNU Affero General Public License.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Notwithstanding any other provision of this License, you have</span></p>\n"
"<p style=\" margin-top:0px"
                        "; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">permission to link or combine any covered work with a work licensed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">under version 3 of the GNU Affero General Public License into a single</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">combined work, and to convey the resulting work.  The terms of this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; colo"
                        "r:#000000;\">License will continue to apply to the part which is the covered work,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">but the special requirements of the GNU Affero General Public License,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">section 13, concerning interaction through a network will apply to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">combination as such.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  14. Revised Versions of this License.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The Free Software Foundation may publish revised and/or new versions of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fami"
                        "ly:'Courier New,courier'; font-size:8pt; color:#000000;\">the GNU General Public License from time to time.  Such new versions will</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">be similar in spirit to the present version, but may differ in detail to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">address new problems or concerns.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Each version is given a distinguishing version number.  If the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Program specifies that a certain numbered version of the GNU General</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Public License &quot;or any later version&quot; applies to it, you have the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">option of following the terms and conditions either of that numbered</spa"
                        "n></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">version or of any later version published by the Free Software</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Foundation.  If the Program does not specify a version number of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">GNU General Public License, you may choose any version ever published</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier N"
                        "ew,courier'; font-size:8pt; color:#000000;\">by the Free Software Foundation.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If the Program specifies that a proxy can decide which future</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">versions of the GNU General Public License can be used, that proxy's</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-fa"
                        "mily:'Courier New,courier'; font-size:8pt; color:#000000;\">public statement of acceptance of a version permanently authorizes you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to choose that version for the Program.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  Later license versions may give you additional or different</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">permissions.  However, no additional obligations are imposed on any</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">author or copyright holder as a result of your choosing to follow a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                        "<span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  15. Disclaimer of Warranty.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM &quot;AS IS&quot; WITHOUT WARRANTY</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY "
                        "AND PERFORMANCE OF THE PROGRAM</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">ALL NECESSARY SERVICING, REPAIR OR CORRECTION.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">"
                        "  16. Limitation of Liability.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-s"
                        "ize:8pt; color:#000000;\">THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">SUCH DAMAGES.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top"
                        ":0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  17. Interpretation of Sections 15 and 16.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If the disclaimer of warranty and limitation of liability provided</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">above cannot be given local legal effect according to their terms,</span></"
                        "p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">reviewing courts shall apply local law that most closely approximates</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">an absolute waiver of all civil liability in connection with the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Program, unless a warranty or assumption of liability accompanies a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,"
                        "courier'; font-size:8pt; color:#000000;\">copy of the Program in return for a fee.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">                     END OF TERMS AND CONDITIONS</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">            How t"
                        "o Apply These Terms to Your New Programs</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If you develop a new program, and you want it to be of the greatest</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">possible use to the public, the best way to achieve this is to make it</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; f"
                        "ont-size:8pt; color:#000000;\">free software which everyone can redistribute and change under these terms.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  To do so, attach the following notices to the program.  It is safest</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">to attach them to the start of each source file to most effectively</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">state the exclusion of warranty; and each file should have at least</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the &quot;copyright&quot; line and a pointer to where the full notice is found.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    &lt;one line to give the program's name and a brief idea of what it does.&gt;</span></p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    Copyright (C) &lt;year&gt;  &lt;name of author&gt;</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    This program is free software: you can redistribute it and/or modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    it under the terms of the GNU General Public License as publish"
                        "ed by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    the Free Software Foundation, either version 3 of the License, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    (at your option) any later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    This program is distributed in "
                        "the hope that it will be useful,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    but WITHOUT ANY WARRANTY; without even the implied warranty of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    GNU General Public License for more details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    You should have received a copy of the GNU General Public License</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font"
                        "-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Also add information on how to contact you by electronic and paper mail.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  If the program does terminal interaction, make it output a short</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">notice like this when it starts in an interactive mode:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    &lt;program&gt;  Copyright (C) &lt;year&gt;  &lt;name of author&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    This is free software, and you are welcome to redistribute it</span></p>\n"
"<p style=\" margin-top:0px; m"
                        "argin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">    under certain conditions; type `show c' for details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">The hypothetical commands `show w' and `show c' should show the appropriate</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">parts of the General Public License.  Of course, your program'"
                        "s commands</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">might be different; for a GUI interface, you would use an &quot;about box&quot;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">  You should also get your employer (if you work as a programmer) or school,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt;"
                        " color:#000000;\">if any, to sign a &quot;copyright disclaimer&quot; for the program, if necessary.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">For more information on this, and how to apply and follow the GNU GPL, see</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">&lt;http://www.gnu.org/licenses/&gt;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-"
                        "family:'Courier New,courier'; font-size:8pt; color:#000000;\">  The GNU General Public License does not permit incorporating your program</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">into proprietary programs.  If your program is a subroutine library, you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">may consider it more useful to permit linking proprietary applications with</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">the library.  If this is what you want to do, use the GNU Lesser General</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">Public License instead of this License.  But first, please read</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:8pt; color:#000000;\">&lt;http://www.gnu.org/philosophy/why-not-lgpl.html&gt;.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("About", "\316\206\316\264\316\265\316\271\316\261", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("About", "\316\232\316\273\316\265\316\257\317\203\316\271\316\274\316\277", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
