/********************************************************************************
** Form generated from reading UI file 'reloj.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELOJ_H
#define UI_RELOJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reloj
{
public:
    QTimeEdit *timeEdit;
    QPushButton *setAlarmButton;
    QListWidget *alarmListWidget;
    QLabel *clockLabel;
    QPushButton *editAlarmButton;
    QPushButton *deleteAlarmButton;
    QPushButton *activateAlarmButton;
    QPushButton *deactivateAlarmButton;
    QSlider *volumeSlider;
    QLabel *volumeLabel;

    void setupUi(QWidget *Reloj)
    {
        if (Reloj->objectName().isEmpty())
            Reloj->setObjectName("Reloj");
        Reloj->resize(434, 465);
        timeEdit = new QTimeEdit(Reloj);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setGeometry(QRect(100, 100, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(15);
        timeEdit->setFont(font);
        timeEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        setAlarmButton = new QPushButton(Reloj);
        setAlarmButton->setObjectName("setAlarmButton");
        setAlarmButton->setGeometry(QRect(100, 140, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(11);
        setAlarmButton->setFont(font1);
        alarmListWidget = new QListWidget(Reloj);
        alarmListWidget->setObjectName("alarmListWidget");
        alarmListWidget->setGeometry(QRect(60, 180, 231, 192));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro")});
        font2.setPointSize(12);
        alarmListWidget->setFont(font2);
        clockLabel = new QLabel(Reloj);
        clockLabel->setObjectName("clockLabel");
        clockLabel->setGeometry(QRect(60, 0, 221, 111));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Source Code Pro")});
        font3.setPointSize(25);
        font3.setBold(true);
        font3.setUnderline(true);
        font3.setStrikeOut(false);
        clockLabel->setFont(font3);
        clockLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        editAlarmButton = new QPushButton(Reloj);
        editAlarmButton->setObjectName("editAlarmButton");
        editAlarmButton->setGeometry(QRect(300, 190, 111, 31));
        editAlarmButton->setFont(font2);
        deleteAlarmButton = new QPushButton(Reloj);
        deleteAlarmButton->setObjectName("deleteAlarmButton");
        deleteAlarmButton->setGeometry(QRect(300, 230, 111, 31));
        deleteAlarmButton->setFont(font2);
        activateAlarmButton = new QPushButton(Reloj);
        activateAlarmButton->setObjectName("activateAlarmButton");
        activateAlarmButton->setGeometry(QRect(300, 270, 111, 31));
        activateAlarmButton->setFont(font2);
        deactivateAlarmButton = new QPushButton(Reloj);
        deactivateAlarmButton->setObjectName("deactivateAlarmButton");
        deactivateAlarmButton->setGeometry(QRect(300, 310, 111, 31));
        deactivateAlarmButton->setFont(font2);
        volumeSlider = new QSlider(Reloj);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(90, 430, 160, 16));
        volumeSlider->setValue(50);
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        volumeLabel = new QLabel(Reloj);
        volumeLabel->setObjectName("volumeLabel");
        volumeLabel->setGeometry(QRect(80, 380, 201, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Source Code Pro")});
        font4.setPointSize(14);
        volumeLabel->setFont(font4);
        volumeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Reloj);

        QMetaObject::connectSlotsByName(Reloj);
    } // setupUi

    void retranslateUi(QWidget *Reloj)
    {
        Reloj->setWindowTitle(QCoreApplication::translate("Reloj", "Reloj", nullptr));
        setAlarmButton->setText(QCoreApplication::translate("Reloj", "Agregar Alarma", nullptr));
        clockLabel->setText(QCoreApplication::translate("Reloj", "00:00:00", nullptr));
        editAlarmButton->setText(QCoreApplication::translate("Reloj", "Editar", nullptr));
        deleteAlarmButton->setText(QCoreApplication::translate("Reloj", "Eliminar", nullptr));
        activateAlarmButton->setText(QCoreApplication::translate("Reloj", "Activar", nullptr));
        deactivateAlarmButton->setText(QCoreApplication::translate("Reloj", "Desactivar", nullptr));
        volumeLabel->setText(QCoreApplication::translate("Reloj", "Volume: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reloj: public Ui_Reloj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELOJ_H
