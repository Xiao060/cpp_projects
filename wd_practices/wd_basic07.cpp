#include<iostream>

using namespace std;

int main(){
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;

    int num[size];
    cout << "请输入数组元素: ";
    for (int i=0; i<size; ++i)
        cin >> num[i];

    int pre=0, pos=size-1;
    int temp;
    for (; pre < pos; ++pre, --pos){
        temp = num[pre];
        num[pre] = num[pos];
        num[pos] = temp;
    }

    for (int i=0; i<size; ++i)
        cout << num[i] << " ";

    return 0;
}