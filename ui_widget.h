/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *readparameterpB;
    QPushButton *connectpB;
    QPushButton *parametersetpB;
    QPushButton *sendaxispB;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *aimnumLE;
    QLineEdit *roubddistanceLE;
    QLineEdit *timedurationLE;
    QLineEdit *sendmodeLE;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *speedLE;
    QLabel *label_7;
    QLineEdit *ipadressLE;
    QLineEdit *axisLE;
    QTextBrowser *messagedisTB;
    QLabel *label_8;
    QPushButton *moderead;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        readparameterpB = new QPushButton(Widget);
        readparameterpB->setObjectName("readparameterpB");
        readparameterpB->setGeometry(QRect(470, 190, 93, 28));
        connectpB = new QPushButton(Widget);
        connectpB->setObjectName("connectpB");
        connectpB->setGeometry(QRect(460, 450, 93, 28));
        parametersetpB = new QPushButton(Widget);
        parametersetpB->setObjectName("parametersetpB");
        parametersetpB->setGeometry(QRect(30, 320, 93, 28));
        sendaxispB = new QPushButton(Widget);
        sendaxispB->setObjectName("sendaxispB");
        sendaxispB->setGeometry(QRect(10, 50, 93, 28));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 0, 69, 19));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 150, 69, 19));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 200, 111, 19));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 250, 141, 19));
        aimnumLE = new QLineEdit(Widget);
        aimnumLE->setObjectName("aimnumLE");
        aimnumLE->setGeometry(QRect(230, 150, 113, 25));
        roubddistanceLE = new QLineEdit(Widget);
        roubddistanceLE->setObjectName("roubddistanceLE");
        roubddistanceLE->setGeometry(QRect(230, 200, 113, 25));
        timedurationLE = new QLineEdit(Widget);
        timedurationLE->setObjectName("timedurationLE");
        timedurationLE->setGeometry(QRect(230, 250, 113, 25));
        sendmodeLE = new QLineEdit(Widget);
        sendmodeLE->setObjectName("sendmodeLE");
        sendmodeLE->setGeometry(QRect(230, 390, 113, 25));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 390, 121, 19));
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(470, 150, 111, 19));
        speedLE = new QLineEdit(Widget);
        speedLE->setObjectName("speedLE");
        speedLE->setGeometry(QRect(610, 150, 113, 25));
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(70, 460, 69, 19));
        ipadressLE = new QLineEdit(Widget);
        ipadressLE->setObjectName("ipadressLE");
        ipadressLE->setGeometry(QRect(230, 450, 161, 25));
        axisLE = new QLineEdit(Widget);
        axisLE->setObjectName("axisLE");
        axisLE->setGeometry(QRect(130, 30, 601, 81));
        messagedisTB = new QTextBrowser(Widget);
        messagedisTB->setObjectName("messagedisTB");
        messagedisTB->setGeometry(QRect(470, 240, 256, 192));
        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(390, 240, 69, 21));
        moderead = new QPushButton(Widget);
        moderead->setObjectName("moderead");
        moderead->setGeometry(QRect(10, 390, 93, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        readparameterpB->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\217\202\346\225\260", nullptr));
        connectpB->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        parametersetpB->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        sendaxispB->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\235\220\346\240\207", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\235\220\346\240\207\345\200\274", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\233\256\346\240\207\346\225\260\351\207\217", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\257\217\345\234\210\350\267\235\347\246\273\357\274\210mm\357\274\211", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\220\271\346\260\224\346\214\201\347\273\255\346\227\266\351\227\264\357\274\210mm\357\274\211", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\230\257\345\220\246\346\230\257\345\217\221\351\200\201\346\250\241\345\274\217", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\347\232\256\345\270\246\351\200\237\345\272\246\357\274\210mm\357\274\211", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "ip\345\234\260\345\235\200", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\346\212\245\346\226\207\346\230\276\347\244\272", nullptr));
        moderead->setText(QCoreApplication::translate("Widget", "\346\250\241\345\274\217\350\257\273\345\217\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
