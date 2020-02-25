#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    httpManager(new HTTPManager),
    timer(new QTimer)
{
    ui->setupUi(this);

    connect(httpManager, SIGNAL(ReadyImage(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    MainWindow::UplaodCSV();

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setSwitzerlandTime()));

    setSwitzerlandTime();
    timer->start(1000);

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

void MainWindow::setSwitzerlandTime()
{
    QTime time = QTime::currentTime();
    time = time.addSecs(32400);
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");

    ui->worldHourLCD->display(hour);
    ui->worldMinuteLCD->display(minute);
    ui->worldSecondLCD->display(second);
}

void MainWindow::on_MapLoadButton_clicked()
{
    QString zip = ui->AreaCodeLine->text();
    qDebug() << zip;
    httpManager->sendMapRequest(zip);

}

void MainWindow::processImage(QPixmap *image)
{
    ui->Map->setPixmap(*image);

void MainWindow::on_page1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_page2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_page3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
