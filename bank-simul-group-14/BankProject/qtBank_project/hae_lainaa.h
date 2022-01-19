#ifndef HAE_LAINAA_H
#define HAE_LAINAA_H

#include <QWidget>
#include <QCloseEvent>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

namespace Ui {
class Hae_Lainaa;
}

class Hae_Lainaa : public QWidget
{
    Q_OBJECT

public:
    explicit Hae_Lainaa(QString id, QWidget *parent = 0);
    ~Hae_Lainaa();

private slots:

    void on_pushButton_Takaisin_clicked();

    void on_pushButton_HaeLainaa_clicked();

    void haeLainaSlot (QNetworkReply *reply);


private:
    Ui::Hae_Lainaa *ui;
    QString idAsiakas;

    QNetworkAccessManager *laina_manager;
    QNetworkReply *reply;
};

#endif // HAE_LAINAA_H
