#include<iostream>
#include<string>
#include<cctype>

int main(){
    using namespace std;

    string str;
    cout << "Enter words (q to quit): " << endl;

    int yy=0, fy=0, other=0;

    while (cin >> str && str != "q"){
        if (isalpha(str[0])){
            switch (tolower(str[0])){
                case 'a' :            
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' :  ++yy;
                            break;
                default  :  ++ fy;
                            break;
            }
        }else
            ++other; 
    }

    cout << yy << " words beginning with vowels\n";
    cout << fy << " words beginning with consonants\n";
    cout << other << " others";

    return 0;
}