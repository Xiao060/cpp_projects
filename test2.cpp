#include<iostream>

using namespace std;

struct m{
    int a = 1;
    int b = 2;
};


int main(){
    m * n = new m;
    cout << n->a << endl
         << n->b << endl;

    return 0;
}