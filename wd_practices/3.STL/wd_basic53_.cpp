#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<string> sd;

    string word;
    while (cin >> word)
        sd.push_back(word);

    for (auto i = sd.cbegin(); i != sd.cend(); ++i)
        cout << *i <<endl;

    return 0;
}