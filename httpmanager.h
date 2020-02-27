#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>

class HTTPManager : public QObject
{
    Q_OBJECT
public:
    explicit HTTPManager(QObject *parent = nullptr);
    ~HTTPManager();

    void sendMapRequest(QString zip);
    void sendWeatherRequest(QString zip);

signals:
    void ReadyImage(QPixmap *map);
    void WeatherJsonReady(QJsonObject *json);

private slots:
    void DownloadedImageHandler(QNetworkReply *reply);
    void WeatherDownloadedHandler(QNetworkReply *reply);

private:
    QNetworkAccessManager *imageDownloadManager;
    QByteArray downladedInfo;
    QNetworkAccessManager *weatherAPIManager;
    QByteArray downloadedData;
};

#endif // HTTPMANAGER_H
