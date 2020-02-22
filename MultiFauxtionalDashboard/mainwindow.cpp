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
    MainWindow::UplaodCSV();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::UplaodCSV()
{
    csvModel = new QStandardItemModel(this);
       csvModel->setColumnCount(1);
       csvModel->setHorizontalHeaderLabels(QStringList() << "To Do List");
       ui->ToDoList->setModel(csvModel);

       // Open the file from the resources. Instead of the file
       QFile file("ToDoList.csv");
       if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
           qDebug() << "File not exists";
       } else {
           // Create a thread to retrieve data from a file
           QTextStream in(&file);
           //Reads the data up to the end of file
           while (!in.atEnd())
           {
               QString line = in.readLine();
               // Adding to the model in line with the elements
               QList<QStandardItem *> standardItemsList;
               // consider that the line separated by semicolons into columns
               for (QString item : line.split(";")) {
                   standardItemsList.append(new QStandardItem(item));
               }
               csvModel->insertRow(csvModel->rowCount(), standardItemsList);
           }
           file.close();
       }
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
