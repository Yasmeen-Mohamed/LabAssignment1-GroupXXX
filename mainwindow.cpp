#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration_seller.h"
#include "Form.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_seller_clicked()
{
    seller_window = new registration_seller();
    seller_window->show();
    this->close();
}

void MainWindow::on_customer_clicked()
{
    customer_window = new Form();
    customer_window -> get3(arr3, s);
    customer_window->show();
    this->close();
}

void MainWindow::get2(Product a[], int size)
{
   for (int i = 0; i < size; i++)
   {
       arr3[i] = a[i];
   }
   s = size;
}

