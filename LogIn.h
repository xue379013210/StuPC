#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "charge.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    //功能函数
    void DialogInit(); //登录界面初始化

private slots:
    void on_LogInBtn_clicked(); //登录按键
    void on_ExitBtn_clicked(); //退出按键

private:
    Ui::Dialog *ui;
};

#endif // LOGIN_H
