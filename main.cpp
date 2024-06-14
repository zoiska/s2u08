#include <iostream>
#include <QApplication>
#include "Selector/selector.h"
#include "Clicker/clicker.h"
#include "Greeter/greeter.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    selector w;
    w.show();
    return QApplication::exec();
}
