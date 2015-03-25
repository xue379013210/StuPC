#include "charge.h"
#include "ui_charge.h"

Charge::Charge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Charge)
{
    ui->setupUi(this);
    ChargeInit();
}

Charge::~Charge()
{
    delete ui;
}

//充电电路界面初始化
void Charge::ChargeInit()
{
    //=============充电电路界面初始化==============
    setWindowTitle(QObject::tr("充电电路"));
    //----------------电感列表-------------------
    QStringList LList;
    LList.append("200");
    LList.append("800");
    LList.append("2000");
    ui->LComboBox->addItems(LList);
    //----------------电容列表-------------------
    QStringList CList;
    CList.append("10");
    CList.append("100");
    CList.append("470");
    ui->CComboBox->addItems(CList);
}
