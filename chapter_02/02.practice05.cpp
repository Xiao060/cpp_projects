#include<iostream>
double wendu(double);

using namespace std;

int main(){
    double wd;
    cout << "请输入温度(摄氏度)：";
    cin >> wd;
    cout << wd << " 摄氏度 = " << wendu(wd) << " 华氏度" << endl;
    return 0;
}

double wendu(double n){
    return n*1.8+32.0;
}