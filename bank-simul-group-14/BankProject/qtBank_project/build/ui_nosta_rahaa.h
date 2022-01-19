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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Nostettava_summa;
    QLineEdit *lineEdit_Nostettava_summa;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Nosta_rahaa)
    {
        if (Nosta_rahaa->objectName().isEmpty())
            Nosta_rahaa->setObjectName(QStringLiteral("Nosta_rahaa"));
        Nosta_rahaa->resize(400, 300);
        groupBox = new QGroupBox(Nosta_rahaa);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 281, 161));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 261, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Nostettava_summa = new QLabel(layoutWidget);
        label_Nostettava_summa->setObjectName(QStringLiteral("label_Nostettava_summa"));
        QFont font;
        font.setPointSize(16);
        label_Nostettava_summa->setFont(font);

        horizontalLayout->addWidget(label_Nostettava_summa);

        lineEdit_Nostettava_summa = new QLineEdit(layoutWidget);
        lineEdit_Nostettava_summa->setObjectName(QStringLiteral("lineEdit_Nostettava_summa"));

        horizontalLayout->addWidget(lineEdit_Nostettava_summa);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_Takaisin = new QPushButton(layoutWidget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);


        retranslateUi(Nosta_rahaa);

        QMetaObject::connectSlotsByName(Nosta_rahaa);
    } // setupUi

    void retranslateUi(QWidget *Nosta_rahaa)
    {
        Nosta_rahaa->setWindowTitle(QApplication::translate("Nosta_rahaa", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Nosta_rahaa", "Nosta_rahaa", Q_NULLPTR));
        label_Nostettava_summa->setText(QApplication::translate("Nosta_rahaa", "Nostettava summa", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Nosta_rahaa", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Nosta_rahaa: public Ui_Nosta_rahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTA_RAHAA_H
