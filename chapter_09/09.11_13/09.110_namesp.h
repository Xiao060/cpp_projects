#include<iostream>
#include<string>

using namespace std;

namespace pers {
    struct Person {
       string fname;
       string lname;
    };
    
    void getPerson(Person &);
    void showPerson(const Person &);
}

namespace debts{
    // 使用 名称空间 pers
    using namespace pers;

    struct Debt{
        Person name;
        double amount;
    };
    void getDebt(Debt &);
    void showDebt(const Debt &);
    double sumDebts(const Debt ar[], int n);  
}