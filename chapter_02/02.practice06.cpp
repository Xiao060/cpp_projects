#include<iostream>
double tianwen(int);

using namespace std;

int main(){
    int gn;
    cout << "请输入距离(光年)：";
    cin >> gn;
    cout << gn << " 光年 = " << tianwen(gn) << " 天文单位" << endl;
    return 0;
}

double tianwen(int n){
    return n*63240; 
}