#include<iostream>

const int Max = 5;

int main(){
    using namespace std;

    double fish[Max];

    cout << "Please enter the weight of your fish.\n"
         << "You may enter up to " << Max << " fish <q to terminate>.\n";
    cout << "fish #1: ";

    int i = 0;
    // 当输入内容与接收它的变量类型不匹配时会返回 false
    while (i < Max && cin >> fish[i]){     
        if (++i < Max)
            cout << "fish #" << i+1 << ": ";
    }

    double total = 0.0;
    for (int j=0; j<i; j++)
        total += fish[j];

    if (i == 0)
        cout << "No fish\n";
    else
        cout << total/i << " = average weight of " << i << " fish\n";

    cout << "Done.\n";

    return 0;
}