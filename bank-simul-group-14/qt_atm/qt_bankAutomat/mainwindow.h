#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "pankkimenu.h"

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager> // allows our app to sen and receive network replies
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loginSlot (QNetworkReply *reply);
    void on_pushButton_Kirjaudu_sis_clicked();

private:
    Ui::MainWindow *ui;

    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
};

#endif // MAINWINDOW_H
