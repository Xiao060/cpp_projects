#include<iostream>
#include<cmath>
// 此处要用到 结构声明, 所以要引入 09.010_coordin.h
#include "09.010_coordin.h"

using namespace std;

polar rect_to_polar(rect xypos){
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);

    answer.angle = atan2(xypos.y, xypos.x);

    return answer;
}

void show_polar(polar dapos){
    const double Rad_to_deg = 57.29577951;
    cout << "distance = " << dapos.distance << endl;
    cout << "angle = " << dapos.angle * Rad_to_deg << " degrees\n";
}