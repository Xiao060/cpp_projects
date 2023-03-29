#include<iostream>

int main(){
    using namespace std;

    int count = 0;
    int ch;
    // cout << int(EOF);            // EOF 的值为 -1

    while ((ch = cin.get()) != EOF){
        // cout << ch;
        cout.put(char(ch));
        // cout << char (ch);
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}