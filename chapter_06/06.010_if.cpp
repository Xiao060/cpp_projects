#include<iostream>

int main(){
    using namespace std;

    char ch;

    int spaces=0, total=0;

    cin.get(ch);
    // ch = cin.get();

    while (ch != '.'){

        if (ch == ' ')
            spaces += 1;
            // spaces++;
            
        total += 1;
        // total+=;
        cin.get(ch);
        // ch = cin.get();
    }

    cout << spaces << " spaces, " << total << " characters total in sentence\n";

    return 0;
}