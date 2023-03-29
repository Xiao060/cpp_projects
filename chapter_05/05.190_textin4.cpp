#include<iostream>

int main(){
    using namespace std;

    int count = 0;
    int ch;

    while ((ch = cin.get()) != EOF){
        cout.put(char(ch));
        // cout << char (ch);
        ++count;
    }
    cout << endl << count << " characters read\n";

    return 0;
}