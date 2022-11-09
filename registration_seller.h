#ifndef REGISTRATION_SELLER_H
#define REGISTRATION_SELLER_H

#include "seller.h"
#include <QWidget>

namespace Ui {
class registration_seller;
}

class MainWindow;

class registration_seller : public QWidget
{
    Q_OBJECT

public:
    explicit registration_seller(QWidget *parent = nullptr);
    ~registration_seller();
    QString name;
    QString email;
    Product arr2[7];
    void get(Product a[], int s);

private slots:
    void on_pushButton_clicked();

    void on_next_clicked();

    void on_back_clicked();

private:
    Ui::registration_seller *ui;
    seller* swindow;
    MainWindow* Main;
    int s =0;
};

#endif // REGISTRATION_SELLER_H
