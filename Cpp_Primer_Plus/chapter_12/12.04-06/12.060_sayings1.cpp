#include<iostream>
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
    for (i=0; i< ArSize; ++i){

        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;

        // 若 cin.get() 读入一个空行, 则 cin 返回 false
        // 但某些版本的 C++ 不这样, 它读入的字符数组第一项为 '\0'
        // 故该分支判断读入是否成功
        if (!cin || temp[0] == '\0')
            break;
        else
            sayings[i] = temp;
    }

    int total = i;
    if (total > 0){
        cout << "Here are your sayings:\n";
        for (int i=0; i<total; ++i)
            cout << sayings[i][0] << ": " << sayings[i] << endl;

        int shortest = 0;
        int first = 0;
        for (int i=1; i<total; ++i){
            if (sayings[shortest].length() > sayings[i].length())
                shortest = i;
            if (sayings[first] > sayings[i])
                first = i;
        }

        cout << "Shortest saying:\n" << sayings[shortest] << endl;
        cout << "First abphabetically:\n" << sayings[first] << endl;

        cout << "This program used " << String::HowMany() << " String objects. Bye.\n";
    }else
        cout << "No input!Bye.\n";

    return 0;
}