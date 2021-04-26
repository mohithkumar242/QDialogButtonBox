#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QDebug>

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
    QString dir=QFileDialog::getExistingDirectory(this,tr("Open Directory"),"C://",QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
       qDebug()<<"Your chosen Directory is:"<<dir;
       QString fileName = QFileDialog::getOpenFileName(this,tr("Open Image"), "C:/Users/mohit/OneDrive/Desktop/images", tr("Image Files (*.png *.jpg *.bmp)"));
       qDebug()<<"Your chosen Image is:"<<fileName;
       QStringList files = QFileDialog::getOpenFileNames(
                                this,
                                "Select one or more files to open",
                                "C:/Users/mohit/OneDrive/Desktop/qt",
                                "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
       qDebug()<<"Your chosen files are:"<<files;
       QString filesave = QFileDialog::getSaveFileName(this, tr("Save File"),
                                   "C:/Users/mohit/OneDrive/Desktop/qt",
                                   tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
       qDebug()<<"Saved File is:"<<filesave;
}
