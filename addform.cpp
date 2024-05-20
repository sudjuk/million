#include "addform.h"
#include "ui_addform.h"
#include <QFile>
#include <QTextCodec>
#include <QTextStream>


AdForm::AdForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdForm)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(close()));
}

AdForm::~AdForm()
{
    delete ui;
}

void AdForm::on_pushButton_clicked()
{
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QFile book("C:\\Games\\library.txt");
    if(!(ui->lineEdit->text().isEmpty())&&!(ui->lineEdit_2->text().isEmpty())&&!(ui->lineEdit_3->text().isEmpty())&&!(ui->lineEdit_4->text().isEmpty())){
        if (book.open(QIODevice::ReadWrite)){
            QTextStream out(&book);
            QString str="";
            QString str1="";
            int flag=0;
            while(!book.atEnd()){
                str1= codec->toUnicode(book.readLine());
                if (str1.contains("Автор: "+ui->lineEdit->text()+"  Название: "+ui->lineEdit_2->text()+"  Издательство: "+ui->lineEdit_3->text()+"  Год издания: "+ui->lineEdit_4->text())){
                    str1=str1.mid(str1.indexOf("Число экземпляров:")+19);
                    int k=str1.toInt();
                    k+=1;
                    flag=1;
                    str=str+"Автор: "+ui->lineEdit->text()+"  Название: "+ui->lineEdit_2->text()+"  Издательство: "+ui->lineEdit_3->text()+"  Год издания: "+ui->lineEdit_4->text()+"  Число экземпляров: "+QString::number(k)+'\n';
                }
                else{
                    str=str+str1;
                }
            }
            if(flag==0){
                str=str+"Автор: "+ui->lineEdit->text()+"  Название: "+ui->lineEdit_2->text()+"  Издательство: "+ui->lineEdit_3->text()+"  Год издания: "+ui->lineEdit_4->text()+"  Число экземпляров: "+QString::number(1)+'\n';
            }
            book.resize(0);
            out<<str;
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            ui->lineEdit_4->clear();
        }
    }
    emit update();
}
