#include<iostream>

using namespace std;

class Time{
    private:
        int minutes;
        int sec;
    public:
        Time();
        Time(int m, int s);
        void show(); 
        void operator++();
        void operator++(int);

};

Time::Time(){
    minutes = sec = 0;
}

Time::Time(int m, int s){
    minutes = m;
    sec = s;
}

void Time::show(){
    cout << minutes << " minutes, " << sec << " seconds.\n";
}

void Time::operator++(){
    ++sec;
    if (sec == 60){
        ++minutes;
        sec = 0;
    }
}

void Time::operator++(int){
    ++sec;
    if (sec == 60){
        ++minutes;
        sec = 0;
    }
}

int main(){
    Time t(5, 38);
    t.show();
    ++t;
    t.show();

    Time k(3, 59);
    k.show();
    ++k;
    k.show();
    k++;
    k.show();

    return 0;
}