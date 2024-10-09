#ifndef ALARMA_H
#define ALARMA_H

#include <QDialog>
#include <QSoundEffect>

namespace Ui {
class AlarmaDialog;
}

class AlarmaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlarmaDialog(QWidget *parent = nullptr);
    ~AlarmaDialog();

    void setAlarmMessage(const QString &message);

private slots:
    void stopButtonC();
    void snoozeButtonC();

signals:
    void stopAlarm();
    void snoozeAlarm();

private:
    Ui::AlarmaDialog *ui;
};

#endif // ALARMA_H
