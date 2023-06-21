#include<iostream>
#include<string>

using namespace std;

class Rectangle{
    public:
        double length;
        double width;
        string type;

    private:
        Rectangle();
        Rectangle(double l, double w);
        void square();
};

Rectangle::Rectangle(){
    type = "长方形";
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle(double l, double w){
    type = "长方形";
    length = l;
    width = w;
}


void Rectangle::square(){
    cout << type << " : " << length * width;
}


int main(){
        Rectangle x(4.0, 5.0);



    return 0;
}


    LNode * p = h->next;

    while (p){
        cout << p->data << " ";
        p = p->next;
    }
 
    cout << endl;
}