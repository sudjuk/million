#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <addform.h>
#include <delform.h>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void on_addButton_clicked();

    void on_delButton_clicked();

    void on_companyButton_clicked();

    void on_timeButton_clicked();

    void on_oneButton_clicked();

    void on_allButton_clicked();

    void fileread();

private:
    Ui::Widget *ui;
    DelForm dform;
    AdForm aform;

};
#endif // WIDGET_H
