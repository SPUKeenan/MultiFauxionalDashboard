#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

#include "httpmanager.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_page1_clicked();

    void on_page2_clicked();

    void on_page3_clicked();

    void setCurrentTime();
    void processWeatherJson(QJsonObject *json);
    void on_weatherDownloadButton_clicked();
private:
    Ui::MainWindow *ui;
    int  photoIterator = 1;
   QTimer *timer;
   HTTPManager *httpManager;
   int imageNumber = 0;
};



#endif // MAINWINDOW_H
