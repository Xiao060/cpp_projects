#include<iostream>
#include<cmath>

using namespace std;

class Triangle{
    private:
        double a;
        double b;
        double c;
    public:
        Triangle();
        Triangle(double x, double y, double z);
        double area();
        double operator+(Triangle & t);
};

Triangle::Triangle(){
    a = b = c = 0.0;
}

Triangle::Triangle(double x, double y, double z){
    a = x;
    b = y;
    c = z;
}

double Triangle::area(){
    double p = (a + b + c) / 2.0;
    double s = sqrt(p * (p-a) * (p-b) * (p-c));
    return s;
}

double Triangle::operator+(Triangle & t){
    double sum = area() + t.area();
    return sum;
}

int main(){

    Triangle x(3, 4, 6);
    cout << "x 面积: " << x.area() << endl;
    
    Triangle y(12, 13, 5);
    cout << "y 面积: " << y.area() << endl;

    cout << "x + y 面积: " << x + y << endl;

    return 0;
}