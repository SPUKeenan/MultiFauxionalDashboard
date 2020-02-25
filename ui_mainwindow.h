/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *todoListPage;
    QTableView *ToDoList;
    QWidget *mapPage;
    QLabel *Map;
    QWidget *imageDownloadPage;
    QLabel *imageDownload;
    QLCDNumber *localHourLCD;
    QLCDNumber *localMinuteLCD;
    QLCDNumber *localSecondLCD;
    QLabel *Weather;
    QLabel *colonOne;
    QLabel *colonTwo;
    QLabel *colonOne_2;
    QLabel *colonTwo_2;
    QLCDNumber *worldHourLCD;
    QLCDNumber *worldMinuteLCD;
    QLCDNumber *worldSecondLCD;
    QRadioButton *page1;
    QRadioButton *page2;
    QRadioButton *page3;
    QLabel *forcastWeatherPicture;
    QLabel *GreetingLabel;
    QLineEdit *zipCodeEdit;
    QPushButton *weatherDownloadButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 50)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(440, 0, 581, 541));
        todoListPage = new QWidget();
        todoListPage->setObjectName(QString::fromUtf8("todoListPage"));
        ToDoList = new QTableView(todoListPage);
        ToDoList->setObjectName(QString::fromUtf8("ToDoList"));
        ToDoList->setGeometry(QRect(20, 10, 550, 530));
        stackedWidget->addWidget(todoListPage);
        mapPage = new QWidget();
        mapPage->setObjectName(QString::fromUtf8("mapPage"));
        Map = new QLabel(mapPage);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(20, 10, 550, 530));
        Map->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 156, 208);"));
        stackedWidget->addWidget(mapPage);
        imageDownloadPage = new QWidget();
        imageDownloadPage->setObjectName(QString::fromUtf8("imageDownloadPage"));
        imageDownload = new QLabel(imageDownloadPage);
        imageDownload->setObjectName(QString::fromUtf8("imageDownload"));
        imageDownload->setGeometry(QRect(20, 10, 550, 530));
        imageDownload->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 156, 208);\n"
"border: 5px;\n"
"border-color: rgb(71, 133, 89);"));
        stackedWidget->addWidget(imageDownloadPage);
        localHourLCD = new QLCDNumber(centralwidget);
        localHourLCD->setObjectName(QString::fromUtf8("localHourLCD"));
        localHourLCD->setGeometry(QRect(120, 80, 51, 51));
        localHourLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235)"));
        localHourLCD->setDigitCount(2);
        localHourLCD->setSegmentStyle(QLCDNumber::Filled);
        localHourLCD->setProperty("value", QVariant(22.000000000000000));
        localMinuteLCD = new QLCDNumber(centralwidget);
        localMinuteLCD->setObjectName(QString::fromUtf8("localMinuteLCD"));
        localMinuteLCD->setGeometry(QRect(190, 80, 51, 51));
        localMinuteLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235)"));
        localMinuteLCD->setDigitCount(2);
        localMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        localMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        localSecondLCD = new QLCDNumber(centralwidget);
        localSecondLCD->setObjectName(QString::fromUtf8("localSecondLCD"));
        localSecondLCD->setGeometry(QRect(260, 80, 51, 51));
        localSecondLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235)"));
        localSecondLCD->setDigitCount(2);
        localSecondLCD->setSegmentStyle(QLCDNumber::Filled);
        localSecondLCD->setProperty("value", QVariant(22.000000000000000));
        Weather = new QLabel(centralwidget);
        Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->setGeometry(QRect(30, 300, 381, 231));
        Weather->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 156, 208);"));
        colonOne = new QLabel(centralwidget);
        colonOne->setObjectName(QString::fromUtf8("colonOne"));
        colonOne->setGeometry(QRect(170, 80, 20, 50));
        QFont font;
        font.setPointSize(24);
        colonOne->setFont(font);
        colonOne->setAlignment(Qt::AlignCenter);
        colonTwo = new QLabel(centralwidget);
        colonTwo->setObjectName(QString::fromUtf8("colonTwo"));
        colonTwo->setGeometry(QRect(240, 80, 20, 50));
        colonTwo->setFont(font);
        colonTwo->setAlignment(Qt::AlignCenter);
        colonOne_2 = new QLabel(centralwidget);
        colonOne_2->setObjectName(QString::fromUtf8("colonOne_2"));
        colonOne_2->setGeometry(QRect(170, 200, 20, 50));
        colonOne_2->setFont(font);
        colonOne_2->setAlignment(Qt::AlignCenter);
        colonTwo_2 = new QLabel(centralwidget);
        colonTwo_2->setObjectName(QString::fromUtf8("colonTwo_2"));
        colonTwo_2->setGeometry(QRect(240, 200, 20, 50));
        colonTwo_2->setFont(font);
        colonTwo_2->setAlignment(Qt::AlignCenter);
        worldHourLCD = new QLCDNumber(centralwidget);
        worldHourLCD->setObjectName(QString::fromUtf8("worldHourLCD"));
        worldHourLCD->setGeometry(QRect(120, 200, 51, 51));
        worldHourLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);"));
        worldHourLCD->setDigitCount(2);
        worldHourLCD->setSegmentStyle(QLCDNumber::Filled);
        worldHourLCD->setProperty("value", QVariant(22.000000000000000));
        worldMinuteLCD = new QLCDNumber(centralwidget);
        worldMinuteLCD->setObjectName(QString::fromUtf8("worldMinuteLCD"));
        worldMinuteLCD->setGeometry(QRect(190, 200, 51, 51));
        worldMinuteLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);"));
        worldMinuteLCD->setDigitCount(2);
        worldMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        worldMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        worldSecondLCD = new QLCDNumber(centralwidget);
        worldSecondLCD->setObjectName(QString::fromUtf8("worldSecondLCD"));
        worldSecondLCD->setGeometry(QRect(260, 200, 51, 51));
        worldSecondLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);"));
        worldSecondLCD->setDigitCount(2);
        worldSecondLCD->setSegmentStyle(QLCDNumber::Filled);
        worldSecondLCD->setProperty("value", QVariant(22.000000000000000));
        page1 = new QRadioButton(centralwidget);
        page1->setObjectName(QString::fromUtf8("page1"));
        page1->setGeometry(QRect(720, 540, 16, 20));
        page2 = new QRadioButton(centralwidget);
        page2->setObjectName(QString::fromUtf8("page2"));
        page2->setGeometry(QRect(740, 540, 16, 20));
        page3 = new QRadioButton(centralwidget);
        page3->setObjectName(QString::fromUtf8("page3"));
        page3->setGeometry(QRect(760, 540, 16, 20));
        forcastWeatherPicture = new QLabel(centralwidget);
        forcastWeatherPicture->setObjectName(QString::fromUtf8("forcastWeatherPicture"));
        forcastWeatherPicture->setGeometry(QRect(280, 430, 85, 85));
        GreetingLabel = new QLabel(centralwidget);
        GreetingLabel->setObjectName(QString::fromUtf8("GreetingLabel"));
        GreetingLabel->setGeometry(QRect(120, 160, 191, 20));
        GreetingLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(150, 440, 113, 21));
        zipCodeEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(140, 480, 131, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Map->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        imageDownload->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        Weather->setText(QString());
        colonOne->setText(QApplication::translate("MainWindow", ":", nullptr));
        colonTwo->setText(QApplication::translate("MainWindow", ":", nullptr));
        colonOne_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        colonTwo_2->setText(QApplication::translate("MainWindow", ":", nullptr));
        page1->setText(QString());
        page2->setText(QString());
        page3->setText(QString());
        forcastWeatherPicture->setText(QString());
        GreetingLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        weatherDownloadButton->setText(QApplication::translate("MainWindow", "Dowload Weather", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
