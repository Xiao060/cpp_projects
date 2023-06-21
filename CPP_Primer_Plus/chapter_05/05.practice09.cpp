#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    string word;
    int num = 0;
    cout << "Enter words (to stop, type the word done):\n";

    cin >> word;

    while (word != "done"){
        num += 1;
        cin >> word;
    }

    cout << "You entered a total of " << num << " words.";

    return 0;
}