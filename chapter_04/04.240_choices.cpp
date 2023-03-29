#include<iostream>
#include<vector>
#include<array>

int main(){
    using namespace std;

    double a1[4] = {1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;

    array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;

    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    // 此处-2代表从a1开始往前数2个double的位置, 即将20.2储存到数组前面的内存位置上,
    // 该行为是不安全的, 若想要避免可以使用vector/array的at()函数  
    a1[-2] = 20.2;
    // a2.at(1) = 2.3;           // 等价于 a2[1] = 2.3, 但若索引非法, 则中断运行
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    return 0;  
}