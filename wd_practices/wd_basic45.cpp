#include<iostream>
#include<string>

using namespace std;


/*
int main(){

    string s, x;

    cout << "请输入字符串, 输入end结束: ";
    while (getline(cin, x) && x != "end"){
        s += x;
        cout << "请输入字符串, 输入end结束: ";
    }

    cout << s << endl;
    return 0;
}
*/


int main(){
    string s, x;

    cout << "请输入字符串, 输入end结束: ";
    while (getline(cin, x) && x != "end"){
        if (s.size()) 
            s += x;
        else
            s += x + ' ';
        cout << "请输入字符串, 输入end结束: ";
    }

    cout << s << endl;
    return 0;
}