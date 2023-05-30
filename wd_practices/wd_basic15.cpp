#include<iostream>

using namespace std;

int main(){
    char s;

    cout << "请输入字符: ";
    cin >> s;

    if (s >= 'A' && s <= 'Z')
        cout << s << "为大写字母\n";
    else if (s >= 'a' && s <= 'z')
        cout << s << "为小写字母\n";
    else
        cout << s << "不为英文字母\n";

    return 0;
}