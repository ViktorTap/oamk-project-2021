/********************************************************************************
** Form generated from reading UI file 'nosta_rahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTA_RAHAA_H
#define UI_NOSTA_RAHAA_H

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

class Ui_Nosta_rahaa
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_info;
    QLabel *label_Nostettava_summa;
    QLineEdit *lineEdit_Summa;
    QPushButton *pushButton_Nosto;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Nosta_rahaa)
    {
        if (Nosta_rahaa->objectName().isEmpty())
            Nosta_rahaa->setObjectName(QStringLiteral("Nosta_rahaa"));
        Nosta_rahaa->resize(800, 800);
        Nosta_rahaa->setAutoFillBackground(false);
        Nosta_rahaa->setStyleSheet(QStringLiteral(""));
        groupBox = new QGroupBox(Nosta_rahaa);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(250, 250, 300, 300));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        groupBox->setInputMethodHints(Qt::ImhNone);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_info = new QLabel(groupBox);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        label_info->setFont(font);
        label_info->setAutoFillBackground(false);
        label_info->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_info->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label_info);

        label_Nostettava_summa = new QLabel(groupBox);
        label_Nostettava_summa->setObjectName(QStringLiteral("label_Nostettava_summa"));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_Nostettava_summa->setFont(font1);
        label_Nostettava_summa->setAutoFillBackground(false);
        label_Nostettava_summa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_Nostettava_summa->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label_Nostettava_summa);

        lineEdit_Summa = new QLineEdit(groupBox);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));
        lineEdit_Summa->setFont(font);
        lineEdit_Summa->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(lineEdit_Summa);

        pushButton_Nosto = new QPushButton(groupBox);
        pushButton_Nosto->setObjectName(QStringLiteral("pushButton_Nosto"));
        pushButton_Nosto->setFont(font1);

        verticalLayout->addWidget(pushButton_Nosto);

        pushButton_Takaisin = new QPushButton(groupBox);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font1);
        pushButton_Takaisin->setAutoFillBackground(false);
        pushButton_Takaisin->setFlat(false);

        verticalLayout->addWidget(pushButton_Takaisin);


        retranslateUi(Nosta_rahaa);

        QMetaObject::connectSlotsByName(Nosta_rahaa);
    } // setupUi

    void retranslateUi(QWidget *Nosta_rahaa)
    {
        Nosta_rahaa->setWindowTitle(QApplication::translate("Nosta_rahaa", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Nosta_rahaa", "Nosta_rahaa", Q_NULLPTR));
        label_info->setText(QString());
        label_Nostettava_summa->setText(QApplication::translate("Nosta_rahaa", "<html><head/><body><p align=\"center\">Nostettava summa:</p></body></html>", Q_NULLPTR));
        pushButton_Nosto->setText(QApplication::translate("Nosta_rahaa", "Hyv\303\244ksy", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Nosta_rahaa", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Nosta_rahaa: public Ui_Nosta_rahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTA_RAHAA_H
