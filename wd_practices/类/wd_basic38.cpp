#include<iostream>

using namespace std;

int sum(int x, int y);

double sum(double x, double y);

int main(){
    int x, y;
    double m, n;

    cout << "输入 2 个整数: ";
    cin >> x >> y;
    cout << x << " + " << y << " = " << sum(x, y) << endl;

    cout << "输入 2 个浮点数: ";
    cin >> m >> n;
    cout << m << " + " << n << " = " << sum(m, n) << endl;

    return 0;
}

int sum(int x, int y){
    return x + y;
}

double sum(double x, double y){
    return x + y;
}

