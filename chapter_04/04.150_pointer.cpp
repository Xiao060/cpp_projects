#include<iostream>

int main(){
    using namespace std;

    int updates = 6;
    int * p_updates;                  // 空格位置可选
    // int* p_updates;                // 更强调 p_updates 是一个指向int类型的指针
    // int *p_updates;                // 更强调 *p_updates 是一个整数
    p_updates = &updates;

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Adresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}