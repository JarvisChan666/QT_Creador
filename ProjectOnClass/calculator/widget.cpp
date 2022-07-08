#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //绑定两个lineedit的信号和槽函数
    connect(ui->oprand1, SIGNAL(textChanged(QString)), this, SLOT(calculate(QString)));//slot will give to signal
    connect(ui->operand2, SIGNAL(textChanged(QString)), this, SLOT(calculate(QString)));
}

void Widget::calculate(const QString &s)
{//要获取两个控件的内容，分不清的话会很麻烦
    float num1, num2;//操作数
    num1 = ui->oprand1->text().toFloat();//qstring turn to float,否则就会变成两个字符串相加，直接拼接起来了
    num2 = ui->operand2->text().toFloat();
    float res = num1 + num2;
    ui->result->setText(QString::number(res, 'f', 2));//float turn to qstring对象，因为settext要传入qstring
}

Widget::~Widget()
{
    delete ui;
}

