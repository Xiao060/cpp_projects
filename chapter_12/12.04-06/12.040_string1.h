#ifndef STRING1_H_
#define STRING1_H_

#include<iostream>

using namespace std;

class String{
    private:
        char * str;
        int len;
        static int num_strings;
        static const int CINLIM = 80;
    public:
        String();
        String(const char * s);
        String(const String &);
        ~String();

        // 内联函数, 求长度
        int length() const { return len;}

        // 重载 赋值 运算符
        String & operator=(const String &);
        String & operator=(const char *);

        // 重载 中括号 运算符, 
        char & operator[](int i);
        const char & operator[](int i) const;

        // 重载比较运算符
        friend bool operator<(const String & st1, const String & st2);
        friend bool operator>(const String & st1, const String & st2);
        friend bool operator==(const String & st1, const String & st2);

        // 重载 输入/输出 运算符
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & is, String & st);

        // 定义静态函数, 只能访问静态变量, 不与特定对象绑定, 调用时通过作用域解析运算符, 例: String::HowMany()
        static int HowMany();
};


#endif