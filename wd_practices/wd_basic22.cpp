#include<iostream>

using namespace std;

int main(){
    double m, n;
    cout << "请输入2个数(m, n): ";
    cin >> m >> n;

    m += n; 
    n = m - n;
    m -= n;

    cout << "交换后: m = " << m << ", n = " << n << endl;

    return 0;
}