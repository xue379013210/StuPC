#include "charge.h"
#include "ui_charge.h"
#include "LogIn.h"

extern Dialog w;

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

//====================UI设置======================
//Charge界面初始化
void Charge::ChargeInit()
{
    setWindowTitle(QObject::tr("充电电路"));
    //----------------电感列表---------------------
    QStringList LList;
    LList.append("200");
    LList.append("800");
    LList.append("2000");
    ui->LComboBox->addItems(LList);
    //----------------电容列表---------------------
    QStringList CList;
    CList.append("10");
    CList.append("100");
    CList.append("470");
    ui->CComboBox->addItems(CList);
}

//====================Btn设置======================
void Charge::on_ReLogInBtn_clicked()
{
    close();
    //新建一个LogIn界面
    Dialog Ui_LogIn_1;
    //显示LogIn界面，当在Login界面点击LogIn按键则进入if，显示Charge界面
    if(Ui_LogIn_1.exec() == QDialog::Accepted)
    {
        show();
    }
}

void Charge::on_NextBtn_clicked()
{

}
