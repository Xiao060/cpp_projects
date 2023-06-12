#include<iostream>
#include<string>

using namespace std;


/*
int main(){
    string x;

    cout << "请输入句子: ";
    while (getline(cin, x)){
        cout << x << endl;
        cout << "请输入句子: ";
    }
        
    return 0;
}
*/

int main(){
    string x;

    cout << "请输入单词: ";
    while (cin >> x){
        cout << x << endl;
    }

    return 0;
}