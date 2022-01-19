/********************************************************************************
** Form generated from reading UI file 'tilintapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILINTAPAHTUMAT_H
#define UI_TILINTAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tilintapahtumat
{
public:
    QGroupBox *groupBox_Tilintapahtumat;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *tilitapahtumat_txtBox;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_HaeTilitapahtumat;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Tilintapahtumat)
    {
        if (Tilintapahtumat->objectName().isEmpty())
            Tilintapahtumat->setObjectName(QStringLiteral("Tilintapahtumat"));
        Tilintapahtumat->resize(800, 800);
        groupBox_Tilintapahtumat = new QGroupBox(Tilintapahtumat);
        groupBox_Tilintapahtumat->setObjectName(QStringLiteral("groupBox_Tilintapahtumat"));
        groupBox_Tilintapahtumat->setGeometry(QRect(250, 250, 300, 300));
        groupBox_Tilintapahtumat->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        verticalLayout_2 = new QVBoxLayout(groupBox_Tilintapahtumat);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tilitapahtumat_txtBox = new QTextEdit(groupBox_Tilintapahtumat);
        tilitapahtumat_txtBox->setObjectName(QStringLiteral("tilitapahtumat_txtBox"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setBold(true);
        font.setWeight(75);
        tilitapahtumat_txtBox->setFont(font);
        tilitapahtumat_txtBox->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(tilitapahtumat_txtBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_HaeTilitapahtumat = new QPushButton(groupBox_Tilintapahtumat);
        pushButton_HaeTilitapahtumat->setObjectName(QStringLiteral("pushButton_HaeTilitapahtumat"));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_HaeTilitapahtumat->setFont(font1);

        verticalLayout->addWidget(pushButton_HaeTilitapahtumat);

        pushButton_Takaisin = new QPushButton(groupBox_Tilintapahtumat);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font1);

        verticalLayout->addWidget(pushButton_Takaisin);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Tilintapahtumat);

        QMetaObject::connectSlotsByName(Tilintapahtumat);
    } // setupUi

    void retranslateUi(QWidget *Tilintapahtumat)
    {
        Tilintapahtumat->setWindowTitle(QApplication::translate("Tilintapahtumat", "Form", Q_NULLPTR));
        groupBox_Tilintapahtumat->setTitle(QApplication::translate("Tilintapahtumat", "Tilintapahtumat", Q_NULLPTR));
        pushButton_HaeTilitapahtumat->setText(QApplication::translate("Tilintapahtumat", "Hae tilitapahtumat", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Tilintapahtumat", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Tilintapahtumat: public Ui_Tilintapahtumat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILINTAPAHTUMAT_H
