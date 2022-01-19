#ifndef VIRHEFORM_H
#define VIRHEFORM_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class VirheForm;
}

class VirheForm : public QDialog
{
    Q_OBJECT

public:
    explicit VirheForm(QWidget *parent = 0);
    ~VirheForm();

private:
    Ui::VirheForm *ui;

    QTimer *timer;
};

#endif // VIRHEFORM_H
