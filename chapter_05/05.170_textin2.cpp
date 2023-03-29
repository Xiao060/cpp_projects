#include<iostream>

int main(){
    using namespace std;

    int count = 0;
    char ch;

    cout << "Enter characters;  enter # to quit: ";
    cin.get(ch);
    while (ch != '#'){
        cout << ch;
        count++;
        cin.get(ch);
    }
    cout << endl << count << " characters read\n";

    return 0;
}


