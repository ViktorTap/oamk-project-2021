#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // objPankkiMenu = new PankkiMenu;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;

}

void MainWindow::on_pushButton_Kirjaudu_sis_clicked()
{
    QJsonObject json;
    json.insert("korttinumero", ui->lineEdit_Korttinumero->text());
    json.insert("PIN", ui->lineEdit_Pin->text());
    QString site_url="http://localhost:3000/kirjaudu";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic " + data;
    request.setRawHeader( "Authorization", headerData.toLocal8Bit() );
    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished (QNetworkReply*)),
    this, SLOT(loginSlot(QNetworkReply*)));
    reply = loginManager->post(request, QJsonDocument(json).toJson());
}

void MainWindow::loginSlot(QNetworkReply *reply)
{
    QByteArray response_data = reply->readAll();
    qDebug()<<response_data;
    if(response_data == "true"){
        qDebug()<< "Oikea tunnus ...avaa form";
        // objPankki->show();
    }
    else {
        ui->lineEdit_Korttinumero->setText("");
        ui->lineEdit_Pin->setText("");
        qDebug()<<"tunnus ja salasana ei täsmää";
    }
}
