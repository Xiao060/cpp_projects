#include<iostream>

using namespace std;


int main(){
    int rats = 101;
    int & rodents = rats;               // 此处创建了一个指向 int 的引用
    cout << "rats = " << rats << endl
         << "rodents = " << rodents << endl;

    rodents++;

    cout << "rats = " << rats << endl
         << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats << endl
         << "rodents address = " << &rodents << endl;

    return 0;
}