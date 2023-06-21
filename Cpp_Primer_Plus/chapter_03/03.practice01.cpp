#include<iostream>

int main(){
    using namespace std;
    const int Ycun_per_ychi = 12; 
    int ycun;

    cout << "请输入身高(英寸):___\b\b\b";
    cin >> ycun;

    cout << ycun << " 英寸 = " 
         << ycun / Ycun_per_ychi << " 英尺 " 
         << ycun % Ycun_per_ychi << " 英寸" << endl;

    return 0;
}