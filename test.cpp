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

   /*
   testname1.a = 1;
   testname1.b = 2;

   cout << testname1.a << endl;
   cout << testname1.b << endl;

    testname2.a = 12;
    testname2.b = 12.5;
    cout << testname2.b << endl;
    */
    /*
    int m[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int* p = m;

    cout << p << endl;
    // cout << *(++p) << endl;
    // cout << p << endl;
    cout << *p++ << endl;
    cout << m[0] << endl;
    cout << *p << endl;*/

    // string m;

    // cin >> m;
    // getline(cin, m);
    int x;
    char m[20];
    //char n;
    //string y;
    
    //
    cin >> x;
    // getline(cin, y);
    //cin >> m;
    cin.get(m, 20);
    //cin.getline(m, 20);
    //cin >> n;
    //cin >> y;
    cout << x << "; " << strlen(m) << endl; 
    cout << int (m[0]) << endl;




    return 0;
}