#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Shape{
    private:    

    public:
        string type; 
        virtual void area(){};
};

class Rectangle : public Shape{
    private:
        double length;
        double width;

    public:
        Rectangle(double l=0, double w=0){
            type = "长方形";
            length = l;
            width = w;
        };

        virtual void area(){
            cout << type << " : " << length * width << endl;
        }
};

class Trapezoid : public Shape{
    private:
        double up_bottom;
        double down_bottom;
        double height;

    public:
        Trapezoid(double ub=0, double db=0, double h=0){
            type = "梯形";
            up_bottom = ub;
            down_bottom = db;
            height = h;
        }

        virtual void area(){
            cout << type << " : " << (up_bottom + down_bottom) * height / 2 << endl;
        }
};

class Circle : public Shape{
    private:
        double radius;

    public:
        Circle(double r=0){
            type = "圆形";
            radius = r;
        }

        virtual void area(){
            cout << type << " : " << M_PI * radius * radius << endl;
        }
};



int main(){

    Rectangle c(4, 7);
    c.area();

    Trapezoid t(2, 3, 5);
    t.area();

    Circle y(5);
    y.area();

    return 0;
}




