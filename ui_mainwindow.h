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
    QLabel *toDoListBack;
    QWidget *mapPage;
    QLabel *MapBackground;
    QPushButton *MapLoadButton;
    QLineEdit *AreaCodeLine;
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
    QLabel *label;
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
        ToDoList->setGeometry(QRect(60, 70, 471, 451));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ToDoList->sizePolicy().hasHeightForWidth());
        ToDoList->setSizePolicy(sizePolicy);
        ToDoList->setLayoutDirection(Qt::LeftToRight);
        ToDoList->setAutoFillBackground(false);
        ToDoList->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
""));
        ToDoList->setFrameShape(QFrame::NoFrame);
        ToDoList->setFrameShadow(QFrame::Plain);
        ToDoList->setShowGrid(false);
        toDoListBack = new QLabel(todoListPage);
        toDoListBack->setObjectName(QString::fromUtf8("toDoListBack"));
        toDoListBack->setGeometry(QRect(50, 60, 500, 470));
        toDoListBack->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-radius: 27%;"));
        toDoListBack->setFrameShape(QFrame::NoFrame);
        stackedWidget->addWidget(todoListPage);
        toDoListBack->raise();
        ToDoList->raise();
        mapPage = new QWidget();
        mapPage->setObjectName(QString::fromUtf8("mapPage"));
        MapBackground = new QLabel(mapPage);
        MapBackground->setObjectName(QString::fromUtf8("MapBackground"));
        MapBackground->setGeometry(QRect(50, 60, 500, 470));
        MapBackground->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-radius: 27%"));
        MapLoadButton = new QPushButton(mapPage);
        MapLoadButton->setObjectName(QString::fromUtf8("MapLoadButton"));
        MapLoadButton->setEnabled(true);
        MapLoadButton->setGeometry(QRect(424, 89, 101, 31));
        QFont font;
        font.setPointSize(18);
        font.setKerning(false);
        MapLoadButton->setFont(font);
        MapLoadButton->setAutoFillBackground(false);
        MapLoadButton->setStyleSheet(QString::fromUtf8("QPushButton#MapLoadButton{\n"
"background-color: rgb(100, 100, 100);\n"
"border-radius: 25%;\n"
"color: rgb(235, 235, 235);\n"
"}\n"
"QPushButton#MapLoadButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(130, 156, 208);\n"
"	color:rgb(204, 204, 204);\n"
"}"));
        MapLoadButton->setAutoDefault(false);
        MapLoadButton->setFlat(false);
        AreaCodeLine = new QLineEdit(mapPage);
        AreaCodeLine->setObjectName(QString::fromUtf8("AreaCodeLine"));
        AreaCodeLine->setGeometry(QRect(72, 89, 151, 31));
        QFont font1;
        font1.setPointSize(18);
        AreaCodeLine->setFont(font1);
        AreaCodeLine->setLayoutDirection(Qt::LeftToRight);
        AreaCodeLine->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);\n"
"border-color: rgb(109, 109, 109);\n"
"color: rgb(235, 235, 235);\n"
"border-radius:99%;"));
        AreaCodeLine->setFrame(false);
        Map = new QLabel(mapPage);
        Map->setObjectName(QString::fromUtf8("Map"));
        Map->setGeometry(QRect(70, 140, 461, 371));
        Map->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-radius: 27%;"));
        stackedWidget->addWidget(mapPage);
        imageDownloadPage = new QWidget();
        imageDownloadPage->setObjectName(QString::fromUtf8("imageDownloadPage"));
        imageDownload = new QLabel(imageDownloadPage);
        imageDownload->setObjectName(QString::fromUtf8("imageDownload"));
        imageDownload->setGeometry(QRect(50, 60, 500, 470));
        imageDownload->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-radius: 27%;"));
        stackedWidget->addWidget(imageDownloadPage);
        localHourLCD = new QLCDNumber(centralwidget);
        localHourLCD->setObjectName(QString::fromUtf8("localHourLCD"));
        localHourLCD->setGeometry(QRect(127, 118, 51, 51));
        localHourLCD->setAutoFillBackground(false);
        localHourLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50)"));
        localHourLCD->setFrameShape(QFrame::NoFrame);
        localHourLCD->setFrameShadow(QFrame::Sunken);
        localHourLCD->setDigitCount(2);
        localHourLCD->setSegmentStyle(QLCDNumber::Filled);
        localHourLCD->setProperty("value", QVariant(22.000000000000000));
        localMinuteLCD = new QLCDNumber(centralwidget);
        localMinuteLCD->setObjectName(QString::fromUtf8("localMinuteLCD"));
        localMinuteLCD->setGeometry(QRect(197, 118, 51, 51));
        localMinuteLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50)"));
        localMinuteLCD->setFrameShape(QFrame::NoFrame);
        localMinuteLCD->setDigitCount(2);
        localMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        localMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        localSecondLCD = new QLCDNumber(centralwidget);
        localSecondLCD->setObjectName(QString::fromUtf8("localSecondLCD"));
        localSecondLCD->setGeometry(QRect(267, 118, 51, 51));
        localSecondLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50)"));
        localSecondLCD->setFrameShape(QFrame::NoFrame);
        localSecondLCD->setDigitCount(2);
        localSecondLCD->setSegmentStyle(QLCDNumber::Filled);
        localSecondLCD->setProperty("value", QVariant(22.000000000000000));
        Weather = new QLabel(centralwidget);
        Weather->setObjectName(QString::fromUtf8("Weather"));
        Weather->setGeometry(QRect(30, 300, 381, 231));
        Weather->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);\n"
"border-radius:27%;"));
        colonOne = new QLabel(centralwidget);
        colonOne->setObjectName(QString::fromUtf8("colonOne"));
        colonOne->setGeometry(QRect(177, 118, 20, 50));
        QFont font2;
        font2.setPointSize(24);
        colonOne->setFont(font2);
        colonOne->setStyleSheet(QString::fromUtf8("color: rgb(109, 109, 109);"));
        colonOne->setAlignment(Qt::AlignCenter);
        colonTwo = new QLabel(centralwidget);
        colonTwo->setObjectName(QString::fromUtf8("colonTwo"));
        colonTwo->setGeometry(QRect(247, 118, 20, 50));
        colonTwo->setFont(font2);
        colonTwo->setStyleSheet(QString::fromUtf8("color: rgb(109, 109, 109);"));
        colonTwo->setAlignment(Qt::AlignCenter);
        colonOne_2 = new QLabel(centralwidget);
        colonOne_2->setObjectName(QString::fromUtf8("colonOne_2"));
        colonOne_2->setGeometry(QRect(210, 210, 10, 50));
        colonOne_2->setFont(font2);
        colonOne_2->setStyleSheet(QString::fromUtf8("color: rgb(109, 109, 109);"));
        colonOne_2->setAlignment(Qt::AlignCenter);
        colonTwo_2 = new QLabel(centralwidget);
        colonTwo_2->setObjectName(QString::fromUtf8("colonTwo_2"));
        colonTwo_2->setGeometry(QRect(250, 210, 10, 50));
        colonTwo_2->setFont(font2);
        colonTwo_2->setStyleSheet(QString::fromUtf8("color: rgb(109, 109, 109);"));
        colonTwo_2->setAlignment(Qt::AlignCenter);
        worldHourLCD = new QLCDNumber(centralwidget);
        worldHourLCD->setObjectName(QString::fromUtf8("worldHourLCD"));
        worldHourLCD->setGeometry(QRect(180, 210, 30, 51));
        worldHourLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50)"));
        worldHourLCD->setFrameShape(QFrame::NoFrame);
        worldHourLCD->setDigitCount(2);
        worldHourLCD->setSegmentStyle(QLCDNumber::Filled);
        worldHourLCD->setProperty("value", QVariant(22.000000000000000));
        worldMinuteLCD = new QLCDNumber(centralwidget);
        worldMinuteLCD->setObjectName(QString::fromUtf8("worldMinuteLCD"));
        worldMinuteLCD->setGeometry(QRect(220, 210, 30, 51));
        worldMinuteLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50)"));
        worldMinuteLCD->setFrameShape(QFrame::NoFrame);
        worldMinuteLCD->setDigitCount(2);
        worldMinuteLCD->setSegmentStyle(QLCDNumber::Filled);
        worldMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        worldSecondLCD = new QLCDNumber(centralwidget);
        worldSecondLCD->setObjectName(QString::fromUtf8("worldSecondLCD"));
        worldSecondLCD->setGeometry(QRect(260, 210, 30, 51));
        worldSecondLCD->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);\n"
"background-color: rgb(50, 50, 50);"));
        worldSecondLCD->setFrameShape(QFrame::NoFrame);
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
        forcastWeatherPicture->setGeometry(QRect(280, 370, 85, 85));
        forcastWeatherPicture->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 109, 109);"));
        GreetingLabel = new QLabel(centralwidget);
        GreetingLabel->setObjectName(QString::fromUtf8("GreetingLabel"));
        GreetingLabel->setGeometry(QRect(70, 10, 310, 90));
        GreetingLabel->setFont(font2);
        GreetingLabel->setStyleSheet(QString::fromUtf8("color: rgb(36, 195, 197);\n"
"background-color: rgb(50, 50, 50)"));
        GreetingLabel->setTextFormat(Qt::PlainText);
        GreetingLabel->setAlignment(Qt::AlignCenter);
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(60, 370, 130, 31));
        QFont font3;
        font3.setPointSize(14);
        zipCodeEdit->setFont(font3);
        zipCodeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);\n"
"border-color: rgb(109, 109, 109);\n"
"border-radius:99%;\n"
"color: rgb(235, 235, 235);"));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(60, 430, 130, 40));
        weatherDownloadButton->setFont(font3);
        weatherDownloadButton->setStyleSheet(QString::fromUtf8("QPushButton#weatherDownloadButton{\n"
"background-color: rgb(100, 100, 100);\n"
"border-radius: 25%;\n"
"color: rgb(235, 235, 235);\n"
"}\n"
"QPushButton#weatherDownloadButton:hover\n"
"{\n"
"	\n"
"	border-color: rgb(30, 39, 67);\n"
"	\n"
"	\n"
"	background-color: rgb(130, 156, 208);\n"
"	color:rgb(0, 0, 0)\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(172, 190, 111, 20));
        QFont font4;
        font4.setPointSize(12);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("color: rgb(235, 235, 235);"));
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        MapLoadButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(accessibility)
        ToDoList->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        toDoListBack->setText(QString());
        MapBackground->setText(QString());
        MapLoadButton->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        AreaCodeLine->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        Map->setText(QString());
        imageDownload->setText(QString());
        Weather->setText(QString());
        colonOne->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        colonTwo->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        colonOne_2->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        colonTwo_2->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        page1->setText(QString());
        page2->setText(QString());
        page3->setText(QString());
        forcastWeatherPicture->setText(QString());
        GreetingLabel->setText(QCoreApplication::translate("MainWindow", "Welcome!", nullptr));
        zipCodeEdit->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        weatherDownloadButton->setText(QCoreApplication::translate("MainWindow", "See Forecast", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Switzerland", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
