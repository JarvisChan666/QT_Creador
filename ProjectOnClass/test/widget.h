#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//声明了一个名字空间，from ui_widget.h
namespace Ui {//实现界面布局
class Widget;//此widget并不是第10行的widget
}

//实现业务逻辑
class Widget : public QWidget//这个widget有啥用？用来实现业务逻辑，自己写的代码，我们不能写在ui_widget.h
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;//将自己写的和Ui关联
};

#endif // WIDGET_H
