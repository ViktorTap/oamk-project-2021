#include "saldo.h"
#include "ui_saldo.h"
#include "mainwindow.h"

Saldo::Saldo(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Saldo)
{
    this->idAsiakas = id;
    ui->setupUi(this);

}

Saldo::~Saldo()
{
    delete ui;
    ui=nullptr;
}
void Saldo::on_pushButton_HaeSaldo_clicked()
{
    QString site_url="http://localhost:3000/asiakas_tiedot/"+idAsiakas;
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    saldo_manager = new QNetworkAccessManager(this);
    connect(saldo_manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(getSaldoSlot(QNetworkReply*)));
    reply = saldo_manager->get(request);
}

void Saldo::getSaldoSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();
    QString saldo;
    foreach (const QJsonValue &value, json_array) {
    QJsonObject json_obj = value.toObject();
    saldo+= "Saldo: " + QString::number(json_obj["Saldo"].toInt()) + " €"
            + "\nKorttityyppi: " + json_obj["Kortin_tyyppi"].toString()
            +"\nLuottoraja: "
            + QString::number(json_obj["Luottoraja"].toInt()) + " €";

             // +"\r";

    //QJsonObject json_obj = value.toObject();
    //saldo+=QString::number(json_obj["Saldo"].toInt())+" €"
            // +"\n"+json_obj["Saldo"].toInt()
    //         +"\n"+json_obj["Kortin_tyyppi"].toString()
    //         +"\nLuottoraja on: "+json_obj["Luottoraja"].toInt();
             // +"\r";
    }
    //qDebug()<<saldo;

    ui->text_Saldo->setText(saldo);
    reply->deleteLater();
    saldo_manager->deleteLater();
}


void Saldo::on_pushButton_Takaisin_clicked()
{
    this->close();
}



