#include<iostream>
#include "13.010_tabtenn0.h"

// 成员初始化列表, 直接调用 string 类的复制构造函数将 firstname... 的初始化为 fn...
// 传统赋值, 先调用 string 类的默认构造函数创建 firstname, 然后
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}

/*
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht){
    firstname = fn;
    lastname = ln;
    hasTable = ht;
}
*/

void TableTennisPlayer::Name() const {
    cout << lastname << ", " << firstname;
}

