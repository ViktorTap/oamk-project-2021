/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Saldo
{
public:
    QGroupBox *groupBox_Saldo;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Tilin_saldo;
    QTextEdit *text_Saldo;
    QPushButton *pushButton_HaeSaldo;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Saldo)
    {
        if (Saldo->objectName().isEmpty())
            Saldo->setObjectName(QStringLiteral("Saldo"));
        Saldo->resize(800, 800);
        groupBox_Saldo = new QGroupBox(Saldo);
        groupBox_Saldo->setObjectName(QStringLiteral("groupBox_Saldo"));
        groupBox_Saldo->setGeometry(QRect(250, 250, 300, 300));
        groupBox_Saldo->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_Saldo);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Tilin_saldo = new QLabel(groupBox_Saldo);
        label_Tilin_saldo->setObjectName(QStringLiteral("label_Tilin_saldo"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_Tilin_saldo->setFont(font);
        label_Tilin_saldo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_Tilin_saldo->setFrameShape(QFrame::WinPanel);

        horizontalLayout->addWidget(label_Tilin_saldo);

        text_Saldo = new QTextEdit(groupBox_Saldo);
        text_Saldo->setObjectName(QStringLiteral("text_Saldo"));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(16);
        text_Saldo->setFont(font1);
        text_Saldo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        text_Saldo->setFrameShape(QFrame::WinPanel);
        text_Saldo->setFrameShadow(QFrame::Plain);

        horizontalLayout->addWidget(text_Saldo);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_HaeSaldo = new QPushButton(groupBox_Saldo);
        pushButton_HaeSaldo->setObjectName(QStringLiteral("pushButton_HaeSaldo"));
        pushButton_HaeSaldo->setFont(font);

        verticalLayout->addWidget(pushButton_HaeSaldo);

        pushButton_Takaisin = new QPushButton(groupBox_Saldo);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(Saldo);

        QMetaObject::connectSlotsByName(Saldo);
    } // setupUi

    void retranslateUi(QWidget *Saldo)
    {
        Saldo->setWindowTitle(QApplication::translate("Saldo", "Form", Q_NULLPTR));
        groupBox_Saldo->setTitle(QApplication::translate("Saldo", "Saldo", Q_NULLPTR));
        label_Tilin_saldo->setText(QApplication::translate("Saldo", "<html><head/><body><p align=\"center\">Tilin tiedot</p><p align=\"center\">ja saldo:</p></body></html>", Q_NULLPTR));
        pushButton_HaeSaldo->setText(QApplication::translate("Saldo", "Hae Saldo", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Saldo", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Saldo: public Ui_Saldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
