#include "cacu.h"

void parent(std::string formula)
{
    int pp = 0;
    for (int i = 0; i < formula.length(); i++)
    {
        if (formula.at(i) == '(')    pp++;
        if (formula.at(i) == ')')  pp--;
        if (pp < 0)    throw(2000);
    }
    if (pp != 0)   throw(2001);
    // 2000:括号顺序错误 2001:括号数目不匹配
}

void continuity(std::string formula,std::map<char,std::map<char,int> > &rule)
{
    formula = '#'+formula;//原式子补全
    for (int i = 1; i < formula.length(); i++)
    {
        char t1 = formula.at(i - 1);//前一位
        char t2 = formula.at(i);
        if(is_int(t1))    t1 = 'N';//数字化为N比较搭配
        if(is_int(t2))    t2 = 'N';
        if(t1=='&'&&t2=='&'&&formula.at(i-2)!='&'&&formula.at(i+1)!='&')    continue;
        if(t1=='|'&&t2=='|'&&formula.at(i-2)!='|'&&formula.at(i+1)!='|')    continue;
        if(rule[t1][t2]!=-1)    throw(rule[t1][t2]);
        /*
        if (!is_int(t1) && !is_int(t2))
        {
            if (t2 == '(')     continue;// +(合法 括号在后面
            if (t1 == ')' && t2 != '!')   continue;// )+合法  )!非法
            if (t1 == '&' && t2 == '&')     continue;
            if (t1 == '|' && t2 == '|')     continue;
            if (t2 == '!')     continue;
            //if (t1 == '!' || t2 == '(')     continue;
            throw(20);// ++ +- (+ (-   )! 
        }
        */
    }
}

/*
void prenum(std::string formula)
{
    for (int i = 1; i < formula.length(); i++)
    {
        char t1 = formula.at(i - 1);
        char t2 = formula.at(i);
        if (t1 == ')' && is_int(t2))     throw(30);
        if (is_int(t1) && t2=='(')     throw(31);
    }
    //30:后括号连着数字 31:前括号连着数字
}
*/

void check(std::string formula,std::map<char,std::map<char,int> > &rule)
{
    parent(formula);
    continuity(formula,rule);
    //prenum(formula);
}

int caculate(std::string formula,std::map<char,std::map<char,int> > &rule)
{
    formula = formula + '#';
    check(formula,rule);
    std::stack<int> num;
    std::stack<char> ope;
    ope.push('#');
    int tnum = 0;
    bool is_num = false;
    for (int i = 0; i < formula.length(); i++)
    {
        char pos = formula.at(i);
        if (is_int(pos))// if int
        {
            tnum = tnum * 10 + pos - '0';
            is_num = true;
        }
        else
        {//if char
            if (is_num)
            {
                num.push(tnum);
                tnum = 0;
                is_num = false;
            }
            //if (i==0 || !is_int(formula.at(i - 1)) && pos == '(')
            if (pos == '(')
            {
                //前括号直接入栈并继续循环
                ope.push('(');
                continue;
            }


            while (get_priority(ope.top()) >= get_priority(pos))//优先级比较
            {
                char t1 = ope.top();
                if (t1 == '(' && pos == ')')
                {
                    break;//当前后括号与栈顶前括号配对跳出循环处理
                }
                if (t1 == '#' && pos == '#')
                {
                    return num.top();//计算完毕得到答案
                }

                if (t1=='+')
                {
                    int a=num.top();
                    num.pop();//取出第一个数
                    int b=num.top();
                    num.pop();//取出第二个数

                    num.push(a + b);
                }
                if (t1 == '-')
                {
                    int a = num.top();
                    num.pop();
                    int b = num.top();
                    num.pop();

                    num.push(b - a);

                }
                if (t1 == '*')
                {
                    int a = num.top();
                    num.pop();
                    int b = num.top();
                    num.pop();

                    num.push(a * b);

                }
                if (t1 == '/')
                {
                    int a = num.top();
                    num.pop();
                    int b = num.top();
                    num.pop();

                    if(a == 0)    throw(3000);//0为被除数时
                    if( b % a != 0)     throw(3001);
                    num.push(b / a);

                }
                if (t1 == '&')
                {
                    int a = num.top();
                    num.pop();
                    int b = num.top();
                    num.pop();

                    num.push(a && b);

                }
                if (t1 == '|')
                {
                    int a = num.top();
                    num.pop();
                    int b = num.top();
                    num.pop();

                    num.push(a || b);

                }
                if (t1 == '!')
                {
                    int a = num.top();
                    num.pop();
                    //身为一元运算符！只需取一个即可
                    num.push(!a);
                }
                    
                ope.pop();
            }
            //while 结束

            if (ope.top() == '(' && pos == ')')
            {
                ope.pop();//成功配对括号处理
            }
            else
            {
                ope.push(pos);//否则符号入栈
            }
            if (pos == '&' || pos == '|')  i++;//&&、||双写跳过

        }
        //进入下一次for
    }
}


int get_priority(char x)//获取优先级
{
    if (x == '#')  return 0;
    if (x == '(' || x == ')')  return 1;
    if (x == '+' || x == '-')  return 2;
    if (x == '*' || x == '/')  return 3;
    if (x == '|')  return 4;
    if (x == '&')  return 5;
    if (x == '!')  return 6;
}

bool is_int(char x)
{
    if (x >= '0' && x <= '9')  return true;
    return false;
}
