#include<iostream>

using namespace std;

void countdown(int n);

int main(){
    countdown(4);
    return 0;
}

// 每次调用都会创建一个 "独立" 的 n, 可以通过地址查看, 变量 n 所处位置进行判断, 见1
void countdown(int n){
    cout << "Counting down ..." << n << endl;
    if (n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!\n";
}