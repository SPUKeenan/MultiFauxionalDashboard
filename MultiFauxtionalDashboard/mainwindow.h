#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <httpmanager.h>
#include <QMainWindow>
#include <QTimer>
#include <QTimeZone>
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
    void UplaodCSV();

private slots:
    void on_MapLoadButton_clicked();
    void processImage(QPixmap *);


private:
    Ui::MainWindow *ui;
    HTTPManager *httpManager;
    QStandardItemModel *csvModel;

};
#endif // MAINWINDOW_H
