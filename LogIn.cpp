#include "LogIn.h"
#include "ui_LogIn.h"

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
