#include<iostream>

const double * f1(const double * ar, int n);
const double * f2(const double ar[], int n);
const double * f3(const double ar[], int n);

using namespace std;

int main(){
    double av[3] = {1112.3, 1542.6, 2227.9};
    // p1 为指向 f1() 的函数指针, 即 p1 代表 f1
    const double * (*p1)(const double *, int) = f1;
    auto p2 = f2;

    cout << "Using pointers to functions, Address Value:\n";
    // 也可以通过 p1(av, 3) 的方式调用
    cout << (*p1)(av, 3) << " : " << *(*p1)(av, 3) << endl;     
    cout << p2(av, 3) << " : " << *p2(av, 3) << endl;


    const double * (*pa[3])(const double *, int) = {f1, f2, f3};

    auto pb = pa;           // pb 为一个指针数组
    cout << "\nUsing an array of pointers to functions, Addresss Values:\n";
    for (int i = 0; i < 3; ++i)
        // 此处也可以通过 (*pb[i])(av, 3) 的方式调用 
        cout << pb[i](av, 3) << " : " << *pb[i](av, 3) << endl;
    
    auto pc = &pa;          // pc 为一个指向指针数组的指针
    cout << "\nUsing pointers to an array of function pointers, Address Values:\n";
    // 此处也可以通过 (*(*pc)[0])(av, 3) 的方式调用
    cout << (*pc)[0](av, 3) << " : " << *(*pc)[0](av, 3) << endl;

    // 慎
    // 次数 (*pd)[3] 代表函数指针的数组
    // (*pd) 代表函数指针数组的首项的地址, 即等于数组名 pa
    // pd 即为数组名的地址 
    const double * (*(*pd)[3])(const double *, int) = &pa;
    const double* pdb = (*pd)[1](av, 3);
    cout << pdb << " : " << *pdb << endl;
    // 此处相当于 (*pd)[2](av, 3)
    cout << (*(*pd)[2])(av, 3) << " : " << *(*(*pd)[2])(av, 3) << endl;

    return 0;
}

const double * f1(const double * ar, int n){
    return ar;
}

const double * f2(const double ar[], int n){
    return ar + 1;
}

const double * f3(const double ar[], int n){
    return ar + 2;
}

