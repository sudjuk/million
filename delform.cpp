#include "delform.h"
#include "ui_delform.h"
#include <QMessageBox>
#include <QFile>
#include <QTextCodec>
#include <QTextStream>
DelForm::DelForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DelForm)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(close()));
}

DelForm::~DelForm()
{
    delete ui;
}

void DelForm::on_pushButton_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QString str = "Удаленная книга:\n\n";
    QString str1="";
    QString str2="";
    QFile book("C:\\Games\\library.txt");
    if (book.open(QIODevice::ReadWrite)){
        QTextStream t(&book);
        if(!(ui->lineEdit->text().isEmpty())&&!(ui->lineEdit_2->text().isEmpty())&&!(ui->lineEdit_3->text().isEmpty())&&!(ui->lineEdit_4->text().isEmpty())){
            while(!book.atEnd()){
                str2= codec->toUnicode(book.readLine());
                if (!str2.contains("Автор: "+ui->lineEdit->text()+"  Название: "+ui->lineEdit_2->text()+"  Издательство: "+ui->lineEdit_3->text()+"  Год издания: "+ui->lineEdit_4->text())){
                    str1.append(str2);
                }
                else{
                    QString now=str2.mid(str2.indexOf("Число экземпляров:")+19);
                    int k=now.toInt();
                    if (k>1){
                        str1=str1+str2.mid(0,str2.indexOf("Число экземпляров:")+19)+QString::number(k-1)+'\n';
                    }
                    str="Книга автора: "+ui->lineEdit->text()+" с названием: "+ui->lineEdit_2->text()+ " от издательства: "+ui->lineEdit_3->text()+" изданная в: "+ui->lineEdit_4->text()+" удалена";
                }
            }
            book.resize(0);
            t<<str1;
        }
        else{
            str="Заполните все поля!";
        }
    }
    if (str=="Удаленная книга:\n\n"){
        str="Книга не найдена";
    }
    QMessageBox msb;
    msb.setText(str);
    msb.setWindowTitle("Результат удаления");
    emit update();
    msb.exec();
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
}
