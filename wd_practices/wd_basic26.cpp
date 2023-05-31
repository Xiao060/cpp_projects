#include<iostream>
#include<cmath>

using namespace std;
double sum(int n);

int main(){
    int n;

    cout << "请输入项数: ";
    cin >> n;

    cout << "前" << n << "项的和为: " << sum(n) << endl;

    return 0;
}

double sum(int n){
    double s = 0;

    for (int i=0; i<n; ++i)
        s += 1.0/(2*(i+1));
    
    return s;
}