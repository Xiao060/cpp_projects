#include<iostream>

using namespace std;

#define F1(x) x*x
#define F2(x) (x*x)
#define F3(x) (x)*(x)
#define F4(x) ((x)*(x))

int main(){
    cout << 18.0 / F1(2 + 1) << endl;
    cout << 18.0 / F2(2 + 1) << endl;
    cout << 18.0 / F3(2 + 1) << endl;
    cout << 18.0 / F4(2 + 1) << endl;

    return 0;
}