#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    char lower_letter;
    cout << "请输入小写字母: ";
    cin >> lower_letter;

    cout << char (lower_letter-32) << endl;
    
    return 0;
}