#include "registration_seller.h"
#include "ui_registration_seller.h"
#include "seller.h"
#include "mainwindow.h"

registration_seller::registration_seller(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registration_seller)
{
    ui->setupUi(this);
}

registration_seller::~registration_seller()
{
    delete ui;
}

void registration_seller::on_next_clicked()
{
    name = ui->lineEdit_name->text();
    email = ui->lineEdit_email_2->text();
    swindow = new seller();
    swindow->show();
    this->close();
}

void registration_seller::on_back_clicked()
{
   Main = new MainWindow();
   Main->get2(arr2, s);
   Main->show();
   this->close();
}

void registration_seller::get(Product a[], int size)
{
   for (int i = 0; i < size; i++)
   {
       arr2[i] = a[i];
   }
   s = size;
}
