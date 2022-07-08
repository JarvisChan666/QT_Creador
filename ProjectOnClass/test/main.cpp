#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//a ui object
    Widget w;
    w.show();//show the gui
#if 0
    //the use of qstring
    QString str1 = "aa", str2 = "bb";
    QString str3 = str1;
    str1.append(str2);
    //we cant use cout
    qDebug() << str1;

    str3.prepend(str2);
    qDebug() << str3;

    //upper lower
    QString str1 = "Hello World", str2;
    str2 = str1.toUpper();
    qDebug() << str1;
    qDebug() << str2;

    str2 = str1.toLower();
    qDebug() << str2;

    QString s1 = "哈ni";// 3
    qDebug() << s1.count();
    qDebug() << s1.size();
    qDebug() << s1.length();

    QString str1 = "   hello   world   jvc ", str2, str3;
    str2 = str1.trimmed();
    str3 = str1.simplified();
    qDebug() << str2;
    qDebug() << str3;

    QString str1 = "HAHAHSUN1828821";
    int n = str1.indexOf("1828", Qt::CaseInsensitive);//ignore upper & lower
    qDebug() << n;
    int n1 = str1.lastIndexOf("82");
    qDebug() << n1;

    QString str1, str2 ="";
    qDebug() << str1.isNull();
    qDebug() << str2.isNull();
    qDebug() << str1.isEmpty();
    qDebug() << str2.isEmpty();

    QString str1 = "https://ll0ldkrlnq.feishu.cn/docx/doxcnWKo4eb5yyPcwOz1vPamHHb";
    int n = str1.contains("pcw", Qt::CaseInsensitive);
    int n1 = str1.startsWith("https://", Qt::CaseSensitive);
    int n2 = str1.endsWith(".com");
    //contains和indexof区别：只能从字符串的开头开始，只会返回找没找到，包没包含0&1
    //从功能上，indexof丰富，但只判断是否在理念，contains会更好
    qDebug() << n;
    qDebug() << n1;
    qDebug() << n2;

    QString str1 = "邓芷馨,女,19", str2, str3;
    //find the first ,
    int n = str1.indexOf(",");
    int n1 = str1.lastIndexOf(",");
    if (n >= 0) {
        str2 = str1.left(n);//第一个，前所有的东西
        str3 = str1.right(str1.size() - n1 - 1);
        qDebug() << str2;
        qDebug() << str3;
    }

    QString str1 = "https://ll0ldkrlnq.feishu.cn/docx/doxcnWKo4eb5yyPcwOz1vPamHHb", str2, str3, str4, str5;

    for (int i = 0; i < 6; i++) {
        str2 = str1.section("/",i,i);
        qDebug() << str2;
    }

    //section & split
    QString str1 = "https://ll0ldkrlnq.feishu.cn/docx/doxcnWKo4eb5yyPcwOz1vPamHHb";
    QStringList str2 = str1.split("/");
    vector<QString> v;
    for (auto s : str2) {
        v.push_back(s);// 拆开后一个个push进去
    }
    for (auto s : v)
        qDebug() << s;

    //方法二
    for (int i = 0; i <str2.size(); i++)
        qDebug() << str2[i];


    //insert & remove & replace
    QString str1 = "Hello";
    QString str2 = "World", str3 = "hello";
    str1.insert(6, str2);
    qDebug() << str1;
    str1.remove(0, 6);
    qDebug() << str1;

    str1.replace(5, 5, str3);
    qDebug() << str1;

    //str to num
    double d;
    bool ok;

    d = QString("zhixin,19,female,loe to sx wt jrvi").toDouble(&ok);
    if (ok)
        qDebug() << d;
    else
        qDebug() << "todouble error!\n";

    d = QString("1234.567").toDouble(&ok);
    if (ok)
        qDebug() << d;
    else
        qDebug() << "todouble error!\n";

    d = QString("123.45").toFloat(&ok);
    if (ok)
        qDebug() << d;
    else
        qDebug() << "tofloat error!\n";

    d = QString("zhixin,19,female,loe to sx wt jrvi").toDouble(&ok);
    if (ok)
        qDebug() << d;
    else
        qDebug() << "todouble error!\n";
#endif
    string s1 = "hello";
    QString qs1 = QString::fromStdString(s1);
    qDebug() << qs1;

    string s2 = qs1.toStdString();
    cout << s2 << endl;

    return a .exec();
}
