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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QRadioButton *radioButton_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        radioButton = new QRadioButton(Widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 80, 91, 18));
        radioButton_2 = new QRadioButton(Widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 110, 91, 18));
        radioButton_2->setChecked(true);
        radioButton_3 = new QRadioButton(Widget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(50, 140, 91, 18));
        radioButton_4 = new QRadioButton(Widget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(320, 70, 91, 18));
        radioButton_5 = new QRadioButton(Widget);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(320, 110, 91, 18));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 40, 113, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 40, 91, 16));
        radioButton_6 = new QRadioButton(Widget);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(50, 170, 91, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Widget", "binary", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Widget", "Octal", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Widget", "hex", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("Widget", "RadioButton", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("Widget", "RadioButton", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "0", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("Widget", "decimal", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
