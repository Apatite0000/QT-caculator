/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *inputbox;
    QPushButton *p1;
    QPushButton *p2;
    QPushButton *p3;
    QPushButton *p4;
    QPushButton *p5;
    QPushButton *p6;
    QPushButton *p7;
    QPushButton *p8;
    QPushButton *p9;
    QPushButton *p10;
    QLabel *outputbox;
    QPushButton *po_0;
    QPushButton *po_1;
    QPushButton *po_2;
    QPushButton *po_3;
    QPushButton *po_7;
    QPushButton *po_8;
    QPushButton *po_4;
    QPushButton *po_5;
    QPushButton *po_6;
    QPushButton *po_9;
    QPushButton *po_10;
    QPushButton *po_11;
    QPushButton *about;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(570, 430);
        Widget->setMinimumSize(QSize(570, 430));
        Widget->setMaximumSize(QSize(570, 430));
        inputbox = new QLineEdit(Widget);
        inputbox->setObjectName(QString::fromUtf8("inputbox"));
        inputbox->setGeometry(QRect(10, 10, 551, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Consolas"));
        font.setPointSize(20);
        inputbox->setFont(font);
        inputbox->setCursor(QCursor(Qt::ArrowCursor));
        inputbox->setMouseTracking(false);
        inputbox->setFocusPolicy(Qt::NoFocus);
        inputbox->setContextMenuPolicy(Qt::DefaultContextMenu);
        inputbox->setAcceptDrops(false);
        p1 = new QPushButton(Widget);
        p1->setObjectName(QString::fromUtf8("p1"));
        p1->setGeometry(QRect(10, 150, 60, 60));
        p1->setFont(font);
        p2 = new QPushButton(Widget);
        p2->setObjectName(QString::fromUtf8("p2"));
        p2->setGeometry(QRect(80, 150, 60, 60));
        p2->setFont(font);
        p3 = new QPushButton(Widget);
        p3->setObjectName(QString::fromUtf8("p3"));
        p3->setGeometry(QRect(150, 150, 60, 60));
        p3->setFont(font);
        p4 = new QPushButton(Widget);
        p4->setObjectName(QString::fromUtf8("p4"));
        p4->setGeometry(QRect(10, 220, 60, 60));
        p4->setFont(font);
        p5 = new QPushButton(Widget);
        p5->setObjectName(QString::fromUtf8("p5"));
        p5->setGeometry(QRect(80, 220, 60, 60));
        p5->setFont(font);
        p6 = new QPushButton(Widget);
        p6->setObjectName(QString::fromUtf8("p6"));
        p6->setGeometry(QRect(150, 220, 60, 60));
        p6->setFont(font);
        p7 = new QPushButton(Widget);
        p7->setObjectName(QString::fromUtf8("p7"));
        p7->setGeometry(QRect(10, 290, 60, 60));
        p7->setFont(font);
        p8 = new QPushButton(Widget);
        p8->setObjectName(QString::fromUtf8("p8"));
        p8->setGeometry(QRect(80, 290, 60, 60));
        p8->setFont(font);
        p9 = new QPushButton(Widget);
        p9->setObjectName(QString::fromUtf8("p9"));
        p9->setGeometry(QRect(150, 290, 60, 60));
        p9->setFont(font);
        p10 = new QPushButton(Widget);
        p10->setObjectName(QString::fromUtf8("p10"));
        p10->setGeometry(QRect(80, 360, 60, 60));
        p10->setFont(font);
        outputbox = new QLabel(Widget);
        outputbox->setObjectName(QString::fromUtf8("outputbox"));
        outputbox->setGeometry(QRect(10, 80, 541, 41));
        outputbox->setFont(font);
        outputbox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        po_0 = new QPushButton(Widget);
        po_0->setObjectName(QString::fromUtf8("po_0"));
        po_0->setGeometry(QRect(360, 150, 60, 60));
        po_0->setFont(font);
        po_1 = new QPushButton(Widget);
        po_1->setObjectName(QString::fromUtf8("po_1"));
        po_1->setGeometry(QRect(430, 150, 60, 60));
        po_1->setFont(font);
        po_2 = new QPushButton(Widget);
        po_2->setObjectName(QString::fromUtf8("po_2"));
        po_2->setGeometry(QRect(360, 220, 60, 60));
        po_2->setFont(font);
        po_3 = new QPushButton(Widget);
        po_3->setObjectName(QString::fromUtf8("po_3"));
        po_3->setGeometry(QRect(430, 220, 60, 60));
        po_3->setFont(font);
        po_7 = new QPushButton(Widget);
        po_7->setObjectName(QString::fromUtf8("po_7"));
        po_7->setGeometry(QRect(500, 150, 60, 60));
        po_7->setFont(font);
        po_8 = new QPushButton(Widget);
        po_8->setObjectName(QString::fromUtf8("po_8"));
        po_8->setGeometry(QRect(500, 220, 60, 60));
        po_8->setFont(font);
        po_4 = new QPushButton(Widget);
        po_4->setObjectName(QString::fromUtf8("po_4"));
        po_4->setGeometry(QRect(360, 290, 60, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Consolas"));
        font1.setPointSize(18);
        po_4->setFont(font1);
        po_5 = new QPushButton(Widget);
        po_5->setObjectName(QString::fromUtf8("po_5"));
        po_5->setGeometry(QRect(430, 290, 60, 60));
        po_5->setFont(font);
        po_6 = new QPushButton(Widget);
        po_6->setObjectName(QString::fromUtf8("po_6"));
        po_6->setGeometry(QRect(500, 290, 60, 60));
        po_6->setFont(font1);
        po_9 = new QPushButton(Widget);
        po_9->setObjectName(QString::fromUtf8("po_9"));
        po_9->setGeometry(QRect(230, 150, 111, 60));
        po_9->setFont(font);
        po_10 = new QPushButton(Widget);
        po_10->setObjectName(QString::fromUtf8("po_10"));
        po_10->setGeometry(QRect(230, 360, 111, 60));
        po_10->setFont(font);
        po_11 = new QPushButton(Widget);
        po_11->setObjectName(QString::fromUtf8("po_11"));
        po_11->setGeometry(QRect(360, 360, 131, 60));
        po_11->setFont(font);
        about = new QPushButton(Widget);
        about->setObjectName(QString::fromUtf8("about"));
        about->setGeometry(QRect(500, 390, 61, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Consolas"));
        font2.setPointSize(9);
        about->setFont(font2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\350\256\241\347\256\227\345\231\250 ver2.0", nullptr));
        inputbox->setText(QString());
        p1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        p2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        p3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        p4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        p5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        p6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        p7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        p8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        p9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        p10->setText(QCoreApplication::translate("Widget", "0", nullptr));
        outputbox->setText(QString());
        po_0->setText(QCoreApplication::translate("Widget", "+", nullptr));
        po_1->setText(QCoreApplication::translate("Widget", "-", nullptr));
        po_2->setText(QCoreApplication::translate("Widget", "*", nullptr));
        po_3->setText(QCoreApplication::translate("Widget", "/", nullptr));
        po_7->setText(QCoreApplication::translate("Widget", "(", nullptr));
        po_8->setText(QCoreApplication::translate("Widget", ")", nullptr));
        po_4->setText(QCoreApplication::translate("Widget", "and", nullptr));
        po_5->setText(QCoreApplication::translate("Widget", "or", nullptr));
        po_6->setText(QCoreApplication::translate("Widget", "not", nullptr));
        po_9->setText(QCoreApplication::translate("Widget", "A C", nullptr));
        po_10->setText(QCoreApplication::translate("Widget", "\350\256\241 \347\256\227", nullptr));
        po_11->setText(QCoreApplication::translate("Widget", "\351\200\200 \346\240\274", nullptr));
        about->setText(QCoreApplication::translate("Widget", "about", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
