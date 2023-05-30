#include<iostream>

int main(){
    using namespace std;

    double x;
    cout << "请输入x的值: ";
    cin >> x;

    if (x < 5)
        cout << x << endl;
    else if (5 <= x && x < 15)
        cout << x+6 << endl;
    else
        cout << x-6; 

    return 0;
}