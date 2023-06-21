#include<iostream>
#include<cstdlib>
#include<ctime>
#include "12.040_string1.h"

using namespace std;

const int ArSize = 10;
const int MaxLen = 81;

int main(){
    String name;
    cout << "Hi, what's your name?\n";
    cin >> name;

    cout << name << ", please enter up to " << ArSize << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];
    int i;
    for (i=0; i<ArSize; ++i){
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        // 舍弃剩余字符串
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }
    int total = i;

    if (total > 0){
        cout << "Here are your sayings:\n";
        for (int i=0; i<total; ++i)
            cout << sayings[i] << "\n";

        String * shortest = &sayings[0];
        String * first = &sayings[0];
        for (int i=0; i<total; ++i){
            if (shortest->length() > sayings[i].length())
                shortest = &sayings[i];
            
            if (*first > sayings[i])
                first = &sayings[i];
        }

        cout << "Shortest saying:\n" << *shortest << endl;
        cout << "First alphabetically:\n" << *first << endl;

        srand(time(0));
        int choice = rand() % total;

        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
    }else
        cout << "Not much to say, eh?\n";
    
    cout << "Bye.\n";

    return 0;
}