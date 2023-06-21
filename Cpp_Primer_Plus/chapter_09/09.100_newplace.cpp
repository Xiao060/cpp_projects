#include<iostream>
#include<new>

using namespace std;

const int BUF = 512;
const int N = 5;

char buffer[BUF];

int main(){
    double *pd1, *pd2;

    cout << "Calling new and placement new:\n";

    pd1 = new double [N];
    // 定位new运算符, 分配空间时从 buffer 开始分配
    pd2 = new (buffer) double [N];          
    for (int i=0; i<N; ++i)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    
    cout << "Memory addresses:\n" 
         << " heap: " << pd1
         << " static: " << (void *) buffer << endl;     
         // buffer 为字符指针, 此处进行强制类型转换, 否则输出的是一个字符串

    cout << "Memory contents:\n";
    for (int i=0; i<N; ++i){
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << ";\n";
    }



    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4;
    pd3 = new double [N];
    pd4 = new (buffer) double [N];

    for (int i=0; i<N; ++i)
        pd3[i] = pd4[i] = 1000 + 40.0 * i;

    cout << "Memory contents:\n";
    for (int i=0; i<N; ++i){
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout <<pd4[i] << " at " << &pd4[i] << ";\n";
    }



    cout <<"\nCalling new and placement new a third time:\n";
    delete [] pd1;
    pd1 = new double [N];
    // 定位new运算符, 分配空间时从 buffer偏移40B(5*8) 开始分配
    pd2 = new (buffer + N * sizeof(double)) double [N];
    for (int i=0; i<N; ++i)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "Memory contents:\n";
    for (int i=0; i<N; ++i){
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout <<pd2[i] << " at " << &pd2[i] << ";\n";
    }

    delete [] pd1;
    delete [] pd3;

    return 0;
}
