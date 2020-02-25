#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <httpmanager.h>
#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QTime>
#include <QByteArray>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QStandardItemModel>

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

    void on_MapLoadButton_clicked();
    void processImage(QPixmap *);
    void setSwitzerlandTime();


private:
    Ui::MainWindow *ui;
    HTTPManager *httpManager;
    QStandardItemModel *csvModel;
    void UplaodCSV();
    QTimer *timer;


    void on_page1_clicked();

    void on_page2_clicked();

    void on_page3_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
