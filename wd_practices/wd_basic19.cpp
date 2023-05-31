#include<iostream>

using namespace std;

int sum(int n);

int main(){
    int n, s=0;

    cout << "请输入n的值: ";
    cin >> n;

    cout << "和为: " << sum(n);

    return 0;
}

int sum(int n){
    if (n == 1)
        return 12;
    else
        return sum(n-1) + n*10+2;
}