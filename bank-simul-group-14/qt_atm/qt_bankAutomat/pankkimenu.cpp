#include "pankkimenu.h"

PankkiMenu::PankkiMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PankkiMenu)
{

}

PankkiMenu::~PankkiMenu()
{
    delete Ui;
}
