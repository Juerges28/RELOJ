/********************************************************************************
** Form generated from reading UI file 'alarmeditdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMEDITDIALOG_H
#define UI_ALARMEDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_AlarmEditDialog
{
public:
    QTimeEdit *timeEdit;
    QPushButton *saveButton;
    QPushButton *cancelButton;
    QLabel *label;

    void setupUi(QDialog *AlarmEditDialog)
    {
        if (AlarmEditDialog->objectName().isEmpty())
            AlarmEditDialog->setObjectName("AlarmEditDialog");
        AlarmEditDialog->resize(400, 300);
        timeEdit = new QTimeEdit(AlarmEditDialog);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(140, 100, 141, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(14);
        timeEdit->setFont(font);
        timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        timeEdit->setCalendarPopup(true);
        saveButton = new QPushButton(AlarmEditDialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(69, 170, 121, 51));
        QFont font1;
        font1.setPointSize(14);
        saveButton->setFont(font1);
        cancelButton = new QPushButton(AlarmEditDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(220, 170, 121, 51));
        cancelButton->setFont(font1);
        label = new QLabel(AlarmEditDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 311, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro Medium")});
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(AlarmEditDialog);

        QMetaObject::connectSlotsByName(AlarmEditDialog);
    } // setupUi

    void retranslateUi(QDialog *AlarmEditDialog)
    {
        AlarmEditDialog->setWindowTitle(QCoreApplication::translate("AlarmEditDialog", "Dialog", nullptr));
        saveButton->setText(QCoreApplication::translate("AlarmEditDialog", "Guardar", nullptr));
        cancelButton->setText(QCoreApplication::translate("AlarmEditDialog", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("AlarmEditDialog", "Editar Alarma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlarmEditDialog: public Ui_AlarmEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMEDITDIALOG_H
