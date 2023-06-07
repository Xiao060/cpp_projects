#include<iostream>
#include "09.110_namesp.h"

using namespace std;

void other(void);
void another(void);


int main(){
    using namespace debts;

    Debt golf = {{"Benny", "Goatsniff"}, 120.0};
    showDebt(golf);

    other();
    another();

    return 0;
}


void other(void){
    using namespace debts;

    // 因为 名称空间debts -> 名称空间pers -> Person结构, 所以此处需要再单独导入 Person
    Person dg = {"Doodles", "Glister"};
    showPerson(dg);
    cout << endl;

    Debt zippy[3];
    for (int i=0; i<3; ++i)
        getDebt(zippy[i]);

    for (int i=0; i<3; ++i)
        showDebt(zippy[i]);
    
    cout << "Total debt: $" << sumDebts(zippy, 3) << endl;

    return ;
}


void another(void){
    using namespace pers;
    Person collector = {"Milo", "Rightshift"};
    showPerson(collector);
    cout << endl;
}