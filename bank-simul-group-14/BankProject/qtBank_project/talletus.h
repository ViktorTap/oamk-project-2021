#ifndef TALLETUS_H
#define TALLETUS_H

#include <QWidget>
#include <QCloseEvent>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

namespace Ui {
class Talletus;
}

class Talletus : public QWidget
{
    Q_OBJECT

public:
    explicit Talletus(QString id, QWidget *parent = 0);
    ~Talletus();

private slots:
    void on_pushButton_Ok_clicked();

    void on_pushButton_Takaisin_clicked();

    void talletusSlot (QNetworkReply *reply);

private:
    Ui::Talletus *ui;
    QNetworkAccessManager *talletus_manager;
    QNetworkReply *reply;
    QString idAsiakas;
};

#endif // TALLETUS_H
