#include<iostream>

const int Size = 2;

using namespace std;



double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*f)(double, double));


int main(){
    double (*pf[Size])(double, double) = {add, sub};

    double x, y;
    cout << "请分别输入2个浮点数: ";
    while (cin >> x >> y){
        for (int i=0; i<Size; ++i)
            cout << calculate(x, y, pf[i]) << endl;
        cout << "请分别输入2个浮点数: ";
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







