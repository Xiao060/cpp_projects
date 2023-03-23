#include<iostream>

int main(){
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    // cin 通过空格、制表符、换行符确定字符串结束, 即每次自能读1个单词, 见04
    cin >> name;                   
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";

    return 0;
}