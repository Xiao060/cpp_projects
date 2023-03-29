#include<iostream>
#include<string>

int main(){
    using namespace std;

 
    string name;
    string dessert;

    cout << "Enter your name:\n";
    // cin.getline() 读取一整行, 并丢弃最后的换行符
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert << " for you, " 
         << name <<".\n";

    return 0;
}