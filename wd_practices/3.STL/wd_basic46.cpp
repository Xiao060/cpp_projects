#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){

    string s, x;
    x = "";
    cout << "请输入字符串: ";
    getline(cin, s);

    for (auto c : s){
        if (!ispunct(c))
            x += c;
    }

    cout << x << endl;

    return 0;
}