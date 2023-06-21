#include<iostream>

int main(){
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    // cin.get(x,y) 读取一整行(不包括最后的换行符), 
    // 所以读取完后需要用 cin.get() 读取下一个字符(\n), 即跳过后面的换行符
    cin.get(name, ArSize).get();
    // cin.get(name, ArSize);
    // cin.get()
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some delicious " << dessert << " for you, "
         << name << ".\n";

    return 0;
}