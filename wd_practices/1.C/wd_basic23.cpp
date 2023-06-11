#include<iostream>
#include<cctype>

const int Size = 100;
using namespace std;

int main(){
    char s[Size];
    int num;

    cout << "请输入文本: ";
    int i = 0;
    while ((s[i]=getchar()) != '\n'){
        ++i;
    }

    for (int i=0; i<Size-1; ++i){
        if (!isalpha(s[i]) && isalpha(s[i+1]))
            ++num;
    }
    ++num;
    cout << num << endl;

    return 0;
}

