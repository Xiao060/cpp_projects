#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Base{
    private:
        
    public:
        string type;
        virtual void area(){};
};


class Triangle : public Base{
    private:
        double bottom;
        double height;
    public:
        Triangle(double b=0, double h=0){
            type = "三角形";
            bottom = b;
            height = h;
        }
        virtual void area(){
            cout << type << " : " << bottom * height / 2 << endl; 
        }
};

class Square : public Base{
    private:
        double length;
    public:
        Square(double l=0){
            type = "正方形";
            length = l;
        }
        virtual void area(){
            cout << type << " : " << length * length << endl;
        }  
};

class Circle : public Base{
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
    Triangle s(3, 7);
    s.area();

    Square z(7);
    z.area();

    Circle y(5);
    y.area();

    return 0;
}