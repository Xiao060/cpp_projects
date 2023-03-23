#include<iostream>

int main(){
    using namespace std;
    const int Hour_per_day = 24;
    const int Min_per_hour = 60;
    const int Sec_per_min = 60;
    long s; 
    int day, hour, min, sec;

    cout << "Enter the number of seconds: ";
    cin >> s;
    day = s / Sec_per_min / Min_per_hour / Hour_per_day;
    hour = s / Sec_per_min / Min_per_hour % Hour_per_day;
    min = s / Sec_per_min % Min_per_hour;
    sec = s % Sec_per_min;

    cout << s << " seconds = "
         << day << " days, "
         << hour << " hours, "
         << min << " minutes, "
         << sec << " seconds";

    return 0;
}