#include<iostream>
#include "12.010_stringbad.h"

using namespace std;

void callme1(StringBad & rsb);
void callme2(StringBad sb);

int main(){
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;

        cout << "Initialize one object to another:\n";
        // 使用 1 个对象来初始化另一个对象, 系统会自动调用 复制构造函数, 但该函数不会更新 num_strings 的值
        // 其次, 默认复制构造函数 会复制非静态变量对应的 数值, 即 sailor.str = sports.str, 但.str 本身是一个指针, 所以执行完毕后得到的是两个指针指向同一块内存, 但后续 delete 其中一个指针后, 另一个指针的释放会出现问题
        // 初始化调用 默认复制构造函数
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;

        cout << "Assign one object to another:\n";
        StringBad knot;
        // 赋值调用的是 默认 重载赋值运算符=
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";

    return 0;
}

void callme1(StringBad & rsb){
    cout << "String passed by reference:\n";
    cout << "     \"" << rsb << "\"\n";
}

void callme2(StringBad sb){
    cout <<"String passed by value:\n";
    cout << "     \"" << sb << "\"\n";
}