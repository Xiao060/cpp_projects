// 1.
// 使用vector, 存储之前需要用 find 判断该单词是否已存在, 若不在才添加
// 使用 set 时, 检查工作由 set 模板负责, 程序简洁

// 2.
// vector 是无序线性表，find 查找时按照顺序查找, 时间复杂度与 元素个数 线性相关
// set 是用红黑树实现的, 花费的时间与 元素个数 呈对数关系
// 当单词数量比较多时, set 较快

#include<iostream>
#include<fstream>
#include<set>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

string & trans(string & s);

int main(int argc, char * argv[]){

    vector<string> words;

    string word;
    while (cin >> word) {
        trans(word);
        if (find(words.begin(), words.end(), word) == words.end())
            words.push_back(word);
    }

    for (const auto & w : words)
        cout << w << " ";
    cout << endl;

    return 0;
}



// 将字符串中的 大写字母 转换为 小写字母
string & trans(string & s){
    for (int p=0; p<s.size(); ++p){
        if (s[p] >= 'A' && s[p] <= 'Z')
            s[p] -= ('A' - 'a');
        else if (s[p] == ',' || s[p] == '.')
            s.erase(p, 1);      // 删除从索引 p 开始的 1 个字符
    }

    return s;
}


/*
int main(int argc, char * argv[]){
    set<string> words;

    string word;
    while (cin >> word) {
        trans(word);
        words.insert(word);
    }

    for (const auto & w : words)
        cout << w << " ";
    cout << endl;

    return 0;
}
*/