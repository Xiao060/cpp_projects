#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    char animal[20] = "bear";
    // 字符串字面量是常量, 因此声明指针是要使用const(必须), 即不可修改
    const char* bird = "wren";          
    char* ps;

    cout << animal << " and " << bird << "\n";
    cout << "Enter a kind of animal: ";
    // 此处可以用字符数组animal接收输入, 但是不能用bird, 因为声明指针时为 const 
    cin >> animal;                          
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n" 
         << animal << " at " << (int *) animal << endl
         << ps << " at " << (int *) ps << endl;

    ps = new char [strlen(animal) + 1];
    strcpy(ps, animal);

    cout << "After using strcpy():\n"
         << animal << " at " << (int *) animal << endl
         << ps << " at " << (int *) ps << endl;
    
    delete [] ps;

    return 0;
}