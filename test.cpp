#include<iostream>
#include<cstring>
#include<string>

struct testType1{
    int a;
    int b;
}testname1;

union testType2{
    int a;
    double b;
}testname2;






int main(){
    using namespace std;


    char m[10] = "1248";            //{'1', '2', '5', '\0'};
    cout << m << endl;

    const char* n = "1221";
    cout << n << endl;

    string x = "11114";
    cout << x << endl;

    // const string y = "1233";                // 错误方法
    string y = "1233";
    cout << y << endl;


    return 0;
}