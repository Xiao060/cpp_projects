#include<iostream>

long f(int n);

using namespace std;


int main(){

    int n;
    cout << "请输入一个整数: ";
    cin >> n;

    long m = f(n);
    cout << n << "! = " << m << endl;

    return 0;
}


long f(int n){
    if (n == 0)
        return 1;
    else
        return n * f(n-1);
}