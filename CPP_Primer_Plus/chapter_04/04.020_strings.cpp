#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2 << "! What's your name?\n";
    cin >> name1;
    // strlen 返回字符串的长度, sizeof 返回 name1 这个数组的长度
    cout << "Well, " << name1 << ", your name has " 
         << strlen(name1) << " letters and is stored\n"
         << "in an array of " << sizeof name1 << " bytes.\n";
    
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: " << name2 << endl;

    return 0;
}