/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_Kirjaudu_sis;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Korttinumero;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Pin;
    QPushButton *pushButton_Kirjaudu_sis;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(681, 576);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_Kirjaudu_sis = new QGroupBox(centralWidget);
        groupBox_Kirjaudu_sis->setObjectName(QStringLiteral("groupBox_Kirjaudu_sis"));
        groupBox_Kirjaudu_sis->setGeometry(QRect(140, 180, 353, 146));
        verticalLayout_2 = new QVBoxLayout(groupBox_Kirjaudu_sis);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox_Kirjaudu_sis);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit_Korttinumero = new QLineEdit(groupBox_Kirjaudu_sis);
        lineEdit_Korttinumero->setObjectName(QStringLiteral("lineEdit_Korttinumero"));
        lineEdit_Korttinumero->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_Korttinumero);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox_Kirjaudu_sis);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit_Pin = new QLineEdit(groupBox_Kirjaudu_sis);
        lineEdit_Pin->setObjectName(QStringLiteral("lineEdit_Pin"));
        lineEdit_Pin->setFont(font);
        lineEdit_Pin->setAutoFillBackground(false);
        lineEdit_Pin->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEdit_Pin->setClearButtonEnabled(false);

        horizontalLayout->addWidget(lineEdit_Pin);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_Kirjaudu_sis = new QPushButton(groupBox_Kirjaudu_sis);
        pushButton_Kirjaudu_sis->setObjectName(QStringLiteral("pushButton_Kirjaudu_sis"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        pushButton_Kirjaudu_sis->setFont(font1);

        verticalLayout_2->addWidget(pushButton_Kirjaudu_sis);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 681, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox_Kirjaudu_sis->setTitle(QApplication::translate("MainWindow", "Kirjaudu_sis", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Korttinumero", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "PIN", Q_NULLPTR));
        pushButton_Kirjaudu_sis->setText(QApplication::translate("MainWindow", "Kirjaudu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
