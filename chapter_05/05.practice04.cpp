#include<iostream>

int main(){
    using namespace std;

    double daphne = 100;
    double cleo = 100;
    int year;

    for (year=1; cleo <= daphne; year++){
        daphne +=  10;          // 10
        cleo *= (1+0.05);  

        // cout << daphne << " : " << cleo << endl;       
    }

    cout << year << " years later, Daphne < Cleo" << endl;
    cout << "Daphne: " << daphne << endl;
    cout << "Cleo: " << cleo << endl;

    return 0;
}