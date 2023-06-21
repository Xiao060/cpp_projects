#include<iostream>
#include<fstream>

int main(){
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    cout << fixed;                              // 以普通方式输出, 非科学技术法
    cout.precision(2);                          // 设置保留 2 位小数
    cout.setf(ios_base::showpoint);             // 显示浮点数后面的 0
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $ " << a_price << endl;
    cout << "Now asking $ " << d_price << endl;

    ofstream outFile;                           // 创建 1 个 ofstream 对象
    outFile.open("carinfo.txt");                // 打开文件, 将对象与文件关联
    outFile << fixed;                           // 以普通方式输出, 非科学技术法
    outFile.precision(4);                       // 设置保留 4 位小数
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $ " << a_price << endl;
    outFile << "Now asking $ " << d_price << endl;
    outFile.close();                            // 关闭文件

    return 0;
}
