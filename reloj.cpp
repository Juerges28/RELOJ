#include "reloj.h"
#include "ui_reloj.h"
#include "alarmeditdialog.h"
#include "alarma.h"
#include <QTime>
#include <QMessageBox>
#include <QUrl>

Reloj::Reloj(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Reloj)
    , timer(new QTimer(this))
    , currentAlarmIndex(-1)
    , alarmaDialog(new AlarmaDialog(this))
{
    ui->setupUi(this);
    connect(ui->setAlarmButton, &QPushButton::clicked, this, &Reloj::addAlarm);
    connect(ui->editAlarmButton, &QPushButton::clicked, this, &Reloj::editAlarm);
    connect(ui->deleteAlarmButton, &QPushButton::clicked, this, &Reloj::deleteAlarm);
    connect(ui->activateAlarmButton, &QPushButton::clicked, this, &Reloj::activateAlarm);
    connect(ui->deactivateAlarmButton, &QPushButton::clicked, this, &Reloj::deactivateAlarm);
    connect(ui->volumeSlider, &QSlider::valueChanged, this, &Reloj::updateVolume);

    connect(timer, &QTimer::timeout, this, &Reloj::checkAlarm);
    connect(timer, &QTimer::timeout, this, &Reloj::updateClock);

    connect(alarmaDialog, &AlarmaDialog::stopAlarm, this, &Reloj::stopAlarm);
    connect(alarmaDialog, &AlarmaDialog::snoozeAlarm, this, &Reloj::snoozeAlarm);

    timer->start(1000);

    alarmSound.setSource(QUrl("qrc:/Sonido.wav"));
    alarmSound.setLoopCount(QSoundEffect::Infinite);
    alarmSound.setVolume(0.25f);
}

Reloj::~Reloj()
{
    delete ui;
}

void Reloj::addAlarm()
{
    QTime newAlarmTime = ui->timeEdit->time();
    alarmTimes.append(qMakePair(newAlarmTime, true));

    QListWidgetItem *item = new QListWidgetItem(newAlarmTime.toString());
    item->setCheckState(Qt::Checked);
    ui->alarmListWidget->addItem(item);
}

void Reloj::editAlarm()
{
    QListWidgetItem *currentItem = ui->alarmListWidget->currentItem();
    if (currentItem)
    {
        int index = ui->alarmListWidget->row(currentItem);
        QTime currentTime = alarmTimes[index].first;

        AlarmEditDialog dialog(this);
        dialog.setTime(currentTime);
        if (dialog.exec() == QDialog::Accepted)
        {
            QTime newTime = dialog.getTime();
            alarmTimes[index].first = newTime;
            currentItem->setText(newTime.toString());
        }
    }
}

void Reloj::deleteAlarm()
{
    QListWidgetItem *currentItem = ui->alarmListWidget->currentItem();
    if (currentItem)
    {
        int index = ui->alarmListWidget->row(currentItem);
        alarmTimes.removeAt(index);
        delete ui->alarmListWidget->takeItem(index);
    }
}

void Reloj::activateAlarm()
{
    QListWidgetItem *currentItem = ui->alarmListWidget->currentItem();
    if (currentItem)
    {
        int index = ui->alarmListWidget->row(currentItem);
        alarmTimes[index].second = true;
        currentItem->setCheckState(Qt::Checked);
    }
}

void Reloj::deactivateAlarm()
{
    QListWidgetItem *currentItem = ui->alarmListWidget->currentItem();
    if (currentItem)
    {
        int index = ui->alarmListWidget->row(currentItem);
        alarmTimes[index].second = false;
        currentItem->setCheckState(Qt::Unchecked);
    }
}

void Reloj::checkAlarm()
{
    QTime currentTime = QTime::currentTime();
    for (int i = 0; i < alarmTimes.size(); ++i)
    {
        if (alarmTimes[i].second && currentTime >= alarmTimes[i].first)
        {
            currentAlarmIndex = i;
            alarmSound.play();

            alarmaDialog->setAlarmMessage("Alarma sonando:  " + alarmTimes[i].first.toString());
            alarmaDialog->exec();

            break;
        }
    }
}


void Reloj::stopAlarm()
{
    if (currentAlarmIndex != -1)
    {
        alarmSound.stop();

        alarmTimes[currentAlarmIndex].second = false;
        ui->alarmListWidget->item(currentAlarmIndex)->setCheckState(Qt::Unchecked);

        currentAlarmIndex = -1;
    }
}

void Reloj::snoozeAlarm()
{
    if (currentAlarmIndex != -1)
    {
        alarmSound.stop();
        QTime snoozeTime = QTime::currentTime().addSecs(300);
        alarmTimes[currentAlarmIndex].first = snoozeTime;
        ui->alarmListWidget->item(currentAlarmIndex)->setText(snoozeTime.toString());
        currentAlarmIndex = -1;
    }
}

void Reloj::updateClock()
{
    QTime currentTime = QTime::currentTime();
    ui->clockLabel->setText(currentTime.toString("hh:mm:ss"));
}

void Reloj::updateVolume(int volume)
{

    float volumeValue = static_cast<float>(volume) / 100.0f;
    alarmSound.setVolume(volumeValue);
    ui->volumeLabel->setText(QString("Volume: %1").arg(volume));
}

