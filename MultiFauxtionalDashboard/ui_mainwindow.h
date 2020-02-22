/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLCDNumber *localHourLCD;
    QLCDNumber *localMinuteLCD;
    QLCDNumber *localSecondLCD;
    QLabel *imageDownload;
    QLabel *Weather;
    QLCDNumber *worldHourLCD;
    QLCDNumber *worldMinuteLCD;
    QLCDNumber *worldSecondLCD;
    QLabel *Map;
    QTableView *ToDoList;
    QComboBox *TimeZoneBox;
    QPushButton *MapLoadButton;
    QLineEdit *AreaCodeLine;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        localHourLCD = new QLCDNumber(centralwidget);
        localHourLCD->setObjectName(QString::fromUtf8("localHourLCD"));
        localHourLCD->setGeometry(QRect(20, 10, 51, 51));
        localHourLCD->setDigitCount(2);
        localHourLCD->setSegmentStyle(QLCDNumber::Filled);
        localHourLCD->setProperty("value", QVariant(22.000000000000000));
        localMinuteLCD = new QLCDNumber(centralwidget);
        localMinuteLCD->setObjectName(QString::fromUtf8("localMinuteLCD"));
        localMinuteLCD->setGeometry(QRect(70, 10, 51, 51));
        localMinuteLCD->setDigitCount(2);
        localMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        localMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        localSecondLCD = new QLCDNumber(centralwidget);
        localSecondLCD->setObjectName(QString::fromUtf8("localSecondLCD"));
        localSecondLCD->setGeometry(QRect(120, 10, 51, 51));
        localSecondLCD->setDigitCount(2);
        localSecondLCD->setSegmentStyle(QLCDNumber::Filled);
        localSecondLCD->setProperty("value", QVariant(22.000000000000000));
        imageDownload = new QLabel(centralwidget);
        imageDownload->setObjectName(QString::fromUtf8("imageDownload"));
        imageDownload->setGeometry(QRect(10, 70, 301, 231));
        Weather = new QLabel(centralwidget);
        Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->setGeometry(QRect(0, 290, 301, 231));
        worldHourLCD = new QLCDNumber(centralwidget);
        worldHourLCD->setObjectName(QString::fromUtf8("worldHourLCD"));
        worldHourLCD->setGeometry(QRect(250, 10, 51, 51));
        worldHourLCD->setDigitCount(2);
        worldHourLCD->setSegmentStyle(QLCDNumber::Filled);
        worldHourLCD->setProperty("value", QVariant(22.000000000000000));
        worldMinuteLCD = new QLCDNumber(centralwidget);
        worldMinuteLCD->setObjectName(QString::fromUtf8("worldMinuteLCD"));
        worldMinuteLCD->setGeometry(QRect(300, 10, 51, 51));
        worldMinuteLCD->setDigitCount(2);
        worldMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        worldMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        worldSecondLCD = new QLCDNumber(centralwidget);
        worldSecondLCD->setObjectName(QString::fromUtf8("worldSecondLCD"));
        worldSecondLCD->setGeometry(QRect(350, 10, 51, 51));
        worldSecondLCD->setDigitCount(2);
        worldSecondLCD->setSegmentStyle(QLCDNumber::Filled);
        worldSecondLCD->setProperty("value", QVariant(22.000000000000000));
        Map = new QLabel(centralwidget);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(360, 220, 281, 211));
        ToDoList = new QTableView(centralwidget);
        ToDoList->setObjectName(QString::fromUtf8("ToDoList"));
        ToDoList->setGeometry(QRect(760, 20, 256, 192));
        TimeZoneBox = new QComboBox(centralwidget);
        TimeZoneBox->setObjectName(QString::fromUtf8("TimeZoneBox"));
        TimeZoneBox->setGeometry(QRect(420, 20, 241, 22));
        MapLoadButton = new QPushButton(centralwidget);
        MapLoadButton->setObjectName(QString::fromUtf8("MapLoadButton"));
        MapLoadButton->setGeometry(QRect(360, 140, 111, 61));
        AreaCodeLine = new QLineEdit(centralwidget);
        AreaCodeLine->setObjectName(QString::fromUtf8("AreaCodeLine"));
        AreaCodeLine->setGeometry(QRect(500, 150, 141, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        imageDownload->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Weather->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Map->setText(QCoreApplication::translate("MainWindow", "Image Label", nullptr));
        MapLoadButton->setText(QCoreApplication::translate("MainWindow", "Map Download", nullptr));
        AreaCodeLine->setText(QCoreApplication::translate("MainWindow", "98119", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
