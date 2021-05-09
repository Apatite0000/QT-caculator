#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <string>
#include <fstream>
#include "cacu.h"
#include <map>
#define ONUM 11
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_p1_clicked();

    void on_p2_clicked();

    void on_p3_clicked();

    void on_p4_clicked();

    void on_p5_clicked();

    void on_p6_clicked();

    void on_p7_clicked();

    void on_p8_clicked();

    void on_p9_clicked();

    void on_p10_clicked();

    void on_po_9_clicked();

    void on_po_0_clicked();

    void on_po_1_clicked();

    void on_po_2_clicked();

    void on_po_3_clicked();

    void on_po_4_clicked();

    void on_po_5_clicked();

    void on_po_6_clicked();

    void on_po_7_clicked();

    void on_po_8_clicked();

    void on_po_11_clicked();

    void on_po_10_clicked();

    void on_about_clicked();

private:
    Ui::Widget *ui;
    std::map<char,std::map<char,int> > rule;
    char o[12];
};
#endif // WIDGET_H
