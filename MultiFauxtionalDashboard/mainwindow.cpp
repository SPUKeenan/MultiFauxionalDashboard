#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


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
