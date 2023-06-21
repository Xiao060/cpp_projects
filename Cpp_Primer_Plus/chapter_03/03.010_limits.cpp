#include<iostream>
#include<climits>

int main(){
    using namespace std;

    int n_char = CHAR_MAX;
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // 对类型名使用 sizeof 应放于括号内, 见1
    cout << "char is " << sizeof(char) << " bytes." << endl;
    cout << "short is " << sizeof(short) << " bytes." << endl;
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "long is " << sizeof(long) << " bytes." << endl;
    cout << "long long is " << sizeof(long long) << " bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "char: " << n_char << endl;
    cout << "short: " << n_short << endl;
    cout << "int: " << n_int << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}