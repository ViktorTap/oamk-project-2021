#ifndef TILINTAPAHTUMAT_H
#define TILINTAPAHTUMAT_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QWidget>

namespace Ui {
class Tilintapahtumat;
}

class Tilintapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit Tilintapahtumat(QString id, QWidget *parent = 0);
    ~Tilintapahtumat();

private slots:
    void on_pushButton_Takaisin_clicked();

    void on_pushButton_Kirjaudu_ulos_clicked();



    void on_pushButton_HaeTilitapahtumat_clicked();
    void getTilitapahtumaSlot (QNetworkReply *reply);

private:
    Ui::Tilintapahtumat *ui;
    QNetworkAccessManager *tilitapahtuma_Manager;
    QNetworkReply *reply;
    QString idAsiakas;
};

#endif // TILINTAPAHTUMAT_H
