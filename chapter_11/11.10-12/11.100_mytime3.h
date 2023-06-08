#ifndef MYTIME_H_
#define MYTIME_H_

#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time(int h, int m=0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h=0, int m=0);
        Time operator+(const Time & t) const;
        Time operator-(const Time & t) const;
        Time operator*(double n) const;

        // 定义 2 个友元函数
        // 该函数为内联函数, 因代码短小
        friend Time operator*(double m, const Time & t){ return t * m; } 
        // 返回 ostream 的引用
        friend ostream & operator<<(ostream & os, const Time & t);
};

#endif