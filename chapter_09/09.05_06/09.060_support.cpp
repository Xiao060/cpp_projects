#include<iostream>

using namespace std;
// 引用外部变量
extern double warming;

//static double warming = 0.6;

void update(double dt);
void local();

void update(double dt){
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming << " degrees.\n";
}

void local(){
    double warming = 0.8;

    cout << "Local warming = " << warming << " degrees.\n";
    // 此处 ::warming 表明使用 全局变量warming, :: 为作用域解析运算符
    cout << "But global warming = " << ::warming << " degrees.\n";
    
}
