#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <iostream>
#include <stack>
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
#if 0
    qDebug() << "b1: " << ui->radioButton->isChecked();
    qDebug() << "b2: " << ui->radioButton_2->isChecked();
    qDebug() << "b3: " << ui->radioButton_3->isChecked();

    connect(ui->radioButton, SIGNAL(toggled(bool)), this, SLOT(slot1(bool)));//绑定第一个按钮
    connect(ui->radioButton_2, SIGNAL(toggled(bool)), this, SLOT(slot2(bool)));//按钮不能是同一个槽函数，我就不知道是哪个按钮发生了变化
    connect(ui->radioButton_3, SIGNAL(toggled(bool)), this, SLOT(slot3(bool)));//绑定第一个按钮
#endif

    //radiobutton-radiobutton3 add to a qbuttongroup
    QButtonGroup *group1 = new QButtonGroup();
    group1->addButton(ui->radioButton, 0);
    group1->addButton(ui->radioButton_2, 1);
    group1->addButton(ui->radioButton_3, 2);
    group1->addButton(ui->radioButton_6, 3);

    QButtonGroup *group2 = new QButtonGroup();
    group2->addButton(ui->radioButton_4, 0);
    group2->addButton(ui->radioButton_5, 1);

    connect(group1, SIGNAL(buttonToggled(int, bool)), this, SLOT(group_slot1(int, bool)));
    connect(group2, SIGNAL(buttonToggled(int, bool)), this, SLOT(group_slot2(int, bool)));

}

void Widget::group_slot1(int id, bool state)
{
    //get the int number
    int num;
    num = ui->lineEdit->text().toInt();//
    if (id == 0 && state == true)//binary
    {
        //use stack to store bitwise
        stack<char> res;
        int tmp = num;
        while (tmp)
        {
            res.push(tmp%2 + '0');//int 1 to char 1,you should add 0,0's ascii is 48
            tmp /= 2;
        }
        qDebug() << "hi";
        QString text;
        while (!res.empty())
        {
            text += res.top();//get top value
        }
        ui->label_2->setText(text);
    }
    else if (id == 1 && state == true)
        qDebug() << "id == 1 was pushed!";
    else if (id == 2 && state)
        qDebug() << "id == 2 was pushed!";
    else if (id == 3 && state)
        qDebug() << "id == 3 was shed!";
    //qDebug() << "group1_id: " << id << "state: " << state;
}
void Widget::group_slot2(int id, bool state)
{
    if (id == 0 && state == true)
        qDebug() << "id == 0 was pushed!";
    else if(id == 1 && state == true)
            qDebug() << "id == 0 was pushed!";

    //qDebug() << "group2_id: " << id << "state: " << state;
}

void Widget::slot1(bool state)
{
    qDebug() << "b1: " << state;
}
void Widget::slot2(bool state) {
    qDebug() << "b2: " << state;
}
void Widget::slot3(bool state) {
    qDebug() << "b3: " << state;
}

Widget::~Widget()
{
    delete ui;
}

