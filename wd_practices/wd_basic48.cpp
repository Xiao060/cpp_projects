#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string x;
    string y;

    cout << "请输入字符串1: ";
    getline(cin, x);
    cout << "请输入字符串2: ";
    getline(cin, y);

    if (x == y)
        cout << " = " << endl;
    else if (x < y)
        cout << " < " << endl;
    else 
        cout << " > " << endl; 

    return 0;
}



/*
int main(){
    char x[50];
    char y[50];

    cout << "请输入字符串1: ";
    cin.getline(x, 50);
    cout << "请输入字符串2: ";
    cin.getline(y, 50);


    if (!strcmp(x, y))
        cout << " = " << endl;
    else if (strcmp(x, y) < 0)
        cout << " < " << endl;
    else 
        cout << " > " << endl;

    return 0;
}
*/