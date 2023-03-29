#include<iostream>

int main(){
    using namespace std;

    int x, y, sum = 0;

    cout << "Enter the first int num: ";
    cin >> x;
    cout << "Enter the second int num: ";
    cin >> y;

    for (x; x<=y; x++)
        sum += x;
    
    cout << "The sum of nums is " << sum << endl;

    return 0;
}