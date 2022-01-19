#ifndef NOSTA_RAHAA_H
#define NOSTA_RAHAA_H

#include <QWidget>
#include <QCloseEvent>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

namespace Ui {
class Nosta_rahaa;
}

class Nosta_rahaa : public QWidget
{
    Q_OBJECT

public:
    explicit Nosta_rahaa(QString id, QWidget *parent = 0);
    ~Nosta_rahaa();

private slots:
    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Nosto_clicked();

    void nostoSlot (QNetworkReply *reply);

private:
    Ui::Nosta_rahaa *ui;
    QString idAsiakas;

    QNetworkAccessManager *nosto_manager;
    QNetworkReply *reply;
};

#endif // NOSTA_RAHAA_H
