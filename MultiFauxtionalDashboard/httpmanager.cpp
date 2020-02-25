#include "httpmanager.h"

HTTPManager::HTTPManager(QObject *parent) :
    QObject(parent),
    imageDownloadManager(new QNetworkAccessManager)
{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(DownloadedImageHandler(QNetworkReply*)));

}

HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
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

