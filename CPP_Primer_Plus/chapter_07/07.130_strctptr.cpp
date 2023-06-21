#include<iostream>
#include<cmath>

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

void show_polor(const polar* pda);
void rect_to_polor(const rect* pxy, polar * pda);
using namespace std;


int main(){
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y){
        rect_to_polor(&rplace, &pplace);
        show_polor(&pplace);
        cout << "Next two numbers (q to quit): ";   
    }

    return 0;
}

void show_polor(const polar* pda){
    const double Rad_to_deg = 57.29577951;

    cout << "distancee = " << pda->distance
         << ", angle = " << pda->angle * Rad_to_deg << "degrees\n";
}

void rect_to_polor(const rect* pxy, polar * pda){
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}