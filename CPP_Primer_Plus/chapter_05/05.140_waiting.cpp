#include<iostream>
#include<ctime>

int main(){
    using namespace std;

    float secs;
    cout << "Enter the delay time, in seconds: ";
    cin >> secs;

    clock_t delay = secs * CLOCKS_PER_SEC;
    // cout << delay << endl;           // 本电脑中每秒时钟数1000

    cout << "starting\a\n";
    clock_t start = clock();
    while (clock()-start < delay) ; 
        //cout << clock() << endl;
    cout << "done \a\n";

    return 0;
}