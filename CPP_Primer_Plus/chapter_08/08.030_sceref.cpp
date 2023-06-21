#include<iostream>

using namespace std;

int main(){
    int rats = 101;
    int & rodents = rats;           // 创建整数引用

    cout << "rats = " << rats << endl
         << "rodents = " << rodents << endl;

    cout << "rats address = " << &rats << endl
         << "rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;             // 此处为修改 rats 的值, 但是并不能修改引用

    cout << "bunnies = " << bunnies << endl
         << "rats = " << rats << endl
         << "rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies << endl
         << "rodents address = " << &rodents << endl;

    return 0;
}