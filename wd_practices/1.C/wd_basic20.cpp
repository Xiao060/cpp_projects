#include<iostream>
#include<cstring>

using namespace std;

void itoa(int n, char * s);

int main(){
    char s[40];

    int n;
    cout << "请输入整数: ";
    cin >> n;

    itoa(n, s);

    return 0;
}


void itoa(int n, char * s){
    int y;
    char flag = '+';

    if (n < 0){
        n = 0 - n;
        flag = '-';
    }
        
    int i = 0;
    while (n!= 0){
        y = n % 10;
        n = n / 10;
        s[i] = y + (int) '0' - 0;
        ++i;    
    }

    if (flag == '-'){
        s[i++] = '-';
    }

    char t;
    --i;
    for (int j=0; j < i; ++j, --i){
        t = s[i];
        s[i] = s[j];
        s[j] = t;  
    }

    cout << s;
}