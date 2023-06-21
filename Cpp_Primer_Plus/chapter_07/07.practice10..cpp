#include<iostream>

using namespace std;


double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*f)(double, double));


int main(){
    double x, y;
    cout << "请分别输入2个浮点数: ";
    while (cin >> x >> y){
        cout << x << " " << y << " 之和为: " << calculate(x, y, add) << endl;
        cout << x << " " << y << " 之差为: " << calculate(x, y, sub) << endl;
    }

    return 0;
}

double add(double x, double y){
    return x + y;
}

double sub(double x, double y){
    return x - y;
}

double calculate(double x, double y, double (*f)(double, double)){
    double m = f(x, y);          // 此处调用也可以写为 (*f)(x, y)
    return m;
}







