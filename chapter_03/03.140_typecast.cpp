#include<iostream>

int main(){
    using namespace std;

    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;           // c语言类型转换
    coots = int (19.99) + int (11.99);          // c++语言类型转换

    cout << "auks = " << auks 
         << ", bats = " << bats 
         << ", coots = " << coots <<endl;
        
    char ch = 'Z';
    cout << "The code for " << ch << " is " << int (ch) << endl;
                                                // c++强制类型转换运算符
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;      

    return 0;
}