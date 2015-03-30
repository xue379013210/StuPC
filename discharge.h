#ifndef DISCHARGE_H
#define DISCHARGE_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include "LogIn.h"
#include "charge.h"

namespace Ui {
class DisCharge;
}

class DisCharge : public QDialog
{
    Q_OBJECT

public:
    explicit DisCharge(QWidget *parent = 0);
    ~DisCharge();
    //功能函数
    void DisChargeInit(); //放电电路界面初始化

private slots:
    void on_PreBtn_clicked(); //上一页按键
    void ShowTime(); //显示系统时间

private:
    Ui::DisCharge *ui;
    QTimer *timer;
};

#endif // DISCHARGE_H
