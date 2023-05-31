#include<iostream>

const int Size = 10;
using namespace std;

int main(){
    int num[10];

    for (int i=0; i<10; ++i){
        cout << "请输入第" << i+1 << "个整数: ";
        cin >> num[i];
    }

    int temp;
    for (int i=Size-1; i>0; --i){
        for (int j=0; j<i; ++j){
            if (num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    for (int i=0; i<Size; ++i)
        cout << num[i] << " ";
        
    return 0;
}