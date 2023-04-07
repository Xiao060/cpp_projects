#include<iostream>
#include<fstream>
#include<cstdlib>

const int SIZE = 60;

int main(){
    using namespace std;

    char filename[SIZE];
    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);

    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open()){
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    // 创建文件时最后一个数字后要添加空白符, 否则读取最后一个数字时直接读取到 eof, 不会将其添加到 sum 中
    // 判断读取是否成功, 此处可将读取与判断合并, 见2           
    while (inFile.good()){ 
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof())                       // 文件读取到末尾
        cout << "End of file reached.\n";
    else if (inFile.fail())                 // 读取内容类型不匹配
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    if (count == 0)
        cout << "No data processed.\n";\
    else{
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }

    inFile.close();

    return 0;
}