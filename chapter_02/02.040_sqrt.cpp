#include<iostream>
#include<cmath>


int main(){
    using namespace std;

    double area;
    cout << "Enter the floor area, in squre feet, of your home：";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a squre " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;

}