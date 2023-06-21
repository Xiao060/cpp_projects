#include<iostream>
#include "13.070_brass.h"

using namespace std;

int main(){
    Brass Piggy("Porcelot Pigg", 381299, 4000.00);
    BrassPlus Hoggy("Horatio Hogg", 380088, 3000.0);

    Piggy.ViewAcct();
    cout << endl;

    Hoggy.ViewAcct();
    cout << endl;

    cout << "Depositing $1000 into the Hoggy Account:\n";
    Hoggy.Deposit(1000.00);
    cout << "New balance： $" << Hoggy.Balance() << endl;


    cout << "\nWithdrawing $4200 from the Pigg Account:\n";
    Piggy.Withdraw(4200.00);
    cout << "Piggy account balance: $" << Piggy.Balance() << endl;



    cout << "\nWithdrawing $4200 from the Hogg Account:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}