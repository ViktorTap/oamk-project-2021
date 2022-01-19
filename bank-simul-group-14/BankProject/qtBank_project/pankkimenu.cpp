#include "pankkimenu.h"
#include "ui_pankkimenu.h"

PankkiMenu::PankkiMenu(QString idAsiakas, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PankkiMenu)
{
    // this->idAsiakas = idAsiakas;
    ui->setupUi(this);
    objSaldo = new Saldo(idAsiakas);

    objTalletus = new Talletus(idAsiakas);
    objHae_Lainaa = new Hae_Lainaa(idAsiakas);
    objTilintapahtumat = new Tilintapahtumat(idAsiakas);
    objMaksa_Lasku = new Maksa_Lasku(idAsiakas);
    objNosta_rahaa = new Nosta_rahaa(idAsiakas);

}

PankkiMenu::~PankkiMenu()
{
    delete ui;
}

void PankkiMenu::on_pushButton_Saldo_clicked()
{

    objSaldo->show();
    //hide();

}

void PankkiMenu::on_pushButton_Nosta_rahaa_clicked()
{

    objNosta_rahaa->show();

}

void PankkiMenu::on_pushButton_Talletus_clicked()
{

    objTalletus->show();

}

void PankkiMenu::on_pushButton_Tilintapahtumat_clicked()
{

    objTilintapahtumat->show();

}

void PankkiMenu::on_pushButton_Hae_lainaa_clicked()
{

    objHae_Lainaa->show();

}

void PankkiMenu::on_pushButton_Maksa_lasku_clicked()
{

    objMaksa_Lasku->show();

}

void PankkiMenu::on_pushButton_Kirjaudu_ulos_clicked()
{
    qApp->exit();
}
