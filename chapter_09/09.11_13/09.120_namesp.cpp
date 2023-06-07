#include<iostream>
#include "09.110_namesp.h"

using namespace std;

// 函数的声明和定义必须位于同一个名称空间内
namespace pers{
    void getPerson(Person & rp){
        cout << "Enter first name: ";
        cin >> rp.fname;
        cout << "Enter last name: ";
        cin >> rp.lname;
    }

    void showPerson(const Person & rp){
        cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        cout << "Enter debt: ";
        cin >> rd.amount;
    }

    void showDebt(const Debt & rd){
        showPerson(rd.name);
        cout << ": $" << rd.amount << endl;
    }

    double sumDebts(const Debt ar[], int n){
        double total = 0;
        for (int i=0; i<n; ++i)
            total += ar[i].amount;
        return total;
    }
}