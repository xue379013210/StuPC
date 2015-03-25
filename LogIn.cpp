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

void Dialog::DialogInit()
{
    setWindowTitle(QObject::tr("Log In"));
}

void Dialog::on_LogInBtn_clicked()
{
    close();
    Charge *Ui_Charge = new Charge;
    Ui_Charge->show();
}
