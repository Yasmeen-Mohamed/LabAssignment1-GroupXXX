#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Form.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class registration_seller;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Product arr3[7];
    void get2(Product a[], int s);

private slots:
    void on_seller_clicked();

    void on_customer_clicked();

private:
    Ui::MainWindow *ui;
    registration_seller* seller_window;
    Form* customer_window;
    int s=0;
};
#endif // MAINWINDOW_H
