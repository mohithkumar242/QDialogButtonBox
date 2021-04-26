#include "infodialog.h"
#include "ui_infodialog.h"
#include<QDebug>

infoDialog::infoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoDialog)
{
    ui->setupUi(this);
}

infoDialog::~infoDialog()
{
    delete ui;
}

void infoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);
       if(stdButton==QDialogButtonBox::Ok)
       {
          accept();

          qDebug()<<"Ok button clicked";

       }
       if(stdButton==QDialogButtonBox::Yes)
       {
          accept();

          qDebug()<<"Yes button clicked";

       }
       if(stdButton==QDialogButtonBox::Save)
       {

          accept();

          qDebug()<<"save button clicked";

       }
       if(stdButton==QDialogButtonBox::SaveAll)
       {
          accept();

          qDebug()<<"Save All button clicked";

       }
       if(stdButton==QDialogButtonBox::Open)
       {
          open();

          qDebug()<<"Open button clicked";

       }
       if(stdButton==QDialogButtonBox::No)
       {
          reject();

          qDebug()<<"No button clicked";

       }
       if(stdButton==QDialogButtonBox::Cancel)
       {
          reject();

          qDebug()<<"cancel button clicked";

       }
}
