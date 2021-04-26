#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class infoDialog;
}

class infoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit infoDialog(QWidget *parent = nullptr);
    ~infoDialog();

    QString getFavoriteOS() const;

    QString getPosition() const;

private slots:
    void on_okpushButton_clicked();

    void on_cancelpushButton_clicked();

private:
    Ui::infoDialog *ui;
    QString position;
    QString favoriteOS;
};

#endif // INFODIALOG_H
