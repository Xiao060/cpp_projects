#include<iostream>
#include<string>

using namespace std;

int main(){
    char s;
    int eng=0, spa=0, dig=0, other=0; 

    cout << "请输入一行字符: ";
    while ((s = getchar()) != '\n'){
        if (s == 32)
            ++spa;
        else if (s >= '0' && s <= '9') 
            ++dig;
        else if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
            ++eng;
        else
            ++other;
    }

    cout << "英文字母: " << eng << endl
         << "空格: " << spa << endl
         << "数字: " << dig << endl 
         << "其他: " << other << endl;

    return 0;
}
