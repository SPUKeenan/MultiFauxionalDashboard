#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    httpManager(new HTTPManager)
{
    ui->setupUi(this);

    connect(httpManager, SIGNAL(ReadyImage(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//map url: https://dev.virtualearth.net/REST/V1/Imagery/Map/AerialWithLabels/78745/7?mapSize=400,200&mapLayer=TrafficFlow&format=png&key=AlhMfHseh1iO8LpHUYvv125wMpone0D2EuwVEgTXjxxPEy_RzL_EPZ033zvOD1yw

void MainWindow::on_MapLoadButton_clicked()
{
    QString zip = ui->AreaCodeLine->text();
    qDebug() << zip;
    httpManager->sendMapRequest(zip);

}

void MainWindow::processImage(QPixmap *image)
{
    ui->Map->setPixmap(*image);
}
