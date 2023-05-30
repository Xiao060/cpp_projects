#include<iostream>

using namespace std;

int main(){
    double num[3][3];
    double sum;

    cout << "请输入矩阵(3*3): ";
    for (int i=0; i<3; ++i){
        for (int j=0; j<3; ++j)
            cin >> num[i][j];
    }

    for (int i=0; i<3; ++i)
        sum += num[i][i]; 
    cout << "对角线元素之和为: " << sum;

    return 0;
}