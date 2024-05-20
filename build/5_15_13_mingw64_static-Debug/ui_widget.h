/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *delButton;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *companyButton;
    QPushButton *timeButton;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QPushButton *oneButton;
    QPushButton *allButton;
    QPushButton *closeButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(698, 446);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(Widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        delButton = new QPushButton(Widget);
        delButton->setObjectName(QString::fromUtf8("delButton"));

        horizontalLayout->addWidget(delButton);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        companyButton = new QPushButton(Widget);
        companyButton->setObjectName(QString::fromUtf8("companyButton"));

        verticalLayout_2->addWidget(companyButton);

        timeButton = new QPushButton(Widget);
        timeButton->setObjectName(QString::fromUtf8("timeButton"));

        verticalLayout_2->addWidget(timeButton);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        oneButton = new QPushButton(Widget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));

        verticalLayout_3->addWidget(oneButton);

        allButton = new QPushButton(Widget);
        allButton->setObjectName(QString::fromUtf8("allButton"));

        verticalLayout_3->addWidget(allButton);

        closeButton = new QPushButton(Widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        verticalLayout_3->addWidget(closeButton);

        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_3->addWidget(textEdit);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\255\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260\321\217 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        delButton->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
        companyButton->setText(QCoreApplication::translate("Widget", "\320\237\320\265\321\200\320\265\321\207\320\265\320\275\321\214 \320\272\320\275\320\270\320\263 \320\276\321\202 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\260", nullptr));
        timeButton->setText(QCoreApplication::translate("Widget", "\320\230\321\201\320\272\320\260\321\202\321\214 \320\260\320\262\321\202\320\276\321\200\320\276\320\262 \320\277\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\274\321\203 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\272\321\203", nullptr));
        label->setText(QCoreApplication::translate("Widget", "-", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\272\320\275\320\270\320\263\320\270 \320\262 \320\265\320\264\320\270\320\275\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\274 \321\215\320\272\320\267\320\265\320\274\320\277\320\273\321\217\321\200\320\265", nullptr));
        allButton->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        closeButton->setText(QCoreApplication::translate("Widget", "\320\227\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\320\265 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
