#include<iostream>

using namespace std;

extern int tom;
static int dick = 10;
int harray = 20;

void remote_access(){
    cout << "remote_access() reports the following addresses:\n"
         << "&tom = " << &tom 
         << ", &dick = " << &dick 
         << ", &harray = " << &harray << endl;
}