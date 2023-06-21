#include<iostream>
#include<array>

int main(){
    using namespace std;

    array<double, 3> time;

    cout << "Enter the time of first 40m: ";
    cin >> time[0];
    cout << "Enter the time of second 40m: ";
    cin >> time[1];
    cout << "Enter the time of third 40m: ";
    cin >> time[2];

    cout << "The first time: " << time[0] << endl;
    cout << "The second time: " << time[1] << endl;
    cout << "The third time: " << time[2] << endl;
    cout << "The average time: " << (time[0] + time[1] + time[2])/3 << endl;

    return 0;
}