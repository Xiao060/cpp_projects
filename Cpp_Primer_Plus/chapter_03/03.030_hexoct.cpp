#include<iostream>

int main(){
    using namespace std;
    int chest = 42;
    int inseam = 042;
    int waist = 0x42;           // 0x/0X 表示16进制, x大小写一样
    // int a = 095; 这样表示有误, 无法确定基数
    
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest <<  " (42 in decimal)\n";
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << "inseam = " << inseam << " (042 in octal)\n";
    return 0;
}