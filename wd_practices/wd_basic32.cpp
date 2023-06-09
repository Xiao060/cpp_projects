#include<iostream>

using namespace std;

class Box{
    private:
        double length;
        double width;
        double height;

    public:
        Box();
        Box(double l, double w, double h);
        double area();
        double volume();
};

Box::Box(){
    length = width = height = 0.0;
}

Box::Box(double l, double w, double h){
    length = l;
    width = w;
    height = h;
}

double Box::area(){
    return 2 * (length * width + length * height + width * height);
}

double Box::volume(){
    return length * width * height;
}

int main(){
    Box box (3.0, 4.1, 5.0);
    cout << "Area: " << box.area() << endl;
    cout << "Volumn: " << box.volume() << endl;

    return 0;
}