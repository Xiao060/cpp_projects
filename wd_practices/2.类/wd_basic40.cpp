#include<iostream>

using namespace std;

class Counter{
    private:
        int n;
    public:
        Counter();
        Counter(int a);
        int show();
        // 默认一元运算符, 前缀形式, 例如 负号(-) 
        void operator++();
        void operator--();
        void operator++(int);
        void operator--(int); 
};

Counter::Counter(){
    n = 0;
}

Counter::Counter(int a){
    n = a;
}

int Counter::show(){
    return n;
}

void Counter::operator++(){
    ++n;
}

void Counter::operator--(){
    --n;
}

void Counter::operator++(int){
    ++n;
}

void Counter::operator--(int){
    --n;
}


int main(){
    Counter x(5);
    cout << x.show() << endl;
    
    ++x;
    cout << x.show() << endl;

    --x;
    cout << x.show() << endl;

    x++;
    cout << x.show() << endl;

    x--;
    cout << x.show() << endl;


    return 0;
}