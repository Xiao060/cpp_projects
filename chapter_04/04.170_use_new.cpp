#include<iostream>

int main(){
    using namespace std;

    int nights = 1001;
    int* pt = new int;
    *pt = 1001;
    cout << "nights value = " << nights << " : location = " << &nights << endl;
    cout << "int value = " << *pt << " : location = " << pt << endl;
    
    double* pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << " : location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;


    // 指针大小为 8 个字节
    cout << "size of pt = " << sizeof(pt)                   
         << " : size of *pt = " << sizeof(*pt) << endl;

    cout << "size of pd = " << sizeof(pd)
         << " : sizeof of *pd = " << sizeof(*pd) << endl;

    return 0;
}