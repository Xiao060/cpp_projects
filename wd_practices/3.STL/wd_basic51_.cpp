// 容器类型不同, 因此不能使用容器拷贝的方式完成初始化;
// 但是元素类型相容, 因此可以使用 范围初始化的方式构造 vector<double>

#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    list<int> l = {1, 2, 3, 4, 5};
    vector<int> v = {6, 7, 8, 9, 10, 11}; 

    vector<double> v1(l.begin(), l.end());

    vector<double> v2(v.begin(), v.end());

    cout << v1.capacity() << " " << v1.size() << " " << v1[v1.size()-1] << endl;

    cout << v2.capacity() << " " << v2.size() << " " << v2[v2.size()-1] << endl;

    return 0;
}