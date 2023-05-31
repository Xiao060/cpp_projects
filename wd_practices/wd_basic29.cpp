#include<iostream>

using namespace std;

int main(){
    long long n;
    cout << "请输入一个16位的二进制整数: ";
    cin >> n;

    int sum=0, s, p, m;

    for (int i=0; i<4; ++i){
        p = 1;
        s = 0;
        for (int j=0; j<4; ++j){
            m = n % 10;
            n = n / 10;
            s += p*m;
            p *= 2;
        }
        sum += s;
    }
    
    cout << "和为: " << sum << endl;

    return 0;
}


    
