#include<iostream>

int main(){
    using namespace std;

    cout << "What year was your house built?\n";
    int year;
    // 读入年份后换行符仍然在输入队列, 需要使用 .get() 读取(跳过)换行符
    (cin >> year).get(); 
    // cin >> year;
    // cin.get();                   
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";

    return 0;
}