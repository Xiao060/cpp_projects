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

    int p=0, q=size-1;
    int temp;
    for (; p < q; ++p, --q){
        temp = num[p];
        num[p] = num[q];
        num[q] = temp;
    }

    for (int i=0; i<size; ++i)
        cout << num[i] << " ";

    return 0;
}