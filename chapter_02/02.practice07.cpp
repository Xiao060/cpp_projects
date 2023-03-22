#include<iostream>
void showtime(int, int);
using namespace std;

int main(){
    int hour, minute;
    cout << "请输入小时：";
    cin >> hour;
    cout << "请输入分钟：";
    cin >> minute;
    showtime(hour, minute);

    return 0;
}

void showtime(int h, int m){
    cout << "Time：" << h << ":" << m;
}