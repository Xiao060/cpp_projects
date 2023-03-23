#include<iostream>

int main(){
    using namespace std;
    int mile, gallon;

    cout << "请输入汽车里程(英里)：";
    cin >> mile;
    cout << "请输入使用的汽油量(加仑)：";
    cin >> gallon;

    cout << "汽车耗油量为：" << 1.0 * mile / gallon << " 英里/加仑" <<endl;

    return 0;
}