#include "virheform.h"
#include "ui_virheform.h"

VirheForm::VirheForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VirheForm)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(close()));
    timer->start(10000);
}

VirheForm::~VirheForm()
{
    delete ui;
}
