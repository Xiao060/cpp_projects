#include<iostream>

double th_average(double x, double y);

using namespace std;


int main(){
    double x, y;
    cout << "请输入两个数: ";
    cin >> x >> y;
    while (x != 0 && y != 0){
        cout << x << " 和 " << y << "的调和平均数为 " 
             << th_average(x, y) << endl;
        cout << "请输入两个数: ";
        cin >> x >> y;
    }

    cout << "程序结束!";
    return 0;
}


double th_average(double x, double y){
    return 2.0*x*y / (x+y);
}