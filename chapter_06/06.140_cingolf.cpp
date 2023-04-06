#include<iostream>

const int Max = 5;

int main(){
    using namespace std;

    int golf[Max];

    cout << "Please enter your golf scores.\n"
         << "You must enter " << Max << " rounds.\n";

    int i = 0;
    for (int i=0; i<Max; i++){
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])){          // 如果输入内容错误
            cin.clear();                    // 1.清楚错误输入
            while (cin.get() != '\n')       // 2.删除(跳过)错误输入
                continue;                   // 3.提示用户再输入
            cout << "Please enter a number: ";
        }
    }

    double total = 0.0;
    for (i=0; i<Max; i++)
        total += golf[i];
    
    cout << total/Max << " = average score " << Max << " rounds\n";

    return 0;
}