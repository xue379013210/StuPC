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

//====================UI设置======================
//Charge界面初始化
void Charge::ChargeInit()
{
    setWindowTitle(QObject::tr("充电电路"));
    //----------------系统时间---------------------
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this,SLOT(ShowTime()));
    timer->start(1000);
    ShowTime();
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
//时钟显示Label
void Charge::ShowTime()
{
    QDateTime time = QDateTime::currentDateTime(); //获取系统现在时间
    QString TimeStr1 = time.toString("   hh:mm:ss"); //时间格式
    QString TimeStr2 = time.toString("yyyy/MM/dd ddd"); //年月日格式
    ui->TimeLabel_1->setText(TimeStr1); //在标签上显示时间
    ui->TimeLabel_2->setText(TimeStr2);
}

//====================Btn设置======================
//ReLogIn按键，返回登录界面
void Charge::on_ReLogInBtn_clicked()
{
    this->close();
    Dialog *Ui_LogIn = new Dialog;
    Ui_LogIn->show();
}

//NextBtn按键，进入discharge界面
void Charge::on_NextBtn_clicked()
{
    this->close();
    DisCharge *Ui_DisCharge = new DisCharge;
    Ui_DisCharge->show();
}
