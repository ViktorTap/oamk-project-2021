/********************************************************************************
** Form generated from reading UI file 'virheform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRHEFORM_H
#define UI_VIRHEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_VirheForm
{
public:
    QTextEdit *virheIkkuna;

    void setupUi(QDialog *VirheForm)
    {
        if (VirheForm->objectName().isEmpty())
            VirheForm->setObjectName(QStringLiteral("VirheForm"));
        VirheForm->resize(800, 800);
        virheIkkuna = new QTextEdit(VirheForm);
        virheIkkuna->setObjectName(QStringLiteral("virheIkkuna"));
        virheIkkuna->setGeometry(QRect(180, 250, 450, 300));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setBold(true);
        font.setWeight(75);
        virheIkkuna->setFont(font);
        virheIkkuna->setLayoutDirection(Qt::RightToLeft);
        virheIkkuna->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        virheIkkuna->setReadOnly(true);

        retranslateUi(VirheForm);

        QMetaObject::connectSlotsByName(VirheForm);
    } // setupUi

    void retranslateUi(QDialog *VirheForm)
    {
        VirheForm->setWindowTitle(QApplication::translate("VirheForm", "Dialog", Q_NULLPTR));
        virheIkkuna->setHtml(QApplication::translate("VirheForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:36pt; font-weight:400;\">Korttisi on n"
                        "yt lukittu.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:36pt; font-weight:400;\">Ota yhteytt\303\244 asiakaspalveluun.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VirheForm: public Ui_VirheForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRHEFORM_H
