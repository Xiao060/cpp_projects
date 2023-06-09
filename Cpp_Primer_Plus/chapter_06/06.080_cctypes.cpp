#include<iostream>
#include<cctype>

int main(){
    using namespace std;

    cout << "Enter text for analysis, and type @ to terminate input.\n";

    
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    char ch;
    cin.get(ch);
    while (ch != '@'){
        if (isalpha(ch))
            chars++;
        else if (isspace(ch))
            whitespace++;
        else if (isdigit(ch))
            digits++;
        else if (ispunct(ch))
            punct++;
        else
            others++;
        cin.get(ch);
    }

    cout << chars << " letters\n"
         << whitespace << " whitespace\n"
         << digits << " digits\n"
         << punct << " punctuations\n"
         << others << " others\n";

    return 0;
}