#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>

HTTPManager::HTTPManager(QObject *parent) : QObject(parent),
    weatherAPIManager(new QNetworkAccessManager),
    imageDownloadManager(new QNetworkAccessManager)
{

    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(DownloadedImageHandler(QNetworkReply*)));
    connect(weatherAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(WeatherDownloadedHandler(QNetworkReply*)));
}


HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
    delete weatherAPIManager;
}



void HTTPManager::sendWeatherRequest(QString zip)
{
    QNetworkRequest request;


    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
            + zip
            + ",us&units=imperial&appid=71dd2d665d819ef4b6ffd5b292855f9b";

    request.setUrl(QUrl(address));
    weatherAPIManager->get(request);
    qDebug() << "Weather Request Sent to Address " << request.url();
}

void HTTPManager::sendMapRequest(QString zip)
{
    QNetworkRequest request;
    QString address = "https://dev.virtualearth.net/REST/V1/Imagery/Map/AerialWithLabels/"
            + zip
            + "/7?mapSize=400,200&mapLayer=TrafficFlow&format=png&key=AlhMfHseh1iO8LpHUYvv125wMpone0D2EuwVEgTXjxxPEy_RzL_EPZ033zvOD1yw";
    request.setUrl(QUrl(address));
    imageDownloadManager->get(request);
    qDebug() << "Image Request Sent to Address " << request.url();
}

void HTTPManager::DownloadedImageHandler(QNetworkReply *reply)
{
    qDebug() << " Image Reply has Arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";
    QPixmap *map  = new QPixmap();
    map->loadFromData(reply->readAll());

    emit ReadyImage(map);
}

void HTTPManager::WeatherDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Weather Reply arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download  successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherJsonReady(jsonObj);
}

