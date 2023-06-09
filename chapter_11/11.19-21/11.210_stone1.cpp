#include<iostream>
#include "11.190_stonewt1.h"

using namespace std;

int main(){
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;

    poppins.show_lbs();

    cout << "Convert to double => "
         << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to in => "
         << "Poppins: " << int (poppins) << " pounds.\n";

    return 0;
}