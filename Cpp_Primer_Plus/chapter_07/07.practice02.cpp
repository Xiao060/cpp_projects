#include<iostream>

int input(double* m);
void print(const double* m, int num);
double average(const double* m, int num);

using namespace std;
const int Size = 10;

int main(){
    double* m = new double [Size];

    int num = input(m);
    print(m, num);

    double aver = average(m, num);
    cout << "平均成绩为 " << aver;

    return 0;
}


int input(double* m){

    int i = 0;
    cout << "请输入第 " << i+1 << "个高尔夫成绩: ";
    while (cin >> m[i] && i < Size){
        ++i;
        cout << "请输入第 " << i+1 << "个高尔夫成绩: ";
    }
    
    return i;
}

void print(const double* m, int num){
    for (int i=0; i<num; ++i)
        cout << m[i] << "   ";
    cout << endl;
}

double average(const double* m, int num){
    double sum = 0;
    for (int i=0; i<num; ++i)
        sum += m[i]; 

    return sum / num;
}