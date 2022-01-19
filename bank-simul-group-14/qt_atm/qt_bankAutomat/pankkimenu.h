#ifndef PANKKIMENU_H
#define PANKKIMENU_H

#include <QDialog>
#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui { class PankkiMenu; }

class PankkiMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit PankkiMenu(QWidget *parent = 0);
    ~PankkiMenu();
};

#endif // PANKKIMENU_H
