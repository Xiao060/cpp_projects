#include<iostream>
#include "11.160_stonewt.h"

using namespace std;

Stonewt::Stonewt(){
    stone = pounds = pds_left = 0;
}


// 该函数接收 1 个参数, 能够实现 隐式类型转换
// 例: Stonewt x; x = 19.6;
// 只有接收 1 个参数的 构造函数 才能这样
Stonewt::Stonewt(double lbs){
    stone = int (lbs) / Lbs_per_stn;
    // c++ 不支持 double % int, 所以此处稍微麻烦一些
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// 但是, 如果其他参数都为 默认参数, 则可以完成 隐式类型转换
Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

// 使用关键字 explicit 可以关闭 隐式类型转换
// 例: explicit Stonewt(double lbs);

Stonewt::~Stonewt(){}

void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}

void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}