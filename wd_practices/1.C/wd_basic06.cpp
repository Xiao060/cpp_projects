#include<iostream>

using namespace std;

int main(){
    int n;
    int x = 1, y = 1, z;

    cout << "请输入n: ";
    cin >> n;

    if (n == 0 || n == 1)
        cout << 0 << endl;
    else{
        for (int i=0; i<n-1; ++i){
            z = x+y;
            x = y;
            y = z;
        } 
        cout << y << endl;
    }
        
    return 0;
}