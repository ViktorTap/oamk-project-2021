/********************************************************************************
** Form generated from reading UI file 'pankkimenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANKKIMENU_H
#define UI_PANKKIMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PankkiMenu
{
public:
    QGroupBox *groupBox;
    QLabel *label_Tervetuloa;
    QPushButton *pushButton_Saldo;
    QPushButton *pushButton_Nosta_rahaa;
    QPushButton *pushButton_Talletus;
    QPushButton *pushButton_Tilintapahtumat;
    QPushButton *pushButton_Hae_lainaa;
    QPushButton *pushButton_Maksa_lasku;
    QPushButton *pushButton_Kirjaudu_ulos;

    void setupUi(QWidget *PankkiMenu)
    {
        if (PankkiMenu->objectName().isEmpty())
            PankkiMenu->setObjectName(QStringLiteral("PankkiMenu"));
        PankkiMenu->resize(400, 300);
        groupBox = new QGroupBox(PankkiMenu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 10, 251, 281));
        label_Tervetuloa = new QLabel(groupBox);
        label_Tervetuloa->setObjectName(QStringLiteral("label_Tervetuloa"));
        label_Tervetuloa->setGeometry(QRect(50, 20, 151, 31));
        QFont font;
        font.setPointSize(16);
        label_Tervetuloa->setFont(font);
        pushButton_Saldo = new QPushButton(groupBox);
        pushButton_Saldo->setObjectName(QStringLiteral("pushButton_Saldo"));
        pushButton_Saldo->setGeometry(QRect(10, 50, 231, 31));
        pushButton_Saldo->setFont(font);
        pushButton_Nosta_rahaa = new QPushButton(groupBox);
        pushButton_Nosta_rahaa->setObjectName(QStringLiteral("pushButton_Nosta_rahaa"));
        pushButton_Nosta_rahaa->setGeometry(QRect(10, 80, 231, 31));
        pushButton_Nosta_rahaa->setFont(font);
        pushButton_Talletus = new QPushButton(groupBox);
        pushButton_Talletus->setObjectName(QStringLiteral("pushButton_Talletus"));
        pushButton_Talletus->setGeometry(QRect(10, 110, 231, 31));
        pushButton_Talletus->setFont(font);
        pushButton_Tilintapahtumat = new QPushButton(groupBox);
        pushButton_Tilintapahtumat->setObjectName(QStringLiteral("pushButton_Tilintapahtumat"));
        pushButton_Tilintapahtumat->setGeometry(QRect(10, 140, 231, 31));
        pushButton_Tilintapahtumat->setFont(font);
        pushButton_Hae_lainaa = new QPushButton(groupBox);
        pushButton_Hae_lainaa->setObjectName(QStringLiteral("pushButton_Hae_lainaa"));
        pushButton_Hae_lainaa->setGeometry(QRect(10, 170, 231, 31));
        pushButton_Hae_lainaa->setFont(font);
        pushButton_Maksa_lasku = new QPushButton(groupBox);
        pushButton_Maksa_lasku->setObjectName(QStringLiteral("pushButton_Maksa_lasku"));
        pushButton_Maksa_lasku->setGeometry(QRect(10, 200, 231, 31));
        pushButton_Maksa_lasku->setFont(font);
        pushButton_Kirjaudu_ulos = new QPushButton(groupBox);
        pushButton_Kirjaudu_ulos->setObjectName(QStringLiteral("pushButton_Kirjaudu_ulos"));
        pushButton_Kirjaudu_ulos->setGeometry(QRect(10, 230, 231, 31));
        pushButton_Kirjaudu_ulos->setFont(font);

        retranslateUi(PankkiMenu);

        QMetaObject::connectSlotsByName(PankkiMenu);
    } // setupUi

    void retranslateUi(QWidget *PankkiMenu)
    {
        PankkiMenu->setWindowTitle(QApplication::translate("PankkiMenu", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PankkiMenu", "Pankkimenu", Q_NULLPTR));
        label_Tervetuloa->setText(QApplication::translate("PankkiMenu", "        Tervetuloa", Q_NULLPTR));
        pushButton_Saldo->setText(QApplication::translate("PankkiMenu", "Saldo", Q_NULLPTR));
        pushButton_Nosta_rahaa->setText(QApplication::translate("PankkiMenu", "Nosta rahaa", Q_NULLPTR));
        pushButton_Talletus->setText(QApplication::translate("PankkiMenu", "Talletus", Q_NULLPTR));
        pushButton_Tilintapahtumat->setText(QApplication::translate("PankkiMenu", "Tilintapahtumat", Q_NULLPTR));
        pushButton_Hae_lainaa->setText(QApplication::translate("PankkiMenu", "Hae lainaa", Q_NULLPTR));
        pushButton_Maksa_lasku->setText(QApplication::translate("PankkiMenu", "Maksa lasku", Q_NULLPTR));
        pushButton_Kirjaudu_ulos->setText(QApplication::translate("PankkiMenu", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PankkiMenu: public Ui_PankkiMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKIMENU_H
