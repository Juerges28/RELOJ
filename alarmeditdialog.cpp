#include "alarmeditdialog.h"
#include "ui_alarmeditdialog.h"

AlarmEditDialog::AlarmEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlarmEditDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Editar");
    connect(ui->saveButton, &QPushButton::clicked, this, &AlarmEditDialog::handleSaveButtonClicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &AlarmEditDialog::handleCancelButtonClicked);
}

AlarmEditDialog::~AlarmEditDialog()
{
    delete ui;
}

QTime AlarmEditDialog::getTime() const
{
    return ui->timeEdit->time();
}

void AlarmEditDialog::setTime(const QTime &time)
{
    ui->timeEdit->setTime(time);
}

void AlarmEditDialog::handleSaveButtonClicked()
{
    // Lógica para guardar la alarma
    accept();
}

void AlarmEditDialog::handleCancelButtonClicked()
{
    // Lógica para cancelar la edición de la alarma
    reject();
}
