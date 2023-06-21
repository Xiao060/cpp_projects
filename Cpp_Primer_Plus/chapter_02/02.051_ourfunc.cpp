#include<iostream>
void simon(int);                // 函数原型,指明参数、返回值类型,放于main函数前

using namespace std;            // 共用一个名称空间,放于2函数前

int main(){
    simon(3);
    cout << "Pick an integer：";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n){
    cout << "Simon says touch your toes " << n << " times." << endl; 

}