#include<iostream>

using namespace std;

int tom = 3;
int dick = 30;
static int harray = 300;

void remote_access();

int main(){
    cout << "main() reports the following addresses:\n"
         << "&tom = " << &tom 
         << ", &dick = " << &dick 
         << ", &harray = " << &harray << endl;
    
    remote_access();

    return 0;
}