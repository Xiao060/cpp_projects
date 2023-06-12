#include<iostream>
// 提供传统 c 字符串(字符数组)函数, strcpy, strlen
#include<cstring>
#include "12.010_stringbad.h"

using namespace std;

int StringBad::num_strings = 0;

StringBad::StringBad(){
    len = 4;
    str = new char[4];
    strcpy(str, "C++");
    ++num_strings;
    cout << num_strings << ": \"" << str << "\" default object created\n";
}

StringBad::StringBad(const char * s){
    len = strlen(s);
    str = new char[len+1];
    strcpy(str, s);
    ++num_strings;
    cout << num_strings << ": \"" << str << "\" object created\n";
}

StringBad::~StringBad(){
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings << " left\n";
    delete [] str;
}

ostream & operator<<(ostream & os, const StringBad & st){
    os << st.str;
    return os;
}