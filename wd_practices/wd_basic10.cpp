#include<iostream>

using namespace std;

int main(){
    double ht, st;

    cout << "请输入华氏温度: ";
    cin >> ht;

    st = (ht-32) * 5 / 9;

    cout << "摄氏温度为: " << st << endl;

    return 0;
}