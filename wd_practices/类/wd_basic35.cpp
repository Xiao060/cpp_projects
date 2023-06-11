#include<iostream>

using namespace std;

class Complex{
    private:
        double real;
        double image;
    public:
        Complex();
        Complex(double r, double i);
        void show();
        friend Complex operator+(const Complex & x, const Complex & y);
};

Complex::Complex(){
    real = image = 0.0;
}

Complex::Complex(double r, double i){
    real = r;
    image = i;
}

void Complex::show(){
    cout << real << " + " << image << "i" << endl;
}

Complex operator+(const Complex & x, const Complex & y){
    Complex t;
    t.real = x.real + y.real;
    t.image = x.image + y.image;
    return t; 
}

int main(){
    Complex x(3, 4);
    Complex y(4, 5);

    Complex z = x + y;

    x.show();
    y.show();
    z.show();

    return 0;
}