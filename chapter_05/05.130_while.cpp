#include<iostream>

const int ArSize = 20;

int main(){
    using namespace std;

    char name[ArSize];
    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";

    int i = 0;
    // 当 '\0' 作为判断条件时为 false
    // 因此可以修改下面的判断条件为 while (name[i])
    while (name[i] != '\0'){
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }

    return 0;
}