#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char s;

    cout << "请输入字符: ";
    cin >> s;

    if (isupper(s))
        cout << s << " 为大写字母\n";
    else if (islower(s))
        cout << s << " 为小写字母\n";
    else
        cout << s << " 不为英文字母\n";

    return 0;
}

