#include<iostream>

int main(){
    using namespace std;

    int count;
    char ch;
    cin.get(ch);

    
    // while (cin)          // cin 根据输入情况返回 bool 值, 当输入成功时为 true
    // while (cin.get(ch))          // 将输入与判断合一
    // while (!cin.fail())
    while (cin.fail() == false){
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}