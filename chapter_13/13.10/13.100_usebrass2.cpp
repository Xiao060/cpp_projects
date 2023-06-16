#include<iostream>
#include<string>
#include "13.070_brass.h"

using namespace std;

const int CLIENTS = 4;

int main(){
    // 父类指针 可以指向 子类对象 并调用 子类方法
    // 故此处建立一个 父类指针数组, 但指针可指向 Brass 和 BrassPlus 对象
    // 使用一个数组可以表示多个类型对象, 即 多态性
    Brass * p_clients[CLIENTS];


    string temp;
    long tempnum;
    double tempbal;
    char kind;

    for (int i=0; i<CLIENTS; ++i){
        cout << "Enter client's name: ";
        getline(cin, temp);
        cout << "Enter client's account number: ";
        cin >> tempnum;
        cout << "Enter opening balance: $";
        cin >> tempbal;
        cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";

        while (cin >> kind && kind != '1' && kind != '2')
            cout << "Enter either 1 or 2: ";
        
        if (kind == '1')
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else{
            double tmax, trate;
            cout << "Enter the overdraft limit: $";
            cin >> tmax;
            cout << "Enter the interest rate as a decimal fraction: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }

        while (cin.get() != '\n')
            continue;  
    }

    cout << endl;

    for (int i=0; i<CLIENTS; ++i){
        // 此处 若 p_clients[i] 指向 Brass 类, 则调用 Brass::ViewAcct()
        // 若 p_clients[i] 指向 BrassPlus 类, 则调用 BrassPlus::ViewAcct()
        p_clients[i]->ViewAcct();
        cout << endl;
    }

    for (int i=0; i<CLIENTS; ++i)
        delete p_clients[i];

    cout << "Done.\n";

    return 0;
}