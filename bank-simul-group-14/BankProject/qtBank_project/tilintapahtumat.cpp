#include "tilintapahtumat.h"
#include "ui_tilintapahtumat.h"
#include "mainwindow.h"

Tilintapahtumat::Tilintapahtumat(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tilintapahtumat)
{
    this->idAsiakas = id;
    ui->setupUi(this);

}

Tilintapahtumat::~Tilintapahtumat()
{
    delete ui;
}

void Tilintapahtumat::on_pushButton_HaeTilitapahtumat_clicked()
{
    QString site_url="http://localhost:3000/tilitapahtumat/"+idAsiakas;
    QString credentials="newAdmin:newPass";

    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QByteArray data = credentials.toLocal8Bit().toBase64();

    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );

    tilitapahtuma_Manager = new QNetworkAccessManager(this);
    connect(tilitapahtuma_Manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getTilitapahtumaSlot(QNetworkReply*)));
    reply = tilitapahtuma_Manager->get(request);
}

void Tilintapahtumat::getTilitapahtumaSlot(QNetworkReply *reply)
{
    QByteArray response_data = reply->readAll();
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);

    QJsonArray json_array = json_doc.array();

    // qDebug()<<json_doc["paivays"];

    QString tilitapahtuma = ""; // json_doc["paivays"].toString(); +" : "+json_doc["tapahtuma"].toString()+" : "+json_doc["rahamaara"].toString();

    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    tilitapahtuma += json_obj["Paivays"].toString()+" | "+json_obj["Tapahtuma"].toString()+" | "+json_obj["Rahamaara"].toString()+"\r";
    }



    ui->tilitapahtumat_txtBox->setText(tilitapahtuma);
    reply -> deleteLater();
    tilitapahtuma_Manager -> deleteLater();
}

void Tilintapahtumat::on_pushButton_Takaisin_clicked()
{
    this->close();
}

void Tilintapahtumat::on_pushButton_Kirjaudu_ulos_clicked()
{

}

