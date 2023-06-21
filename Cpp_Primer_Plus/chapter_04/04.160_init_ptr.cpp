#include<iostream>

int main(){
    using namespace std;

    int higgens = 5;
    int* pt = &higgens;             // 声明并初始化指针

    cout << "Value of higgens = " << higgens 
         << "; Address of higgens = " << &higgens << endl;

    cout << "Value of *pt = " << *pt
         << "; Value of pt = " << pt << endl;

    return 0;
}