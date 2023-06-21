#include<iostream>
#include "13.010_tabtenn0.h"

using namespace std;

int main(void){

    // 次处将 C 风格字符串作为参数, 但构造函数中参数为 string 类型, 故此处会自动调用 string 中参数为 C 字符串的构造函数, 将参数转变为 string 类型
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);

    player1.Name();
    if (player1.HasTable())
        cout << ": has a table.\n";
    else 
        cout << ": hasn't a table.\n";

    player2.Name();
    if (player2.HasTable())
        cout << ": has a table.\n";
    else 
        cout << ": hasn't a table.\n";

    return 0;
}