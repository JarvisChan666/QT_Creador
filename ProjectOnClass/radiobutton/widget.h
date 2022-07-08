#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void slot1(bool);
    void slot2(bool);
    void slot3(bool);

    void group_slot1(int , bool);
    void group_slot2(int , bool);
private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
