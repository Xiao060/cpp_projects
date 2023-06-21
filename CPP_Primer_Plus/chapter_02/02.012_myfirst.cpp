#include<iostream>

int main(){
    // 不使用名称空间的部分函数,相当于导入库中的个别函数,见2
    using std::cout; 
    using std::cin;
    using std::endl;

    cout << "Come up and C++ me some time.";
    cout << endl;
    cout << "You Won't regret it" << endl;
    cin.get();
    return 0;
}


