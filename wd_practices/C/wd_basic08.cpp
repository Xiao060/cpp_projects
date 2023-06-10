#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a, b, c;
    double p, S;

    cout << "请输入三角形的三边长: ";
    cin >> a >> b >> c;

    if (a+b>c && a+c>b && b+c>a){
        p = (a+b+c)/2;
        S = pow(p*(p-a)*(p-b)*(p-c), 0.5);
        cout << "三角形面积为: " << S << endl; 
        if (a==b && a==c)
            cout << "三角形类型为: 等边三角形" << endl;
        else if (a==b || a==c || b==c)
            cout << "三角形类型为: 等腰三角形" << endl;
        else if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "三角形类型为: 直角三角形" << endl;
    }else
        cout << "不能组成三角形!";

    return 0;
}