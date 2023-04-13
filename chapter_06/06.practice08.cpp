#include<iostream>
#include<fstream>

int main(){
    using namespace std;

    char ch;
    int i;

    ifstream file;
    file.open("practice08.txt");
    
    while (file >> ch)
        ++i;
    
    cout << "该文件共有 " << i << " 个字符";

    return 0;
}