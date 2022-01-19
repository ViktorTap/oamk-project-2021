#include "talletus.h"
#include "ui_talletus.h"

Talletus::Talletus(QString id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Talletus)
{
    ui->setupUi(this);
    this->idAsiakas = id;
}

Talletus::~Talletus()
{
    delete ui;
}

void Talletus::on_pushButton_Ok_clicked()
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

    QString site_url="http://localhost:3000/pankki/talletus";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit());

    talletus_manager = new QNetworkAccessManager(this);
    connect(talletus_manager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(talletusSlot(QNetworkReply*)));
    reply = talletus_manager->post(request, QJsonDocument(json).toJson());
}

void Talletus::talletusSlot(QNetworkReply *reply)
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

void Talletus::on_pushButton_Takaisin_clicked()
{
    this->close();
}

