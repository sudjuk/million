#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QTextCodec>
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    ui->textEdit->setWordWrapMode(QTextOption::NoWrap);
    connect(ui->closeButton,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(&aform, &AdForm::update, this, &Widget::fileread);
    connect(&dform, &DelForm::update, this, &Widget::fileread);
    fileread();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addButton_clicked()
{
    aform.show();
}

void Widget::on_delButton_clicked()
{
    dform.show();
}

void Widget::on_companyButton_clicked()
{
    if(!(ui->lineEdit->text().isEmpty())){
        QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
        QFile book("C:\\Games\\library.txt");
        QString str;
        QString str1="";
        QString company=ui->lineEdit->text();
        vector<int> m;
        if (book.open(QIODevice::ReadOnly)){
            while(!book.atEnd()){
                str= codec->toUnicode(book.readLine());
                if(str.contains("Издательство: "+company+"  Год издания:")){
                    QString now=str.mid(str.indexOf("Год издания:")+13,4);
                    int k=now.toInt();
                    m.push_back(k);
                }
            }
            book.close();
        }
        sort(m.begin(),m.end());
        auto last = std::unique(m.begin(), m.end());
        m.erase(last, m.end());
        for(unsigned int i=0;i<m.size();i++){
            if (book.open(QIODevice::ReadOnly)){
                while(!book.atEnd()){
                    str= codec->toUnicode(book.readLine());
                    QString now=str.mid(str.indexOf("Год издания:")+13,4);
                    int k=now.toInt();
                    if ((k==m[i])&&(str.contains("Издательство: "+company+"  Год издания:"))){
                        str1+=str;
                    }
                }
                book.close();
            }
        }
        if (str1==""){
            ui->textEdit->setText("Нет книг этого издательства");
        }
        else{
            ui->textEdit->setText(str1);}
        ui->lineEdit->clear();
    }
}

void Widget::on_timeButton_clicked()
{
    if(!(ui->lineEdit_2->text().isEmpty())&&!(ui->lineEdit_3->text().isEmpty())){
        ui->textEdit->clear();
        QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
        QFile book("C:\\Games\\library.txt");
        QString str;
        QString str1="";
        int first=ui->lineEdit_2->text().toInt();
        int last=ui->lineEdit_3->text().toInt();
        if (book.open(QIODevice::ReadOnly)){
            while(!book.atEnd()){
                str= codec->toUnicode(book.readLine());
                QString now=str.mid(str.indexOf("Год издания:")+13,4);
                int k=now.toInt();
                if (first<=k&&k<=last){
                    str1+=str.mid(7,str.indexOf("Название:")-8)+'\n';
                }
            }
        }
        if (str1==""){
            ui->textEdit->setText("Нет подходящих авторов");
        }
        else{
            ui->textEdit->setText(str1);}
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
    }
}

void Widget::on_oneButton_clicked()
{
    ui->textEdit->clear();
    QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
    QFile book("C:\\Games\\library.txt");
    QString str;
    QString str1="";
    if (book.open(QIODevice::ReadOnly)){
        while(!book.atEnd()){
            str= codec->toUnicode(book.readLine());
            QString now=str.mid(str.indexOf("Число экземпляров:")+19);
            int k=now.toInt();
            if (k==1){
                str1+=str;
            }
        }
    }
    if (str1==""){
        ui->textEdit->setText("Нет книг в одном экземпляре");
    }
    else{
        ui->textEdit->setText(str1);}
}

void Widget::on_allButton_clicked()
{
    fileread();
}

void Widget::fileread()
{
    QFile book("C:\\Games\\library.txt");
    if (book.open(QIODevice::ReadOnly)){
        QByteArray a = book.readAll();
        QTextCodec *codec = QTextCodec::codecForName("Windows-1251");
        QString text = codec->toUnicode(a);
        ui->textEdit->setText(text);
    }
}
