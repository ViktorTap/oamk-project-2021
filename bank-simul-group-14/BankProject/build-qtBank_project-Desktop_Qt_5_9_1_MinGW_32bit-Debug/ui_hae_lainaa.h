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
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_info;
    QLabel *label_Laina_suurus;
    QLineEdit *lineEdit_Summa;
    QPushButton *pushButton_HaeLainaa;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Hae_Lainaa)
    {
        if (Hae_Lainaa->objectName().isEmpty())
            Hae_Lainaa->setObjectName(QStringLiteral("Hae_Lainaa"));
        Hae_Lainaa->resize(800, 800);
        groupBox_Hae_lainaa = new QGroupBox(Hae_Lainaa);
        groupBox_Hae_lainaa->setObjectName(QStringLiteral("groupBox_Hae_lainaa"));
        groupBox_Hae_lainaa->setGeometry(QRect(250, 250, 300, 300));
        verticalLayout_3 = new QVBoxLayout(groupBox_Hae_lainaa);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_info = new QLabel(groupBox_Hae_lainaa);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);
        label_info->setFrameShape(QFrame::WinPanel);

        verticalLayout_2->addWidget(label_info);

        label_Laina_suurus = new QLabel(groupBox_Hae_lainaa);
        label_Laina_suurus->setObjectName(QStringLiteral("label_Laina_suurus"));
        label_Laina_suurus->setFont(font);
        label_Laina_suurus->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        label_Laina_suurus->setFrameShape(QFrame::WinPanel);

        verticalLayout_2->addWidget(label_Laina_suurus);

        lineEdit_Summa = new QLineEdit(groupBox_Hae_lainaa);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));
        lineEdit_Summa->setFont(font);

        verticalLayout_2->addWidget(lineEdit_Summa);


        verticalLayout->addLayout(verticalLayout_2);

        pushButton_HaeLainaa = new QPushButton(groupBox_Hae_lainaa);
        pushButton_HaeLainaa->setObjectName(QStringLiteral("pushButton_HaeLainaa"));
        pushButton_HaeLainaa->setFont(font);

        verticalLayout->addWidget(pushButton_HaeLainaa);

        pushButton_Takaisin = new QPushButton(groupBox_Hae_lainaa);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);


        verticalLayout_3->addLayout(verticalLayout);


        retranslateUi(Hae_Lainaa);

        QMetaObject::connectSlotsByName(Hae_Lainaa);
    } // setupUi

    void retranslateUi(QWidget *Hae_Lainaa)
    {
        Hae_Lainaa->setWindowTitle(QApplication::translate("Hae_Lainaa", "Form", Q_NULLPTR));
        groupBox_Hae_lainaa->setTitle(QApplication::translate("Hae_Lainaa", "Hae_lainaa", Q_NULLPTR));
        label_info->setText(QApplication::translate("Hae_Lainaa", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        label_Laina_suurus->setText(QApplication::translate("Hae_Lainaa", "<html><head/><body><p align=\"center\">Haettava summa:</p></body></html>", Q_NULLPTR));
        lineEdit_Summa->setPlaceholderText(QApplication::translate("Hae_Lainaa", "Kirjoita haettava summa", Q_NULLPTR));
        pushButton_HaeLainaa->setText(QApplication::translate("Hae_Lainaa", "Hae lainaa", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Hae_Lainaa", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Hae_Lainaa: public Ui_Hae_Lainaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAE_LAINAA_H
