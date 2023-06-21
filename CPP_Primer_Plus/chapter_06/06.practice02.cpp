#include<iostream>
const int Size = 10;

int main(){
    using namespace std;

    double num[Size];
    double sum = 0;

    cout << "请输入数字(最多10个), 输入其他字符结束输入: ";

    int i = 0;
    while (i < Size && cin >> num[i]){
        sum += num[i];
        ++i;
    }

    double average;
    average = sum / i;
    int tnum = 0;

    while (--i >= 0){               // 此处用 for 循环更合适
        if (num[i] > average)
            ++tnum;
    }

    cout << "数字平均值为: " << average << 
         ", 大于平均值的数字共有 " << tnum << " 个";

    return 0;
}



/* 第2个 while 循环改 for 循环

for (--i; i >= 0; --i){
    if (num[i] > average)
        ++tnum;
}

*/
