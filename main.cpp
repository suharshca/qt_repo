#include <QtGui/QApplication>
#include "helloworld.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    helloworld w;
    w.show();
    
    return a.exec();
}
