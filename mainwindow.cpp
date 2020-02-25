#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonObject>
#include <QJsonArray>
#include <string>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      timer(new QTimer),
      httpManager(new HTTPManager)
      {
      ui->setupUi(this);

      connect(timer, SIGNAL(timeout()),
              this, SLOT(setCurrentTime()));

      setCurrentTime();
      timer->start(1000);

      connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
              this, SLOT(processWeatherJson(QJsonObject *)));
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


void MainWindow::setCurrentTime()
{
QTime time =  QTime::currentTime();


QString hour = time.toString("hh");
QString minute = time.toString("mm");
QString second = time.toString("ss");
ui->localHourLCD->display(hour);
ui->localMinuteLCD->display(minute);
ui->localSecondLCD->display(second);
QString tempHour = hour;
int numHour;
numHour= hour.toInt();
int numSecond = second.toInt();
if(numHour < 12)
{
    ui->GreetingLabel->setText("Good Morning!");
}
if(numHour >= 12 && numHour <= 16)
    ui->GreetingLabel->setText("Good Afternoon!");
else
{
    ui->GreetingLabel->setText("Good Evening!");
}

         if( numSecond % 2 == 0)
         {
             photoIterator+= 1;
            QString tempI = QString::number(photoIterator);
          QPixmap Dog("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/dogPhotos/dog" + tempI + ".jpg");
          ui->imageDownload->setPixmap(Dog);
         qDebug() << tempI << "TEMPI<<";
         if(photoIterator == 8)
         {
             photoIterator = 0;
         }

        }
}



void MainWindow::processWeatherJson(QJsonObject *json)
{
qDebug() << "Json ready";
QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
double temp = json->value("main").toObject()["temp"].toDouble();
double temp_min = json->value("main").toObject()["temp_min"].toDouble();
double temp_max = json->value("main").toObject()["temp_max"].toDouble();

qDebug() << weather;
qDebug() << weatherDesc;
qDebug() << temp;
qDebug() << temp_min;
qDebug() << temp_max;
QPixmap Cloudy("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Cloudy.jpg");
QPixmap Drizzle("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Drizzle.jpg");
QPixmap Rain("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Rain.jpg");
QPixmap Snow("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Snow.jpg");
QPixmap Sunny("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Sunny.jpg");
QPixmap Thunderstorm("/Users/zachary/Desktop/MultiFauxionalDashboard-Levi-2/MultiFauxtionalDashboard/ForecastClipart/Thunderstorm.jpg");

ui->Weather->setText("Current Weather: " + weather + ", temp: " + QString::number(temp));

if(weather == "Clear")
  {
      ui->forcastWeatherPicture->setPixmap(Sunny);
  }
if(weather == "Rain")
   {
      ui->forcastWeatherPicture->setPixmap(Rain);
     qDebug() << "SETIMAGE: CLEAR";
   }
if(weather == "Snow")
   {
      ui->forcastWeatherPicture->setPixmap(Snow);
      qDebug() << "SETIMAGE: CLOUDS";
   }
if(weather == "Clouds")
    {
       qDebug() << "SETIMAGE: CLOUDS";
        ui->forcastWeatherPicture->setPixmap(Cloudy);
    }
   if(weather == "Thunderstorm")
     {
         ui->forcastWeatherPicture->setPixmap(Thunderstorm);
       qDebug() << "SETIMAGE: CLEAR";
     }
   if(weather == "Drizzle")
     {
         ui->forcastWeatherPicture->setPixmap(Drizzle);
        qDebug() << "SETIMAGE: CLOUDS";
     }


}


void MainWindow::on_weatherDownloadButton_clicked()
{
QString zip = ui->zipCodeEdit->text();
qDebug() << zip;
httpManager->sendWeatherRequest(zip);
}
