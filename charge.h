#ifndef CHARGE_H
#define CHARGE_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>
#include "LogIn.h"
#include "discharge.h"

namespace Ui {
class Charge;
}

class Charge : public QDialog
{
    Q_OBJECT

public:
    explicit Charge(QWidget *parent = 0);
    ~Charge();
    //功能函数
    void ChargeInit(); //充电电路界面初始化

private slots:
    void on_ReLogInBtn_clicked(); //返回登录界面按键
    void on_NextBtn_clicked(); //下一页按键
    void ShowTime(); //显示系统时间

private:
    Ui::Charge *ui;
    QTimer *timer;
};

#endif // CHARGE_H
