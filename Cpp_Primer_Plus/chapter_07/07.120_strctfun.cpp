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

// 因为函数返回值为结构体, 故需将结构体声明放于函数声明前
polar rect_to_polor(rect xypos);
void show_polor(polar dapos);
using namespace std;




int main(){
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    // 此处也可以写为  
    // while (cin >> rplace.x >> rplace.y)
    while (cin >> rplace.x && cin >> rplace.y){
        pplace = rect_to_polor(rplace);
        show_polor(pplace);
        cout << "Next two numbers (q to quit): ";
    }

    cout << "Done.\n";
    return 0;
}



polar rect_to_polor(rect xypos){
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    // arctan 函数
    answer.angle = atan2(xypos.y, xypos.x);   

    return answer;
}

void show_polor(polar dapos){
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance
         << ", angle = " << dapos.angle * Rad_to_deg << " degress\n";
}