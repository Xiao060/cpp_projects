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

    /*
    char m[10] = "1248";            //{'1', '2', '5', '\0'};
    cout << m << endl;

    const char* n = "1221";
    cout << n << endl;

    string x = "11114";
    cout << x << endl;

    // const string y = "1233";                // 错误方法
    string y = "1233";
    cout << y << endl;
    */

    /*
    // 指针存储整数
    // 方法1
    int* m = new int;
    *m = 12;
    cout << m << " : " << *m << endl;
    
    // 方法2
    int n = 12;
    int* m = &n;
    cout <<  m << " : " << *m << endl;
    */

    /*
    testType1* p = new testType1;
    p->a = 12;
    p->b = 13;
    cout << p << endl;
    cout << p->a << endl;
    cout << p->b << endl;
    */
    
    // cout << strcmp("aaa", "aaa") << endl; 


    //cout << 'a'*5 << endl;
    

    string str;

    cout << "输入test: ";
    getline
    

    return 0;
}