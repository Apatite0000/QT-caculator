#include <iostream>
#include <stack>
#include <map>
void parent(std::string formula);//合法括号
void continuity(std::string formula,std::map<char,std::map<char,int> > &rule);//非法判断 +- -+ */ /* +* +- /+ /-  1+!1是合法的
//void prenum(std::string formula);//非法判断 (+ (* 1(
void check(std::string formula,std::map<char,std::map<char,int> > &rule);
int caculate(std::string formula,std::map<char,std::map<char,int> > &rule);
int get_priority(char x);
bool is_int(char x);
