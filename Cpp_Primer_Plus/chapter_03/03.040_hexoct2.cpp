#include<iostream>

int main(){
    using namespace std;
    int chest = 42;
    int inseam = 42;
    int waist = 42;          
    
    
    cout << oct;                            // 将输出修改为8进制
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest <<  " (octal for 42)\n";
    cout << dec;                            // 将输出修改为10进制, 默认
    cout << "waist = " << waist << " (decimal for 42)\n";
    cout << hex;                            // 将输出修改为16进制  
    cout << "inseam = " << inseam << " (hexadecimal for 42)\n";
    return 0;
}