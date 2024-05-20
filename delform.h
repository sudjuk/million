#ifndef DELFORM_H
#define DELFORM_H

#include <QWidget>

namespace Ui {
class DelForm;
}

class DelForm : public QWidget
{
    Q_OBJECT
signals:
    void update();
public:
    explicit DelForm(QWidget *parent = nullptr);
    ~DelForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DelForm *ui;
};

#endif // DELFORM_H
