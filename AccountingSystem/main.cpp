#include "maindialog.h"
#include "logdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* LogDialog l;
    l.show();
    if(l.exec()!=LogDialog::Accepted)
    {
        return 0;
    }*/
    MainDialog w;
    w.show();
    return a.exec();
}
