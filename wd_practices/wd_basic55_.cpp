#include<iostream>
#include<vector>
#include<string>

using namespace std;

void input(string & s);

int main(){
    string s;

    input(s);
    cout << s << endl; 
    
    return 0;
}

void input(string & s){
    s.reserve(100);
    char c;
    while (cin >> c)
        s.push_back(c);
}