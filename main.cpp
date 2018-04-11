//#include "mainwindow.h"
 #include "graphwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    GraphWidget widget;
       widget.show();

    return a.exec();
}
