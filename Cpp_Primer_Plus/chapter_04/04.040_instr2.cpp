#include<iostream>

int main(){
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    // cin.getline() 读取一整行, 并丢弃最后的换行符
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert << " for you, " 
         << name <<".\n";

    return 0;
}