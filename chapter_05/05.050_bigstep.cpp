#include<iostream>

int main(){
    using namespace std;

    int by;
    cout << "Enter an integer: ";
    cin >> by;

    cout << "Counting by " << by << "s:\n";

    for (int i=0; i<100; i+=by)
        cout << i << endl;

    return 0;
}