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

signals:
    void ReadyImage(QPixmap *map);

public slots:
    void DownloadedImageHandler(QNetworkReply *reply);

private:
    QNetworkAccessManager *imageDownloadManager;
    QByteArray downladedInfo;
};

#endif // HTTPMANAGER_H
