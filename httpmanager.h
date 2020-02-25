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


    void sendWeatherRequest(QString zip);

signals:

    void WeatherJsonReady(QJsonObject *json);

private slots:

    void WeatherDownloadedHandler(QNetworkReply *reply);

private:

    QNetworkAccessManager *weatherAPIManager;
    QByteArray downloadedData;
};

#endif // HTTPMANAGER_H
