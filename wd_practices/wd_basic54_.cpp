#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main(){
    list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> odd_d, even_d;

    for (auto i=l.cbegin(); i!=l.cend(); ++i){
        if (*i & 1)  // 模 2 运算           //(*i % 2 == 1)
            odd_d.push_back(*i);
        else 
            even_d.push_back(*i);
    }

    cout << "奇数值有: ";
    for (auto i=odd_d.cbegin(); i!=odd_d.cend(); ++i)
        cout << *i << " ";
    cout << endl;

    cout << "偶数值有: ";
    for (auto i=even_d.cbegin(); i!=even_d.cend(); ++i)
        cout << *i << " ";
    cout << endl;

    return 0; 
}