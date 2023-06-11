#include<iostream>

const int Size = 100;
using namespace std;

int main(){
    char a[] = "My name is Li jilin.";
    char b[] = "Mr. Zhang Haoling is very happy.";

    int i, j;
    for (i=11, j=4; j<17; ++i, ++j)
        a[i] = b[j];

    for (int k=0; k<i; ++k)
        cout << a[k];
    
    return 0;
}