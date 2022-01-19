/********************************************************************************
** Form generated from reading UI file 'hae_lainaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAE_LAINAA_H
#define UI_HAE_LAINAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hae_Lainaa
{
public:
    QGroupBox *groupBox_Hae_lainaa;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Hakijan_palkka;
    QLineEdit *lineEdit_Hakijan_palkka;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Laina_suurus;
    QLineEdit *lineEdit_Laina_suurus;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Hae_Lainaa)
    {
        if (Hae_Lainaa->objectName().isEmpty())
            Hae_Lainaa->setObjectName(QStringLiteral("Hae_Lainaa"));
        Hae_Lainaa->resize(400, 300);
        groupBox_Hae_lainaa = new QGroupBox(Hae_Lainaa);
        groupBox_Hae_lainaa->setObjectName(QStringLiteral("groupBox_Hae_lainaa"));
        groupBox_Hae_lainaa->setGeometry(QRect(50, 40, 261, 211));
        layoutWidget = new QWidget(groupBox_Hae_lainaa);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 241, 171));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Hakijan_palkka = new QLabel(layoutWidget);
        label_Hakijan_palkka->setObjectName(QStringLiteral("label_Hakijan_palkka"));
        QFont font;
        font.setPointSize(16);
        label_Hakijan_palkka->setFont(font);

        horizontalLayout->addWidget(label_Hakijan_palkka);

        lineEdit_Hakijan_palkka = new QLineEdit(layoutWidget);
        lineEdit_Hakijan_palkka->setObjectName(QStringLiteral("lineEdit_Hakijan_palkka"));

        horizontalLayout->addWidget(lineEdit_Hakijan_palkka);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Laina_suurus = new QLabel(layoutWidget);
        label_Laina_suurus->setObjectName(QStringLiteral("label_Laina_suurus"));
        label_Laina_suurus->setFont(font);

        horizontalLayout_2->addWidget(label_Laina_suurus);

        lineEdit_Laina_suurus = new QLineEdit(layoutWidget);
        lineEdit_Laina_suurus->setObjectName(QStringLiteral("lineEdit_Laina_suurus"));

        horizontalLayout_2->addWidget(lineEdit_Laina_suurus);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Ok = new QPushButton(layoutWidget);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setFont(font);

        verticalLayout->addWidget(pushButton_Ok);

        pushButton_Takaisin = new QPushButton(layoutWidget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);


        retranslateUi(Hae_Lainaa);

        QMetaObject::connectSlotsByName(Hae_Lainaa);
    } // setupUi

    void retranslateUi(QWidget *Hae_Lainaa)
    {
        Hae_Lainaa->setWindowTitle(QApplication::translate("Hae_Lainaa", "Form", Q_NULLPTR));
        groupBox_Hae_lainaa->setTitle(QApplication::translate("Hae_Lainaa", "Hae_lainaa", Q_NULLPTR));
        label_Hakijan_palkka->setText(QApplication::translate("Hae_Lainaa", "  Hakijan palkka", Q_NULLPTR));
        label_Laina_suurus->setText(QApplication::translate("Hae_Lainaa", "  Laina suurus", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("Hae_Lainaa", "OK", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Hae_Lainaa", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hae_Lainaa: public Ui_Hae_Lainaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAE_LAINAA_H
