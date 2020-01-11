#pragma once
#include "mainwindow.h"
#include "link.h"
#include <QApplication>
#include <QtDebug>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    link link;
    link.function1();
    link.function2();
    link.function3();
    link.function4();
    w.show();
    return a.exec();
}



