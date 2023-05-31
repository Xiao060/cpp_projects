#include<iostream>

using namespace std;

int main(){
    int n, k, m;
    cout << "请输入人数n: ";
    cin >> n;
    cout << "请输入编号k: ";
    cin >> k;
    cout << "请输入数字m: ";
    cin >> m;

    int num[n] = {};

    int sum = 0;
    int x = 0;
    k = k-1;
    while (sum < n){
        if (num[k] == 0){
            ++x;
            if (x == m){
                num[k] = 1;
                cout << k+1 << " ";
                x = 0;
                ++sum;
            }      
        }  
        k = (k+1) % n;   
    }

    return 0;
}

 