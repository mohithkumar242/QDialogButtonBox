#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<infodialog.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
            infoDialog *dialog=new infoDialog(this);
            connect(dialog,&infoDialog::accepted,[=](){

            qDebug()<<"Dialog Accepted!";

            });
            connect(dialog,&infoDialog::rejected,[=](){

            qDebug()<<"Dialog Rejected!";

            });
            dialog->exec();
}
