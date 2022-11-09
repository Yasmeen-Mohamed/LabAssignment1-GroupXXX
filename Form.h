#ifndef FORM_H
#define FORM_H

#include "customer.h"
#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    QString name;
    QString email;
    QString address;
    QString phoneNo;
    Product arr4[7];
    void get3(Product a[], int s);

private slots:
    void on_next_clicked();

private:
    Ui::Form *ui;
    customer* cwindow;
    int s =0;
};

#endif // FORM_H
