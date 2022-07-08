#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QDir>
#include <QMovie>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    //模拟label2上显示温度
//    float f = 30.12;
//    QString temp;
//    temp = QString::number(f,'f',2);
//    //temp.sprintf("%.3f", f);
//    ui->label_2->setText(temp);
//    //显示html
//    ui->label->setText("<h1> <style> a {text-decoration: none} </style> <a herf=\"https://www.bing.com\"></a></h1>")
//    ui->label->setOpenExternalLinks(true);

    //get label text
//    QString context = ui->label->text();
//    qDebug() << context;

    //load img from label
    QPixmap pixmap;
    QDir dir;
    QDir::setCurrent(QCoreApplication::applicationDirPath());
    QString pathname;
    pathname = dir.currentPath();
    QString pathname1;
    pathname1 = pathname + "/image/test.gif";
    pathname += "/image/test.jpg";


    if (pixmap.load("E:/Tech/Qt/ProjectOnClass/build-Label-Desktop_Qt_5_9_9_MinGW_32bit-Debug/debug/image/test.jpg"))
        ui->label->setPixmap(pixmap);
    else
        qDebug() << "load img error";

    //图片自适应label大小
    QPixmap dest = pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio);
    ui->label->setPixmap(dest);

    //label_2 show gif
    QString pathname_gif;
    pathname_gif = pathname + "/image/test.gif";
    QMovie *movie = new QMovie(pathname1);
    movie->start();
    ui->label_2->setMovie(movie);
    ui->label_2->setScaledContents(true);
}

Widget::~Widget()
{
    delete ui;
}

