#include "alarma.h"
#include "ui_alarma.h"

#include <QUrl>

AlarmaDialog::AlarmaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlarmaDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Alarma");

    connect(ui->stopButton, &QPushButton::clicked, this, &AlarmaDialog::stopButtonC);
    connect(ui->snoozeButton, &QPushButton::clicked, this, &AlarmaDialog::snoozeButtonC);
}

AlarmaDialog::~AlarmaDialog()
{
    delete ui;
}

void AlarmaDialog::setAlarmMessage(const QString &message)
{
    ui->messageLabel->setText(message);
}

void AlarmaDialog::stopButtonC()
{
    emit stopAlarm();
    accept();
}

void AlarmaDialog::snoozeButtonC()
{
    emit snoozeAlarm();
    accept();
}
