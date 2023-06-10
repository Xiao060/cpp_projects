#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char s;
    int eng=0, spa=0, dig=0, other=0; 

    cout << "请输入一行字符: ";
    while ((s = getchar()) != '\n'){
        if (isspace(s))
            ++spa;
        else if (isalpha(s))
            ++eng;
        else if (isalnum(s)) 
            ++dig;
        else
            ++other;
    }

    cout << "英文字母: " << eng << endl
         << "空格: " << spa << endl
         << "数字: " << dig << endl 
         << "其他: " << other << endl;

    return 0;
}


