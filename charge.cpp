#include "charge.h"
#include "ui_charge.h"

Charge::Charge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Charge)
{
    ui->setupUi(this);
}

Charge::~Charge()
{
    delete ui;
}
