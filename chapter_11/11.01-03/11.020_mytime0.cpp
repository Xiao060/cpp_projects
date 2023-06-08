#include<iostream>
#include "11.010_mytime0.h"

using namespace std;

Time::Time(){
    hours  = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes /60;
    minutes = minutes % 60;
}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

// 返回值为 Time 类, 而不是引用
// 因为函数内创建的 sum 对象是一个临时变量, 函数运行结束后, 临时变量会释放, 返回引用得到的是一个空值
// 返回 Time 类 会把 sum 对象复制到另一个 Time 对象中, 然后才释放 sum 对象
Time Time::Sum(const Time & t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::Show() const {
    cout << hours << " hours, " << minutes << " minutes";
}