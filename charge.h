#ifndef CHARGE_H
#define CHARGE_H

#include <QDialog>

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

private:
    Ui::Charge *ui;
};

#endif // CHARGE_H
