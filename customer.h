#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Product.h"
#include <QWidget>

class Form;

namespace Ui {
class customer;
}

class customer : public QWidget
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();
    Product arr5[7];
    Product customerCart[7];
    void get4(Product a[], int s);



private slots:
    void on_search_clicked();

    void on_addtocart_clicked();

    void on_back_clicked();

    void on_confirm_clicked();

    void on_pushButton_clicked();

private:
    Ui::customer *ui;
    Form* cRegistration_window;
    int s=0;
    QString mess = "";
    Product selected[7];
    int s2 = 0;

};

#endif // CUSTOMER_H
