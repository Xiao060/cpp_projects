#include<iostream>
#include<cstring>
#include<string>

int main(){
    using namespace std;


    // char m[6] = {'a', 'b', 'c', 'd', '\0'};      // 长度为4, 不包括结尾符
    // char m[6] = "abcd\0";

    /*
    string x = "abcd";
    string y;

    y = x;
    y += "ab";

    cout << x << endl;
    cout << y << endl;
    cout << x.size() << endl;
    */

    char x[10];
    char y[10];
    cin.get(x, 10).get();
    cin.get(y, 10);
    //cin >> y;


    cout << x << endl;
    cout << y << endl;
    cout << strlen(x) << endl;



    return 0;
}