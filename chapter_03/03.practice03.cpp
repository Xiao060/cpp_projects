#include<iostream>

int main(){
    using namespace std;
    int deg, min, sec;

    cout << "Enter alatitude in degrees, minutes, and seconds: \n";
    cout << "First, enter the degrees: ";
    cin >> deg;
    cout << "Next, enter the minutes of arc: ";
    cin >> min;
    cout << "Finally, enter the seconds of arc: ";
    cin >> sec;

    cout << deg << " degrees, " 
         << min << " minutes, " 
         << sec << " seconds = "
         << deg + min/60.0 + sec/60.0/60.0 << " degrees";

    return 0;
}