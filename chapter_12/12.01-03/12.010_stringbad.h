#include<iostream>

using namespace std;

#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad{
    private:
        char * str;
        int len;
        // 静态变量, 所有对象共享这一个变量
        // 静态变量不能在类声明的时候创建, 因为声明类的时候并没有分配空间
        static int num_strings;
    public:
        StringBad();
        StringBad(const char * s);
        ~StringBad();
        // 友元函数, 重载 << 
        friend ostream & operator<<(ostream & os, const StringBad & st);
};

#endif