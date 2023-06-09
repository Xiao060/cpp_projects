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

Stonewt::operator int() const {
    return int (pounds + 0.5);
}

Stonewt::operator double() const {
    return pounds;
}