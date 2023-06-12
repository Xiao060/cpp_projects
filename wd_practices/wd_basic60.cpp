#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> x;
    int m;
    
    cout << "请输入 10 个整数: \n";
    for (int i=0; i<10; ++i){
        cout << "第 " << i+1 << "个: ";
        cin >> m;
        x.push_back(m);
    }

    int temp;
    for (int i=9; i>0; --i){
        for (int j=0; j<i; ++j)
            if (x[j] > x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }    
    }

    for (int i=0; i<10; ++i){
        cout << x[i] << " ";
    }

    return 0;
}