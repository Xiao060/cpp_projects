#include<iostream>
#include "13.040_tabtenn1.h"

using namespace std;

// 使用的成员初始化列表, 此处也可不用
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {};

void TableTennisPlayer::Name() const {
    cout << lastname << ", " << firstname;
}


// 构造时先构造 基类 再构造 派生类, 故 基类在 派生类 构建完成前已完成创建, 故此处应使用 成员初始化列表 来构造 TableTennisPlayer 
RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht) {
    rating = r;
}

// 构造时先构造 基类 再构造 派生类, 故 基类在 派生类 构建完成前已完成创建, 故此处应使用 成员初始化列表 来构造 TableTennisPlayer 
RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp) {
    rating = r;
}

