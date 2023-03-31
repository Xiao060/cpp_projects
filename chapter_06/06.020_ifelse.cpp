#include<iostream>

int main(){
    using namespace std;

    char ch;

    cout << "Type, and I shall repeat.\n";
    cin.get(ch);

    while (ch != '.'){
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
            // cout << ch + 1;              //  此种情况下输出的是整数
            // cout << char (ch + 1);       

        cin.get(ch);
    }

    cout << "\nPlease excuse the slight confusion.";

    return 0;
}