#include "discharge.h"
#include "ui_discharge.h"

DisCharge::DisCharge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisCharge)
{
    ui->setupUi(this);
    DisChargeInit();
}

DisCharge::~DisCharge()
{
    delete ui;
}

//====================UI设置======================
//DisCharge界面初始化
void DisCharge::DisChargeInit()
{
    setWindowTitle(QObject::tr("放电电路"));
    //----------------系统时间---------------------
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this,SLOT(ShowTime()));
    timer->start(1000);
    ShowTime();
}

void DisCharge::ShowTime()
{
    QDateTime time = QDateTime::currentDateTime(); //获取系统现在时间
    QString TimeStr1 = time.toString("   hh:mm:ss"); //时间格式
    QString TimeStr2 = time.toString("yyyy/MM/dd ddd"); //年月日格式
    ui->TimeLabel_1->setText(TimeStr1); //在标签上显示时间
    ui->TimeLabel_2->setText(TimeStr2);
}

//====================Btn设置======================
//PreBtn按钮，返回上一页
void DisCharge::on_PreBtn_clicked()
{
    this->close();
    Charge *Ui_Charge = new Charge;
    Ui_Charge->show();
}
