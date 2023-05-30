#include<iostream>

using namespace std;

int main(){
    int n;

    cout << "请输入自然数: ";
    cin >> n;

    if (n == 0)
        cout << "0 = 0"; 
    else{
        cout << n << " = 1";
        while (n != 1){
            for (int i=2; i<=n; ++i){
                if (n % i == 0){
                    cout << " * " <<  i;
                    n = n/i;
                    break;
                }
            }
        }
    }
        

    return 0;
}