#include<iostream>

int main(){
    using namespace std;

    double sum=0, x;

    cout << "Enter a num, 0 to end: ";
    cin >> x;

    /*
    for ( ; x!=0; ){
        sum += x;
        cout << "The sum of nums that has been entered: " << sum << endl;
        cout << "Enter a num, 0 to end: ";
        cin >> x;
    }
    */

    while (x!=0){
        sum += x;
        cout << "The sum of nums that has been entered: " << sum << endl;
        cout << "Enter a num, 0 to end: ";
        cin >> x;
    }

    return 0;
}