#include<iostream>

unsigned int c_in_str(const char* str, char ch);
using namespace std;


int main(){
    char mmm[15] = "minimum";

    char* wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');

    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;

    return 0;
}


// 函数作用: 统计字符串中某字符出现的次数, 不修改字符串, 故参数声明用 const
unsigned int c_in_str(const char* str, char ch){
    unsigned int count = 0;

    while (*str){
        if (*str == ch)
            ++count;
        ++str;
    }

    return count;
}


