#include<iostream>

using namespace std;

void countdown(int n);

int main(){
    countdown(4);
    return 0;
}

void countdown(int n){
    cout << "Counting down ..." << n << " (n at" << &n << ")\n";
    if (n > 0)
        countdown(n-1);
    cout << n << ": Kaboom!" << " (n at" << &n << ")\n";
}