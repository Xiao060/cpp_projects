#include<iostream>

int main(){
    using namespace std;

    double money;
    double interest;
    cout << "请输入收入(tvarp): ";

    
    while (cin >> money && money >= 0){
        if (money <= 5000)
            interest = 0;
        // 后续判断只需写 money <= ... 即可
        else if (money >= 5001 && money <= 15000)   
            interest = (money-5000)*0.10;
        else if (money >= 15001 && money <= 35000)
            interest = 10000*0.10 + (money-15000)*0.15;
        else
            interest = 10000*0.10 + 20000*0.15 + (money-35000)*0.20;
        cout << "所得税为: " << interest << " tvarps" << endl;
        cout << "请输入收入(tvarp): ";
    }

    return 0;
}