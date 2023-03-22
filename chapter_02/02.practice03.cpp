#include<iostream>
void out1(void);
void out2(void);

using namespace std;

int main(){
    out1();
    out1();
    out2();
    out2();
    return 0;
}


void out1(void){
    cout << "Three blind mice" << endl;
}

void out2(void){
    cout << "See how they run" << endl;
}