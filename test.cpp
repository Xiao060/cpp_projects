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


    // char m[6] = {'a', 'b', 'c', 'd', '\0'};      // 长度为4, 不包括结尾符
    // char m[6] = "abcd\0";

    /*
    string x = "abcd";
    string y;

    y = x;
    y += "ab";

    cout << x << endl;
    cout << y << endl;
    cout << x.size() << endl;
    */
   /*
    char x[10];
    char y[10];
    cin.get(x, 10).get();
    cin.get(y, 10);
    //cin >> y;


    cout << x << endl;
    cout << y << endl;
    cout << strlen(x) << endl;
    */
   testname1.a = 1;
   testname1.b = 2;

   cout << testname1.a << endl;
   cout << testname1.b << endl;

    testname2.a = 12;
    testname2.b = 12.5;
    cout << testname2.b << endl;


    return 0;
}