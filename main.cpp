#include "LogIn.h"
#include "charge.h"
#include "discharge.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog Ui_LogIn;
    Ui_LogIn.show();

    return a.exec();
}
