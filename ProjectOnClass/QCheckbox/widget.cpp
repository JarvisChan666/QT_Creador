#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置勾选状态
    ui->checkBox->setChecked(true);
    ui->checkBox_2->setChecked(true);
    ui->checkBox->setTristate(true);//将box1设置为三态框，能产生三种状态012
    ui->checkBox_2->setTristate(true);

    //ui->checkBox->setCheckable(false);//是否可以勾选按钮
    //signal可以在索引里面找checkbox能产生什么信号让我们捕捉，然后用slot去捕捉处理
    connect(ui->checkBox, SIGNAL(stateChanged(int)), this, SLOT(slot1(int)));
    connect(ui->checkBox_2, SIGNAL(stateChanged(int)), this, SLOT(slot2(int)));
}

void Widget::slot1(int state)
{
    qDebug() << "checkbox1: " << state;

}
void Widget::slot2(int state)
{
    qDebug() << "checkbox2: " << state;
}


Widget::~Widget()
{
    delete ui;
}

