#include<iostream>

using namespace std;

const int ArSize = 10;

void strcount(const char * str);

int main(){
    char input[ArSize];
    char next;

    cout << "Enter a line: ";
    // 读取行输入, 但会将 \n 留在输入队列中
    cin.get(input, ArSize); 
    while (cin){            // 读取空行, cin 为 false
        // 获取 读取序列 后的字符, 若为 \n 说明本行读取完全, 否则, 未读完
        cin.get(next);          
        while (next != '\n')            // 未读完丢弃剩余字符
            cin.get(next);
        strcount(input);
        cout << "Enter next line (empty line to quit): ";
        cin.get(input, ArSize);
    }

    return 0;
}


void strcount(const char * str){
    // 静态变量只在程序第一次运行时初始化为 0, 后面再调用, 值不再初始化
    static int total = 0;       
    int count = 0;

    // 此处统计 str 长度时, 指针 str 会向后移动, 所以需要在统计前输出 str 
    cout <<"\"" << str << "\" contains "; 

    while (*str++)
        ++count;

    total += count;

    cout << count << " characters\n";
    cout << total << " characters total\n";
}

