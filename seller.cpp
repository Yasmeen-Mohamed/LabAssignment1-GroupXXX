#include "seller.h"
#include "ui_seller.h"
#include "registration_seller.h"
#include "customer.h"

seller::seller(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seller)
{
    ui->setupUi(this);
}

seller::~seller()
{
    delete ui;
}

void seller::on_add_clicked()
{

        arr[i].name = ui->lineEdit_productName->text();
        arr[i].category = ui->lineEdit_category->text();
        arr[i].price = ui->lineEdit_price->text().toInt();
        arr[i].quantity = ui->lineEdit_quantity->text().toInt();
    i++;

    p.name = ui->lineEdit_productName->text();
}


void seller::on_back_clicked()
{
    sRegistration_window = new registration_seller();
    sRegistration_window -> get(arr , i);
    sRegistration_window->show();
    this->close();
}

