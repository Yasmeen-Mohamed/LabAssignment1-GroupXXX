#include "mainwindow.h"
#include <QApplication>
#include "customer.h"
#include "EmptyCart.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
