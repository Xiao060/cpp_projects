#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    char word[20];
    int num = 0;
    cout << "Enter words (to stop, type the word done):\n";

    /*
    for ( ; ; ){

    }*/
    cin >> word;

    while (strcmp(word, "done")){
        num += 1;
        cin >> word;
    }

    cout << "You entered a total of " << num << " words.";

    return 0;
}