#include "hae_lainaa.h"
#include "ui_hae_lainaa.h"

Hae_Lainaa::Hae_Lainaa(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Hae_Lainaa)
{
    ui->setupUi(this);
    this->idAsiakas = id;
}

Hae_Lainaa::~Hae_Lainaa()
{
    delete ui;
}

void Hae_Lainaa::on_pushButton_HaeLainaa_clicked()
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

    qDebug()<<oikeaAsiakasId;

    json.insert("id1",oikeaAsiakasId);
    json.insert("summa",ui->lineEdit_Summa->text());

    QString site_url="http://localhost:3000/pankki/hae_laina";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit());

    laina_manager = new QNetworkAccessManager(this);
    connect(laina_manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(haeLainaSlot(QNetworkReply*)));
    reply = laina_manager->post(request, QJsonDocument(json).toJson());
}

void Hae_Lainaa::haeLainaSlot(QNetworkReply *reply)
{
    QByteArray response_data=reply->readAll();
    qDebug()<<response_data;

    if(response_data == "1"){
        ui->label_info->setText("Siirto onnistui");
        ui->lineEdit_Summa->setText("");
    }
    else {
        ui->label_info->setText("Siirto epäonnistui");
        ui->lineEdit_Summa->setText("");
    }
}

void Hae_Lainaa::on_pushButton_Takaisin_clicked()
{
    this->close();
}



