#ifndef ALARMEDITDIALOG_H
#define ALARMEDITDIALOG_H

#include <QDialog>
#include <QTime>

namespace Ui {
class AlarmEditDialog;
}

class AlarmEditDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlarmEditDialog(QWidget *parent = nullptr);
    ~AlarmEditDialog();

    QTime getTime() const;
    void setTime(const QTime &time);

private slots:
    void handleSaveButtonClicked();
    void handleCancelButtonClicked();

private:
    Ui::AlarmEditDialog *ui;
};

#endif // ALARMEDITDIALOG_H
