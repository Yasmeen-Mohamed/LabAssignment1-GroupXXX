#include "customer.h"
#include "ui_customer.h"
#include "Form.h"
#include "Product.h"
#include "seller.h"
#include <QMessageBox>
#include "EmptyCart.h"
#include "NoAvailableQuantity.h"

customer::customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

void customer::on_search_clicked()
{
    int flagFound =0;
    for (int i = 0; i < s; i++)
    {
    if (ui->lineEdit_product_name->text() == arr5[i].name && ui->lineEdit_category->text() =="")
    {
        ui->listProduct_label->setText(ui->lineEdit_product_name->text());
        flagFound =1;
        break;
    }
    else if (ui->lineEdit_category->text() == arr5[i].category && ui->lineEdit_product_name->text() == "")
    {
        mess = mess + "\n" + arr5[i].name;
        ui->listProduct_label->setText(mess);
        flagFound =1;
    }
    }

    if (flagFound == 0)
         ui->listProduct_label->setText("No Product Found");
}

void customer::on_addtocart_clicked()
{
    try{
    for(int i=0; i<s;i++)
  {
       if(ui->lineEdit_product_name2->text() == arr5[i].name)
       {
           arr5[i].quantity --;
           if(arr5[i].quantity < 0)
             throw NoAvailableQuantity();
           else
           {
           ui->listCart_label->setText(ui->listCart_label->text() + "\n" + ui->lineEdit_product_name2->text());
           selected[s2] = arr5[i];
           s2++;
           break;
           }
       }
   }
}
    catch(NoAvailableQuantity &e)
    {
        QMessageBox msgBox2;
         msgBox2.setText(e.what());
         msgBox2.exec();
    }
}

void customer::on_back_clicked()
{
    cRegistration_window = new Form();
    cRegistration_window->show();
    this->close();
}


void customer::on_confirm_clicked()
{
    int price = 0;
    try{
    if (ui->listCart_label->text() == "")
    {
        throw EmptyCart();
    }
    else
    {
    for (int i = 0; i < s2; i++)
    {
        price += selected[i].price;
    }
    QMessageBox msgBox;
    msgBox.setText("Total Price: " + QString::number(price));
    msgBox.exec();
    }
    }
    catch(EmptyCart &e)
    {
        QMessageBox msgBox2;
         msgBox2.setText(e.what());
         msgBox2.exec();
    }
}

void customer::get4(Product a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr5[i] = a[i];
    }
    s=size;
}

void customer::on_pushButton_clicked()
{
    ui ->listProduct_label->setText("");
    for (int i = 0; i < s; i++)
    {
       ui ->listProduct_label->setText(ui->listProduct_label->text() + "\n" + arr5[i].name);
    }
}

