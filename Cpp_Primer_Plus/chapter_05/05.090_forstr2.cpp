#include<iostream>
#include<string>

int main(){
    using namespace std;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    char temp;

    for (int i=0, j=word.size()-1; i<j; ++i, --j){
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }

    cout << word << "\nDone\n";

    return 0;
}