#include "infodialog.h"
#include "ui_infodialog.h"

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint|Qt::WindowTitleHint),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_okpushButton_clicked()
{
    QString UserPosition  = ui->positionlineEdit->text();
        if(!UserPosition.isEmpty())
        {
            position=UserPosition;
            if(ui->windowsradioButton->isChecked())
            {
                favoriteOS="windows";
            }
            if(ui->macradioButton->isChecked())
            {
                favoriteOS="mac";
            }
            if(ui->linuxradioButton->isChecked())
            {
                favoriteOS="linux";
            }

        }
        accept();
}

void infoDialog::on_cancelpushButton_clicked()
{
    reject();
}

QString infoDialog::getPosition() const
{
    return position;
}

QString infoDialog::getFavoriteOS() const
{
    return favoriteOS;
}
