/********************************************************************************
** Form generated from reading UI file 'maksa_lasku.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKSA_LASKU_H
#define UI_MAKSA_LASKU_H

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

class Ui_Maksa_Lasku
{
public:
    QGroupBox *groupBox_Maksa_lasku;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Info;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Saaja;
    QLineEdit *lineEdit_SaajaId;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Summa;
    QLineEdit *lineEdit_Summa;
    QPushButton *pushButton_Debit;
    QPushButton *pushButton_Credit;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Maksa_Lasku)
    {
        if (Maksa_Lasku->objectName().isEmpty())
            Maksa_Lasku->setObjectName(QStringLiteral("Maksa_Lasku"));
        Maksa_Lasku->resize(800, 800);
        groupBox_Maksa_lasku = new QGroupBox(Maksa_Lasku);
        groupBox_Maksa_lasku->setObjectName(QStringLiteral("groupBox_Maksa_lasku"));
        groupBox_Maksa_lasku->setGeometry(QRect(250, 250, 300, 300));
        groupBox_Maksa_lasku->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        verticalLayout_4 = new QVBoxLayout(groupBox_Maksa_lasku);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_Info = new QLabel(groupBox_Maksa_lasku);
        label_Info->setObjectName(QStringLiteral("label_Info"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_Info->setFont(font);
        label_Info->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_Info->setFrameShape(QFrame::WinPanel);

        verticalLayout_4->addWidget(label_Info);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Saaja = new QLabel(groupBox_Maksa_lasku);
        label_Saaja->setObjectName(QStringLiteral("label_Saaja"));
        label_Saaja->setFont(font);
        label_Saaja->setFrameShape(QFrame::WinPanel);

        horizontalLayout_2->addWidget(label_Saaja);

        lineEdit_SaajaId = new QLineEdit(groupBox_Maksa_lasku);
        lineEdit_SaajaId->setObjectName(QStringLiteral("lineEdit_SaajaId"));
        lineEdit_SaajaId->setFont(font);
        lineEdit_SaajaId->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lineEdit_SaajaId);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Summa = new QLabel(groupBox_Maksa_lasku);
        label_Summa->setObjectName(QStringLiteral("label_Summa"));
        label_Summa->setFont(font);
        label_Summa->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        label_Summa->setFrameShape(QFrame::WinPanel);

        horizontalLayout->addWidget(label_Summa);

        lineEdit_Summa = new QLineEdit(groupBox_Maksa_lasku);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));
        lineEdit_Summa->setFont(font);
        lineEdit_Summa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Summa);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_Debit = new QPushButton(groupBox_Maksa_lasku);
        pushButton_Debit->setObjectName(QStringLiteral("pushButton_Debit"));
        pushButton_Debit->setFont(font);

        verticalLayout->addWidget(pushButton_Debit);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Credit = new QPushButton(groupBox_Maksa_lasku);
        pushButton_Credit->setObjectName(QStringLiteral("pushButton_Credit"));
        pushButton_Credit->setFont(font);

        verticalLayout_2->addWidget(pushButton_Credit);

        pushButton_Takaisin = new QPushButton(groupBox_Maksa_lasku);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout_2->addWidget(pushButton_Takaisin);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Maksa_Lasku);

        QMetaObject::connectSlotsByName(Maksa_Lasku);
    } // setupUi

    void retranslateUi(QWidget *Maksa_Lasku)
    {
        Maksa_Lasku->setWindowTitle(QApplication::translate("Maksa_Lasku", "Form", Q_NULLPTR));
        groupBox_Maksa_lasku->setTitle(QApplication::translate("Maksa_Lasku", "Maksa_lasku", Q_NULLPTR));
        label_Info->setText(QApplication::translate("Maksa_Lasku", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        label_Saaja->setText(QApplication::translate("Maksa_Lasku", "<html><head/><body><p>Saaja:</p></body></html>", Q_NULLPTR));
        lineEdit_SaajaId->setPlaceholderText(QApplication::translate("Maksa_Lasku", "Kirjoita tilin ID", Q_NULLPTR));
        label_Summa->setText(QApplication::translate("Maksa_Lasku", "<html><head/><body><p>Summa:</p></body></html>", Q_NULLPTR));
        lineEdit_Summa->setPlaceholderText(QApplication::translate("Maksa_Lasku", "Kirjoita summa", Q_NULLPTR));
        pushButton_Debit->setText(QApplication::translate("Maksa_Lasku", "Maksa Debit kortilla", Q_NULLPTR));
        pushButton_Credit->setText(QApplication::translate("Maksa_Lasku", "Maksa Credit kortilla", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Maksa_Lasku", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Maksa_Lasku: public Ui_Maksa_Lasku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKSA_LASKU_H
