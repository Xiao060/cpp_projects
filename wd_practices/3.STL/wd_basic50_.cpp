#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v1;
    // 默认初始化, v1 为空, capacity 为0, 即未分配空间; 适合与元素个数/值未知, 需要在程序运行中动态添加的情况

    vector<int> v2(7);
    // v2 包含 7 个元素, 每个元素取默认值 0

    vector<int> v3(7, 3);
    // v3 中包含 7 个元素, 每个元素的值均为 3

    vector<int> v4(v3);
    // v4 初始化为 v3 的拷贝, 即 v4 与 v3 元素的 值 和 数量 相同 

    vector<double> v5 = {1, 2.0, 3, 4, 'a'};
    // vector<double> v3 {1, 2.0, 3};
    // v5 初始化为列表中元素的拷贝, 若列表中元素 与 v5 类型不同, 会自动转换
    
    vector<double> v6(v5.begin()+1, v5.end()-1);
    // v6 初始化为 两个迭代器指定范围内元素的拷贝, 此处被初始化为 {2, 3, 4}

    return 0;
}