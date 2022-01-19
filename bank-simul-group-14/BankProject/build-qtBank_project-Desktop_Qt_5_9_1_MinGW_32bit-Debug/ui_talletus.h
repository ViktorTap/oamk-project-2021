/********************************************************************************
** Form generated from reading UI file 'talletus.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALLETUS_H
#define UI_TALLETUS_H

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

class Ui_Talletus
{
public:
    QGroupBox *groupBox_Talletus;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_info;
    QLineEdit *lineEdit_Summa;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Talletus)
    {
        if (Talletus->objectName().isEmpty())
            Talletus->setObjectName(QStringLiteral("Talletus"));
        Talletus->resize(800, 800);
        groupBox_Talletus = new QGroupBox(Talletus);
        groupBox_Talletus->setObjectName(QStringLiteral("groupBox_Talletus"));
        groupBox_Talletus->setGeometry(QRect(250, 250, 300, 300));
        groupBox_Talletus->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_Talletus);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_info = new QLabel(groupBox_Talletus);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);
        label_info->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_info->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label_info);

        lineEdit_Summa = new QLineEdit(groupBox_Talletus);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));
        lineEdit_Summa->setFont(font);
        lineEdit_Summa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_Summa);

        pushButton_Ok = new QPushButton(groupBox_Talletus);
        pushButton_Ok->setObjectName(QStringLiteral("pushButton_Ok"));
        pushButton_Ok->setFont(font);

        verticalLayout->addWidget(pushButton_Ok);

        pushButton_Takaisin = new QPushButton(groupBox_Talletus);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Talletus);

        QMetaObject::connectSlotsByName(Talletus);
    } // setupUi

    void retranslateUi(QWidget *Talletus)
    {
        Talletus->setWindowTitle(QApplication::translate("Talletus", "Form", Q_NULLPTR));
        groupBox_Talletus->setTitle(QApplication::translate("Talletus", "Talletus", Q_NULLPTR));
        label_info->setText(QApplication::translate("Talletus", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        lineEdit_Summa->setPlaceholderText(QApplication::translate("Talletus", "Kirjoita summa", Q_NULLPTR));
        pushButton_Ok->setText(QApplication::translate("Talletus", "TALLETUS", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Talletus", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Talletus: public Ui_Talletus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALLETUS_H
