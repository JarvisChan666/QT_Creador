/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *oprand1;
    QLineEdit *operand2;
    QLabel *result;
    QLabel *label_2;
    QLabel *equal;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        oprand1 = new QLineEdit(Widget);
        oprand1->setObjectName(QStringLiteral("oprand1"));
        oprand1->setGeometry(QRect(20, 70, 113, 121));
        QFont font;
        font.setPointSize(20);
        oprand1->setFont(font);
        oprand1->setAlignment(Qt::AlignCenter);
        operand2 = new QLineEdit(Widget);
        operand2->setObjectName(QStringLiteral("operand2"));
        operand2->setGeometry(QRect(220, 70, 113, 121));
        operand2->setFont(font);
        operand2->setAlignment(Qt::AlignCenter);
        result = new QLabel(Widget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(420, 70, 151, 111));
        result->setFont(font);
        result->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(143, 130, 61, 20));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        equal = new QLabel(Widget);
        equal->setObjectName(QStringLiteral("equal"));
        equal->setGeometry(QRect(340, 120, 54, 12));
        equal->setFont(font);
        equal->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        oprand1->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        operand2->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        result->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "+", Q_NULLPTR));
        equal->setText(QApplication::translate("Widget", "=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
