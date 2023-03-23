#include<iostream>

int main(){
    using namespace std;

    int yams[3];
    yams[0] = 7;                        // 单独给数组每一项赋值
    yams[1] = 8;
    yams[2] = 6;
    // 数组的初始化,只能在声明时使用;右面数量若少于左面,则其他值设为0
    int yamcosts[3] = {20, 30, 5}; 
    // int yamcosts[3] = {0};           // 将数组中的元素全设为0
    // int yamcosts[3] = {}             // C++11,右侧空将数组中的元素全设为0
    // int yamcosts[] = {20, 30, 5};    // 数组长度空会根据右侧自动计算长度
    // int yamcosts[3] {20, 30, 5};     // C++11,可以省略等号  

    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " 
         << yamcosts[1] << " cents per yam.\n";
    
    int total = yams[0] * yamcosts[0] 
              + yams[1] * yamcosts[1] 
              + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents.\n";

    // 对类型名使用 sizeof 需放于括号内部, 对于变量名可选
    cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0] << " bytes.\n";
    return 0;
}