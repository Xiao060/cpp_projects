#include<iostream>

using  namespace std;

// 静态外部链接性 变量
double warming = 0.3;

void update(double dt);
void local();

int main(){
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);            // update 引用外部链接变量, 并进行了修改
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Global warming is " << warming << " degrees.\n";

    return 0;
}



