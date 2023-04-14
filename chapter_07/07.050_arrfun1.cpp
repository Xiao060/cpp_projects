#include<iostream>
// 第1个参数类型为地址, 也可以写成 int* arr  
// 此处将数组名作为第1个参数, 数组名即代表数组中第一个元素的地址
int sum_arr(int arr[], int n);       
const int Arsize = 8;



int main(){
    using namespace std;

    int cookies[Arsize] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sum_arr(cookies, Arsize);
    cout << "Total cookies eaten: " << sum << "\n";

    return 0;
}


int sum_arr(int arr[], int n){
    int total = 0;

    for (int i=0; i<n; ++i)
        total += arr[i];
    
    return total;
}
