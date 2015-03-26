#include "LogIn.h"
#include "charge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //新建LogIn界面
    Dialog Ui_LogIn;
    //新建Charge界面
    Charge Ui_Charge;
    //显示LogIn界面，当在Login界面点击LogIn按键则进入if，显示Charge界面
    if(Ui_LogIn.exec() == QDialog::Accepted)
    {
        Ui_Charge.show();
        return a.exec();
    }
    else return 0; //否则退出
}
