#include<iostream>

int main(){
    using namespace std;

    int age;
    cout << "请输入年龄：";
    cin >> age;
    cout << age << " 岁包含 " << age*12 << " 个月。" << endl;
    return 0;
}