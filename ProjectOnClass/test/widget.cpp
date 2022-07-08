#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);//注释掉zhe'han这行后就没控件了
}

Widget::~Widget()
{
    delete ui;
}

