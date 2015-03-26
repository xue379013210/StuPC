#include "LogIn.h"
#include "ui_LogIn.h"
#include "charge.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    DialogInit();
}

Dialog::~Dialog()
{
    delete ui;
}

//====================界面设置======================
//LogIn界面初始化
void Dialog::DialogInit()
{
    setWindowTitle(QObject::tr("Log In"));
}

//====================按键设置======================
//LogIn按键，进入Charge界面
void Dialog::on_LogInBtn_clicked()
{
    accept();
}
