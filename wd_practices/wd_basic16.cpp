#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double r, h;

    cout << "请输入半径: ";
    cin >> r;

    cout << "请输入高: ";
    cin >> h;

    cout << "圆柱体底面积为: " << M_PI * r * r << endl;
    cout << "圆柱体底面积为: " << M_PI * r * r * h << endl;

    return 0;
}