#include<iostream>

using namespace std;

int main(){
    int b, s, g;

    for (int i=100; i<=999; ++i){
        b = i / 100;
        s = i % 100 /10;
        g = i % 10;

        if (i == b*b*b + s*s*s + g*g*g)
            cout << i << endl;
    }

    return 0;
}