#include "maksa_lasku.h"
#include "ui_maksa_lasku.h"
#include <iostream>
#include <string>
#include <sstream>

Maksa_Lasku::Maksa_Lasku(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Maksa_Lasku)
{
    ui->setupUi(this);
    this->idAsiakas = id;

}

Maksa_Lasku::~Maksa_Lasku()
{
    delete ui;
}


void Maksa_Lasku::on_pushButton_Debit_clicked()
{
    QJsonObject json;

    int i = idAsiakas.toInt();
    int idAs = i;
    int oikeaId;

    if(i > 2) {
       idAs = i - 4;
       oikeaId = idAs;

    }

    else {
       oikeaId = idAs;
    }

    QString oikeaAsiakasId = QString::number(oikeaId);



    //string oikeaAsiakas = to_string(idAs);

    //QString idOikeaAsiakas = oikeaAsiakas;
    qDebug()<<oikeaAsiakasId;

    // json.insert("id1", ui->lineEdit_MaksajaId->setText(this->idAsiakas));

    json.insert("id1",oikeaAsiakasId);

    //qDebug()<<idAsiakas;
    json.insert("id2",ui->lineEdit_SaajaId->text());
    json.insert("summa",ui->lineEdit_Summa->text());

    QString site_url="http://localhost:3000/pankki/debit_siirto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit());

    debitManager = new QNetworkAccessManager(this);
    connect(debitManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(debitSlot(QNetworkReply*)));
    reply = debitManager->post(request, QJsonDocument(json).toJson());
}

void Maksa_Lasku::debitSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->label_Info->setText("Siirto onnistui");
        //ui->lineEdit_MaksajaId->setText("");
        ui->lineEdit_SaajaId->setText("");
        ui->lineEdit_Summa->setText("");
    }
    else {
        ui->label_Info->setText("Siirto epäonnistui");
        //ui->lineEdit_MaksajaId->setText("");
        ui->lineEdit_SaajaId->setText("");
        ui->lineEdit_Summa->setText("");
    }
}
void Maksa_Lasku::on_pushButton_Takaisin_clicked()
{
    this->close();
}
void Maksa_Lasku::on_pushButton_Credit_clicked()
{
    QJsonObject json;

    int i = idAsiakas.toInt();
    int idAs = i;
    int oikeaId;

    if(i > 2) {
       idAs = i - 4;
       oikeaId = idAs;

    }

    else {
       oikeaId = idAs;
    }

    QString oikeaAsiakasId = QString::number(oikeaId);

    json.insert("id1",oikeaAsiakasId);

    // json.insert("id1",ui->lineEdit_MaksajaId->text());

    json.insert("id2",ui->lineEdit_SaajaId->text());
    json.insert("summa",ui->lineEdit_Summa->text());

    QString site_url="http://localhost:3000/pankki/credit_siirto";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit());

    creditManager = new QNetworkAccessManager(this);
    connect(creditManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(creditSlot(QNetworkReply*)));
    reply = creditManager->post(request, QJsonDocument(json).toJson());
}

void Maksa_Lasku::creditSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;
    if(response_data == "1"){
        ui->label_Info->setText("Siirto onnistui");
        // ui->lineEdit_MaksajaId->setText("");
        ui->lineEdit_SaajaId->setText("");
        ui->lineEdit_Summa->setText("");
    }
    else {
        ui->label_Info->setText("Siirto epäonnistui");
        // ui->lineEdit_MaksajaId->setText("");
        ui->lineEdit_SaajaId->setText("");
        ui->lineEdit_Summa->setText("");
    }
}
