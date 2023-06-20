#include<iostream>

using namespace std;

int day_per_mon(int y, int m);

int main(){
    int year, month, day, hour, minute, second;
    cout << "请输入年/月/日/时/分/秒: ";
    cin >> year >> month >> day >> hour >> minute >> second;

    ++second;
    if (second == 60){
        second = 0;
        ++minute;
    }

    if (minute == 60){
        minute = 0;
        ++hour;
    }

    if (hour == 24){
        hour = 0;
        ++day;
    }

    if (day == day_per_mon(year, month)+1){
        day = 1;
        ++month;
    }

    if (month == 13){
        month = 1;
        ++year;
    }

    cout << year << "年" 
         << month << "月" 
         << day << "日"
         << hour << "时"
         << minute << "分"
         << second << "秒\n";

    return 0;
}


int day_per_mon(int y, int m){
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m == 2){
        if (y % 4 != 0 || (y % 100 == 0 && y % 400 != 0))
            return 28;
        else
            return 29;
    }else
        return mon[m-1];  
}