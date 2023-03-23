#include<iostream>

int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess = 3.9832;
    // int guess(3.9832);               // 将3.9832转换为整数并赋值给guess  
    int debt = 7.2e12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}