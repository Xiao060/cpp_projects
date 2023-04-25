#include<iostream>

double betsy(int);
double pam(int);
// 此处传递的参数为 1 个 函数指针
// (*pf)(int) 为一个名为 *pf, 参数为 int 的函数, 则 pf 为指向该函数的指针 
void estimate(int lines, double (*pf)(int));

using namespace std;

int main(){
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;

    cout << "Here's Betsy's estimate:\n";
    // 函数名即为函数地址, 故此处直接传递 函数名作为函数指针
    estimate(code, betsy);          

    cout << "Here's Pam's estimates:\n";
    estimate(code, pam);

    return 0;
}



double betsy(int lns){
    return 0.05 * lns;
}

double pam(int lns){
    return 0.03*lns + 0.0004*lns*lns;
}

void estimate(int lines, double (*pf)(int)){
    // 此处通过函数指针调用函数有 2 种方法
    // 1. (*pf)(lines)
    // 2. pf(lines)
    cout << lines << " lines will take " << (*pf)(lines) << " hour(s)\n";
}