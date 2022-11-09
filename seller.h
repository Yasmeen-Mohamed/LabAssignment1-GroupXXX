#ifndef SELLER_H
#define SELLER_H

#include "Product.h"
#include <QWidget>

class registration_seller;
class customer;

namespace Ui {
class seller;
}

class seller : public QWidget
{
    Q_OBJECT

public:
    explicit seller(QWidget *parent = nullptr);
    ~seller();
    QString name;
    QString email;
    Product p;
    Product arr[7];
    void registration(QString n, QString e);


private slots:
    void on_add_clicked();

    void on_back_clicked();

private:
    Ui::seller *ui;;
    registration_seller* sRegistration_window;
    int i =0;
};

#endif // SELLER_H
