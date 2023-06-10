#include<iostream>

using namespace std;

int main(){
    int N, x;

    cout << "请输入N: ";
    cin >> N;

    int num[N+1];
    cout << "请输入"<< N <<"个整数: ";
    for (int i=0; i<N; ++i)
        cin >> num[i];
    
    cout << "请输入要插入的整数: ";
    cin >> x;

    int i = N-1;
    while (num[i] > x){
        num[i+1] = num[i];
        --i;
    }
    num[i+1] = x;

    for (int i=0; i<N+1; ++i)
        cout << num[i] << " ";

    return 0;
}