#ifndef ADDFORM_H
#define ADDFORM_H

#include <QWidget>

namespace Ui {
class AdForm;
}

class AdForm : public QWidget
{
    Q_OBJECT

public:
    explicit AdForm(QWidget *parent = nullptr);
    ~AdForm();
signals:
    void update();
private slots:
    void on_pushButton_clicked();

private:
    Ui::AdForm *ui;
};

#endif // ADDFORM_H
