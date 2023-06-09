#include<iostream>
#include "11.190_stonewt1.h"

using namespace std;

Stonewt::Stonewt(){
    pounds = pds_left = pounds = 0;
}

Stonewt::Stonewt(double lbs){
    pounds = lbs;
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
}

Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = lbs + stn * Lbs_per_stn;
}

Stonewt::~Stonewt(){}

void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";

}

void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}


// 类型转换函数
Stonewt::operator int() const {
    return int (pounds + 0.5);
}

Stonewt::operator double() const {
    return pounds;
}

// 上述 2 个类型转换函数能够实现 隐式类型转换, 但 隐式转换 有可能不问题
// 故可以使用 explicit 将隐式转换关闭, 只能通过 显式 进行转换