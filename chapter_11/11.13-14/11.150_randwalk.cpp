#include<iostream>
#include<cstdlib>   // 提供 rand()/srand() 函数
#include<ctime>     // 提供 time() 函数
#include "11.130_vector.h"

using namespace std;
using VECTOR::Vector;

/*
using namespace VECTOR;
*/ 

int main(){
    // rand() 根据种子生成数字, 要生成(伪)随机数字, 需要改变种子
    // 此处以 1970.1.1.0 到现在的时间作为种子, 每次生成数字时种子不同
    srand(time(0));     
    double direction;
    Vector step;                // 记录每一步的向量
    Vector result(0.0, 0.0);    // 记录走的总向量
    unsigned long steps = 0;    // 记录步数
    double target;              // 记录总长度
    double dstep;               // 记录单步长

    cout << "Enter target distance (q to quit): ";
    while (cin >> target){
        
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        
        while (result.magval() < target){
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            ++steps;
        }

        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or " << result << endl;

        cout << "Average outward distance per step = " << result.magval() / steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;

    return 0;
}