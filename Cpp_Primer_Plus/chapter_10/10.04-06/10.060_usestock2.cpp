#include<iostream>
#include "10.040_stock10.h"

int main(){

    {
        cout << "Using constructors to create new objects\n";
        Stock stock1("NanoSmart", 12, 20.0);
        stock1.show();
        // 该语句为初始化语句, 大部分编译器不会创建临时变量
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);
        stock2.show();

        cout << "\nAssigning stock1 to stock2:\n";
        stock2 = stock1;
        cout << "Listing stock1 and stock2:\n";
        stock1.show();
        stock2.show();

        cout << "\nUsing a constructor to reset an object\n";
        // 该语句为赋值语句, 系统会创建临时Stock对象, 然后将它赋值给 stock1, 所以赋值完成后会执行 析构函数 删除临时变量
        stock1 = Stock("Nifty Foods", 10, 50.0);
        cout << "Revised stock1:\n";
        stock1.show();
        cout << "Done\n";
    }

    return 0;
}