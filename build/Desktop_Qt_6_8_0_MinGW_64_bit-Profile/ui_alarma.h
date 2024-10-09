/********************************************************************************
** Form generated from reading UI file 'alarma.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMA_H
#define UI_ALARMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AlarmaDialog
{
public:
    QLabel *messageLabel;
    QPushButton *stopButton;
    QPushButton *snoozeButton;

    void setupUi(QDialog *AlarmaDialog)
    {
        if (AlarmaDialog->objectName().isEmpty())
            AlarmaDialog->setObjectName("AlarmaDialog");
        AlarmaDialog->resize(400, 195);
        messageLabel = new QLabel(AlarmaDialog);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setGeometry(QRect(0, 10, 401, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro Medium")});
        font.setPointSize(15);
        messageLabel->setFont(font);
        messageLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stopButton = new QPushButton(AlarmaDialog);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(79, 120, 101, 51));
        QFont font1;
        font1.setPointSize(14);
        stopButton->setFont(font1);
        stopButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        snoozeButton = new QPushButton(AlarmaDialog);
        snoozeButton->setObjectName("snoozeButton");
        snoozeButton->setGeometry(QRect(220, 120, 111, 51));
        snoozeButton->setFont(font1);
        snoozeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        retranslateUi(AlarmaDialog);

        QMetaObject::connectSlotsByName(AlarmaDialog);
    } // setupUi

    void retranslateUi(QDialog *AlarmaDialog)
    {
        AlarmaDialog->setWindowTitle(QCoreApplication::translate("AlarmaDialog", "Dialog", nullptr));
        messageLabel->setText(QCoreApplication::translate("AlarmaDialog", "ALARMA", nullptr));
        stopButton->setText(QCoreApplication::translate("AlarmaDialog", "Detener", nullptr));
        snoozeButton->setText(QCoreApplication::translate("AlarmaDialog", "Posponer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlarmaDialog: public Ui_AlarmaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMA_H
