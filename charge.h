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

private:
    Ui::Charge *ui;
};

#endif // CHARGE_H
