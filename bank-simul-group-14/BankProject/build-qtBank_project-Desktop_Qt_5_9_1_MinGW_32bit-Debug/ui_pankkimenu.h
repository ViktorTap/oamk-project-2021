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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PankkiMenu
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_Tervetuloa;
    QPushButton *pushButton_Saldo;
    QPushButton *pushButton_Tilintapahtumat;
    QPushButton *pushButton_Maksa_lasku;
    QPushButton *pushButton_Nosta_rahaa;
    QPushButton *pushButton_Talletus;
    QPushButton *pushButton_Hae_lainaa;
    QPushButton *pushButton_Kirjaudu_ulos;

    void setupUi(QWidget *PankkiMenu)
    {
        if (PankkiMenu->objectName().isEmpty())
            PankkiMenu->setObjectName(QStringLiteral("PankkiMenu"));
        PankkiMenu->resize(800, 800);
        groupBox = new QGroupBox(PankkiMenu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(280, 270, 281, 331));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_Tervetuloa = new QLabel(groupBox);
        label_Tervetuloa->setObjectName(QStringLiteral("label_Tervetuloa"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_Tervetuloa->setFont(font);
        label_Tervetuloa->setAutoFillBackground(false);
        label_Tervetuloa->setFrameShape(QFrame::WinPanel);
        label_Tervetuloa->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_Tervetuloa);

        pushButton_Saldo = new QPushButton(groupBox);
        pushButton_Saldo->setObjectName(QStringLiteral("pushButton_Saldo"));
        pushButton_Saldo->setFont(font);
        pushButton_Saldo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Saldo);

        pushButton_Tilintapahtumat = new QPushButton(groupBox);
        pushButton_Tilintapahtumat->setObjectName(QStringLiteral("pushButton_Tilintapahtumat"));
        pushButton_Tilintapahtumat->setFont(font);
        pushButton_Tilintapahtumat->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Tilintapahtumat);

        pushButton_Maksa_lasku = new QPushButton(groupBox);
        pushButton_Maksa_lasku->setObjectName(QStringLiteral("pushButton_Maksa_lasku"));
        pushButton_Maksa_lasku->setFont(font);
        pushButton_Maksa_lasku->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Maksa_lasku);

        pushButton_Nosta_rahaa = new QPushButton(groupBox);
        pushButton_Nosta_rahaa->setObjectName(QStringLiteral("pushButton_Nosta_rahaa"));
        pushButton_Nosta_rahaa->setFont(font);
        pushButton_Nosta_rahaa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Nosta_rahaa);

        pushButton_Talletus = new QPushButton(groupBox);
        pushButton_Talletus->setObjectName(QStringLiteral("pushButton_Talletus"));
        pushButton_Talletus->setFont(font);
        pushButton_Talletus->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Talletus);

        pushButton_Hae_lainaa = new QPushButton(groupBox);
        pushButton_Hae_lainaa->setObjectName(QStringLiteral("pushButton_Hae_lainaa"));
        pushButton_Hae_lainaa->setFont(font);
        pushButton_Hae_lainaa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Hae_lainaa);

        pushButton_Kirjaudu_ulos = new QPushButton(groupBox);
        pushButton_Kirjaudu_ulos->setObjectName(QStringLiteral("pushButton_Kirjaudu_ulos"));
        pushButton_Kirjaudu_ulos->setFont(font);
        pushButton_Kirjaudu_ulos->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(pushButton_Kirjaudu_ulos);


        retranslateUi(PankkiMenu);

        QMetaObject::connectSlotsByName(PankkiMenu);
    } // setupUi

    void retranslateUi(QWidget *PankkiMenu)
    {
        PankkiMenu->setWindowTitle(QApplication::translate("PankkiMenu", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("PankkiMenu", "Pankkimenu", Q_NULLPTR));
        label_Tervetuloa->setText(QApplication::translate("PankkiMenu", "Tervetuloa", Q_NULLPTR));
        pushButton_Saldo->setText(QApplication::translate("PankkiMenu", "Saldo", Q_NULLPTR));
        pushButton_Tilintapahtumat->setText(QApplication::translate("PankkiMenu", "Tilintapahtumat", Q_NULLPTR));
        pushButton_Maksa_lasku->setText(QApplication::translate("PankkiMenu", "Maksa lasku", Q_NULLPTR));
        pushButton_Nosta_rahaa->setText(QApplication::translate("PankkiMenu", "Nosta rahaa", Q_NULLPTR));
        pushButton_Talletus->setText(QApplication::translate("PankkiMenu", "Talletus", Q_NULLPTR));
        pushButton_Hae_lainaa->setText(QApplication::translate("PankkiMenu", "Hae lainaa", Q_NULLPTR));
        pushButton_Kirjaudu_ulos->setText(QApplication::translate("PankkiMenu", "Kirjaudu ulos", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PankkiMenu: public Ui_PankkiMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKIMENU_H
