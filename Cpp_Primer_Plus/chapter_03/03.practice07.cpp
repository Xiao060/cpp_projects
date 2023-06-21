#include<iostream>

int main(){
    using namespace std;
    double eur_haoyouliang;

    cout << "请输入耗油量(升/100公里)：";
    cin >> eur_haoyouliang;
    cout << "耗油量: " << eur_haoyouliang << " 升/100公里 = " 
         << 62.14 / (eur_haoyouliang/3.785) << " 英里/加仑\n";

    return 0;
}