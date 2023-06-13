#include<iostream>
#include<cstring>
#include "12.040_string1.h"

using namespace std;

int String::num_strings = 0;

// 3 个构造函数
String::String(){
    len = 4;
    str = new char[1];
    str[0] = '\0';
    ++num_strings;
}

String::String(const char * s){
    len = strlen(s);
    str = new char[len+1];
    strcpy(str, s);
    ++num_strings;
}

String::String(const String & st){
    len = st.len;
    str = new char[len+1];
    strcpy(str, st.str);
    ++num_strings;
}

// 析构函数
String::~String(){
    delete [] str;
    --num_strings;
}



// 此处如果返回值为 void 也可以完成赋值的行为, 但是没有办法完成连续赋值(a = b = c)
// 因为该函数的参数为 String 的引用型, 所以如果用于连续赋值, 则该函数的 返回值 应与 参数 类型相同, 故函数返回值也为 String 的引用型
// s1 = s2, 因为返回值是指向 s1 的引用, 而 s1 是可以修改的, 所以返回的是 非const引用
String & String::operator=(const String & st){
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len+1];
    strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char *s){
    delete [] str;
    len = strlen(s);
    str = new char[len+1];
    strcpy(str, s);
    return *this;
}

// 重载 [] 运算符, 可以修改
char & String::operator[](int i){
    return str[i];
}

// 重载 [] 运算符, 不可修改
const char & String::operator[](int i) const {
    return str[i];
}

// 重载比较运算符
bool operator<(const String & st1, const String & st2){
    return (strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2){
    return st2 < st1;
    // return (strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String & st1, const String & st2){
    return !strcmp(st1.str, st2.str);
    return (strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st){
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    // 若输入流中还有数据, 则丢弃多余字符 
    while (is && is.get() != '\n')
        continue;
    return is;
}

int String::HowMany(){
    return num_strings;
}