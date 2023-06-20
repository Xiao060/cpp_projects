// 容器类型不同, 因此不能使用容器拷贝的方式完成初始化;
// 但是元素类型相容, 因此可以使用 范围初始化的方式构造 vector<double>


#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){

    list<char *> cl = {"hello", "world!", "c++"};

    vector<string> sv;

    sv.assign(cl.begin(), cl.end());

    cout << sv.capacity() << " " << sv.size() << " " << sv[0] << " " << sv[sv.size()-1] << endl;

    return 0;
}