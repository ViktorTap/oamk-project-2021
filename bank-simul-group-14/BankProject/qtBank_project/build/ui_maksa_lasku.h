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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Maksaja;
    QLineEdit *lineEdit_Maksaja;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Saaja;
    QLineEdit *lineEdit_Tilinnumero;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Summa;
    QLineEdit *lineEdit_Summa;
    QPushButton *pushButton_Maksa;
    QPushButton *pushButton_Takaisin;

    void setupUi(QWidget *Maksa_Lasku)
    {
        if (Maksa_Lasku->objectName().isEmpty())
            Maksa_Lasku->setObjectName(QStringLiteral("Maksa_Lasku"));
        Maksa_Lasku->resize(400, 300);
        groupBox_Maksa_lasku = new QGroupBox(Maksa_Lasku);
        groupBox_Maksa_lasku->setObjectName(QStringLiteral("groupBox_Maksa_lasku"));
        groupBox_Maksa_lasku->setGeometry(QRect(50, 0, 241, 261));
        layoutWidget = new QWidget(groupBox_Maksa_lasku);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 221, 176));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Maksaja = new QLabel(layoutWidget);
        label_Maksaja->setObjectName(QStringLiteral("label_Maksaja"));
        QFont font;
        font.setPointSize(16);
        label_Maksaja->setFont(font);

        horizontalLayout_3->addWidget(label_Maksaja);

        lineEdit_Maksaja = new QLineEdit(layoutWidget);
        lineEdit_Maksaja->setObjectName(QStringLiteral("lineEdit_Maksaja"));

        horizontalLayout_3->addWidget(lineEdit_Maksaja);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Saaja = new QLabel(layoutWidget);
        label_Saaja->setObjectName(QStringLiteral("label_Saaja"));
        label_Saaja->setFont(font);

        horizontalLayout_2->addWidget(label_Saaja);

        lineEdit_Tilinnumero = new QLineEdit(layoutWidget);
        lineEdit_Tilinnumero->setObjectName(QStringLiteral("lineEdit_Tilinnumero"));

        horizontalLayout_2->addWidget(lineEdit_Tilinnumero);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Summa = new QLabel(layoutWidget);
        label_Summa->setObjectName(QStringLiteral("label_Summa"));
        label_Summa->setFont(font);

        horizontalLayout->addWidget(label_Summa);

        lineEdit_Summa = new QLineEdit(layoutWidget);
        lineEdit_Summa->setObjectName(QStringLiteral("lineEdit_Summa"));

        horizontalLayout->addWidget(lineEdit_Summa);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Maksa = new QPushButton(layoutWidget);
        pushButton_Maksa->setObjectName(QStringLiteral("pushButton_Maksa"));
        pushButton_Maksa->setFont(font);

        verticalLayout_2->addWidget(pushButton_Maksa);

        pushButton_Takaisin = new QPushButton(layoutWidget);
        pushButton_Takaisin->setObjectName(QStringLiteral("pushButton_Takaisin"));
        pushButton_Takaisin->setFont(font);

        verticalLayout_2->addWidget(pushButton_Takaisin);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Maksa_Lasku);

        QMetaObject::connectSlotsByName(Maksa_Lasku);
    } // setupUi

    void retranslateUi(QWidget *Maksa_Lasku)
    {
        Maksa_Lasku->setWindowTitle(QApplication::translate("Maksa_Lasku", "Form", Q_NULLPTR));
        groupBox_Maksa_lasku->setTitle(QApplication::translate("Maksa_Lasku", "Maksa_lasku", Q_NULLPTR));
        label_Maksaja->setText(QApplication::translate("Maksa_Lasku", "Maksaja", Q_NULLPTR));
        label_Saaja->setText(QApplication::translate("Maksa_Lasku", "Saaja", Q_NULLPTR));
        label_Summa->setText(QApplication::translate("Maksa_Lasku", "   Summa", Q_NULLPTR));
        pushButton_Maksa->setText(QApplication::translate("Maksa_Lasku", "Maksa", Q_NULLPTR));
        pushButton_Takaisin->setText(QApplication::translate("Maksa_Lasku", "Takaisin", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Maksa_Lasku: public Ui_Maksa_Lasku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKSA_LASKU_H
