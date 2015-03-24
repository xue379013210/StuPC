#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

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
    void DialogInit(); //界面初始化

private slots:
    void on_LogInBtn_clicked();

private:
    Ui::Dialog *ui;
};

#endif // LOGIN_H
