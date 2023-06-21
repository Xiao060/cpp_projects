#include<iostream>

using namespace std;

struct debts{
    char name[50];
    double amount;
};

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);


int main(){
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {{"Ima Wolfe", 2400.0},
                     {"Ura Foxe", 1300.0},
                     {"Iby Stout", 1800.0}};
    double * pd[3];

    for (int i=0; i<3; ++i)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:\n";
    ShowArray(things, 6);

    cout << endl;

    cout << "Listing Mr. E's debts:\n";
    ShowArray(pd, 3);       
    // 此处 pd 为指针数组, 模板2指出数组内容为指针, 更具体
    // 若将模板2删除掉, 此处会调用模板1, 但打印的内容为 地址

    return 0;
}

template <typename T>
void ShowArray(T arr[], int n){
    cout << "template A\n";
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


template <typename T>
void ShowArray(T * arr[], int n){
    cout << "template B\n";
    for (int i=0; i<n; ++i)
        cout << *arr[i] << " ";
    cout << endl;
}

