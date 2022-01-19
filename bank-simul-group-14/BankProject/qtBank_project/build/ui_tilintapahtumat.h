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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_HaeTilitapahtumat;
    QPushButton *pushButton_Takaisin;
    QTextEdit *tilitapahtumat_txtBox;

    void setupUi(QWidget *Tilintapahtumat)
    {
        if (Tilintapahtumat->objectName().isEmpty())
            Tilintapahtumat->setObjectName(QStringLiteral("Tilintapahtumat"));
        Tilintapahtumat->resize(400, 391);
        groupBox_Tilintapahtumat = new QGroupBox(Tilintapahtumat);
        groupBox_Tilintapahtumat->setObjectName(QStringLiteral("groupBox_Tilintapahtumat"));
        groupBox_Tilintapahtumat->setGeometry(QRect(30, 30, 331, 331));
        layoutWidget = new QWidget(groupBox_Tilintapahtumat);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 200, 211, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_HaeTilitapahtumat = new QPushButton(layoutWidget);
        pushButton_HaeTilitapahtumat->setObjectName(QStringLiteral("pushButton_HaeTilitapahtumat"));
        QFont font;
        font.setPointSize(16);
        pushButton_HaeTilitapahtumat->setFont(font);

        verticalLayout->addWidget(pushButton_HaeTilitapahtumat);

        pushButton_Takaisin = new QPushButton(layoutWidget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout->addWidget(pushButton_Takaisin);

        tilitapahtumat_txtBox = new QTextEdit(groupBox_Tilintapahtumat);
        tilitapahtumat_txtBox->setObjectName(QStringLiteral("tilitapahtumat_txtBox"));
        tilitapahtumat_txtBox->setGeometry(QRect(10, 20, 311, 171));

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
