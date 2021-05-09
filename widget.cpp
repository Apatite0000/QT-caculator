#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);
    setWindowIcon(QIcon("title.png"));
    std::ifstream in("rule.txt");
    if(!in.is_open())
    {
        QMessageBox a;
        a.setWindowTitle("未找到文件");
        a.setIcon(QMessageBox::Critical);
        a.setText("未成功打开rule.txt，无法进行计算");
        a.exec();
        ui->po_10->setEnabled(false);
    }
    for(int i=0;i!=ONUM;i++)
    {
        in >> o[i];
    }
    for(int i=0;i!=ONUM;i++)
    {
        for(int j=0;j!=ONUM;j++)
        {
            char t2;
            in >> t2;
            if(t2=='T')//第i行第j个值  ji 实际顺序
            {
                rule[o[j]][o[i]] = -1;//正确的
            }
            else
            {
                rule[o[j]][o[i]] = j*100 + i;//错误的 抛出的错误代码
            }
        }
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_p1_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'1';
    ui->inputbox->setText(t);
}

void Widget::on_p2_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'2';
    ui->inputbox->setText(t);
}

void Widget::on_p3_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'3';
    ui->inputbox->setText(t);
}

void Widget::on_p4_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'4';
    ui->inputbox->setText(t);
}

void Widget::on_p5_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'5';
    ui->inputbox->setText(t);
}

void Widget::on_p6_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'6';
    ui->inputbox->setText(t);
}

void Widget::on_p7_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'7';
    ui->inputbox->setText(t);
}

void Widget::on_p8_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'8';
    ui->inputbox->setText(t);
}

void Widget::on_p9_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'9';
    ui->inputbox->setText(t);
}

void Widget::on_p10_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'0';
    ui->inputbox->setText(t);
}

void Widget::on_po_9_clicked()
{
    ui->inputbox->setText("");
    ui->outputbox->setText("");
}

void Widget::on_po_0_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'+';
    ui->inputbox->setText(t);
}

void Widget::on_po_1_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'-';
    ui->inputbox->setText(t);
}

void Widget::on_po_2_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'*';
    ui->inputbox->setText(t);
}

void Widget::on_po_3_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'/';
    ui->inputbox->setText(t);
}

void Widget::on_po_4_clicked()
{
    QString t=ui->inputbox->text();
    t=t+"&&";
    ui->inputbox->setText(t);
}

void Widget::on_po_5_clicked()
{
    QString t=ui->inputbox->text();
    t=t+"||";
    ui->inputbox->setText(t);
}

void Widget::on_po_6_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'!';
    ui->inputbox->setText(t);
}

void Widget::on_po_7_clicked()
{
    QString t=ui->inputbox->text();
    t=t+'(';
    ui->inputbox->setText(t);
}

void Widget::on_po_8_clicked()
{
    QString t=ui->inputbox->text();
    t=t+')';
    ui->inputbox->setText(t);
}

void Widget::on_po_11_clicked()
{
    QString x = ui->inputbox->text();
    if(!x.isEmpty())
        if(x.at(x.length()-1)=='|'||x.at(x.length()-1)=='&')    x=x.mid(0,x.length()-2);
        else    x=x.mid(0,x.length()-1);
    ui->inputbox->setText(x);
}

void Widget::on_po_10_clicked()
{
    QString Qformula = ui->inputbox->text();
    std::string formula;
    formula = Qformula.toStdString();
    try
    {
        int a = caculate(formula,rule);
        QString result=QString::number(a);
        result = Qformula+ " = " + result;
        ui->outputbox->setText(result);
        ui->inputbox->setText("");
    }
    catch (int x)
    {
        QMessageBox msgBox;
        QString a=QString::number(x);
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setWindowTitle("警告");
        if(x==909)
        {
            msgBox.setText("表达式为空");
        }
        else if(x==2000)
        {
            msgBox.setText("括号顺序错误");
        }
        else if(x==2001)
        {
            msgBox.setText("括号个数错误");
        }
        else if(x==3000)
        {
            msgBox.setText("除数为零");
        }
        else if(x==3001)
        {
            msgBox.setText("只支持整除");
        }
        else
        {
            int x1,x2;
            x1 = x/100;
            x2 = x%100;
            std::string error_ope1,error_ope2;
            error_ope1 = o[x1];
            error_ope2 = o[x2];
            QString Qerror_ope= QString::fromStdString(error_ope1)+" " +QString::fromStdString(error_ope2);
            msgBox.setText("符号搭配错误\n错误符号" + Qerror_ope);
        }
        ui->outputbox->setText("WRONG errorcode "+a);
        msgBox.exec();
    }
}

void Widget::on_about_clicked()
{
    QMessageBox a;
    a.setWindowTitle("About");
    a.setIcon(QMessageBox::Information);
    a.setText("计算器.exe\n当前版本  2.0\n报错时N代表符号与数字的错误结合\n报错时#代表符号在表达式最前或最后产生错误\npowered by Alan at HFUT 2021/5/8");
    a.exec();
}
