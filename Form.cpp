#include "Form.h"
#include "ui_Form.h"
#include "customer.h"
#include "mainwindow.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_next_clicked()
{
    name = ui->lineEdit_name->text();
    email = ui->lineEdit_email->text();
    address = ui->lineEdit_address->text();
    phoneNo = ui->lineEdit_number->text();
    cwindow = new customer();
    cwindow->get4(arr4, s);
    cwindow->show();
    this->close();
}

void Form::get3(Product a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr4[i] = a[i];
    }
    s = size;
}

