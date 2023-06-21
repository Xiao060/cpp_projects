#include<iostream>

int main(){
    using namespace std;

    int count = 0;
    char ch;
    cout << "Enter characters; enter # to quit:\n";
    // cin 接收输入时会跳过开始的空白, 所以最后输出的结果没有空格, 见05.170
    cin >> ch;
    while (ch != '#'){
        cout << ch;
        ++count;
        cin >> ch;
    }
    cout << endl << count << " characters read\n";

    return 0;
}