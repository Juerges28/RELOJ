#ifndef RELOJ_H
#define RELOJ_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QList>
#include <QListWidgetItem>
#include <QSoundEffect>
#include "alarma.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Reloj; }
QT_END_NAMESPACE

class Reloj : public QMainWindow
{
    Q_OBJECT

public:
    Reloj(QWidget *parent = nullptr);
    ~Reloj();

private slots:
    void addAlarm();
    void checkAlarm();
    void updateClock();
    void editAlarm();
    void deleteAlarm();
    void activateAlarm();
    void deactivateAlarm();
    void stopAlarm();
    void snoozeAlarm();
    void updateVolume(int volume);

private:
    Ui::Reloj *ui;
    QTimer *timer;
    QList<QPair<QTime, bool>> alarmTimes;
    QSoundEffect alarmSound;
    int currentAlarmIndex;
    AlarmaDialog *alarmaDialog;
};

#endif // RELOJ_H
