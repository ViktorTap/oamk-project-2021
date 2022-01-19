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
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_info;
    QLabel *label;
    QLineEdit *lineEdit_Korttinumero;
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
        MainWindow->resize(800, 800);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(250, 250, 300, 300));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_info = new QLabel(groupBox);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);
        label_info->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_info->setFrameShape(QFrame::WinPanel);
        label_info->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_info);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        label->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label);

        lineEdit_Korttinumero = new QLineEdit(groupBox);
        lineEdit_Korttinumero->setObjectName(QStringLiteral("lineEdit_Korttinumero"));
        lineEdit_Korttinumero->setFont(font);

        verticalLayout->addWidget(lineEdit_Korttinumero);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        label_2->setFrameShape(QFrame::WinPanel);

        verticalLayout->addWidget(label_2);

        lineEdit_Pin = new QLineEdit(groupBox);
        lineEdit_Pin->setObjectName(QStringLiteral("lineEdit_Pin"));
        lineEdit_Pin->setFont(font);
        lineEdit_Pin->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_Pin);

        pushButton_Kirjaudu_sis = new QPushButton(groupBox);
        pushButton_Kirjaudu_sis->setObjectName(QStringLiteral("pushButton_Kirjaudu_sis"));
        pushButton_Kirjaudu_sis->setFont(font);
        pushButton_Kirjaudu_sis->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(pushButton_Kirjaudu_sis);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
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
        groupBox->setTitle(QApplication::translate("MainWindow", "Kirjaudu sis\303\244\303\244n", Q_NULLPTR));
        label_info->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">KORTTINUMERO:</p></body></html>", Q_NULLPTR));
        lineEdit_Korttinumero->setPlaceholderText(QApplication::translate("MainWindow", "Kirjoita korttinumero", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">PIN:</p></body></html>", Q_NULLPTR));
        lineEdit_Pin->setText(QString());
        lineEdit_Pin->setPlaceholderText(QApplication::translate("MainWindow", "Kortin PIN koodi", Q_NULLPTR));
        pushButton_Kirjaudu_sis->setText(QApplication::translate("MainWindow", "KIRJAUDU SIS\303\204\303\204N", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
