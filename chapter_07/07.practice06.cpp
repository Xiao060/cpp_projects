#include<iostream>

int Fill_array(double m[], int n);
void Show_array(double m[], int n);
void Reverse_array(double m[], int n);

using namespace std;

int main(){
    double num[10];

    int len = Fill_array(num, 10);

    Show_array(num, len);

    Reverse_array(num+1, len-2);

    Show_array(num, len);

    return 0;
}

int Fill_array(double m[], int n){
    int i = 0;

    cout << "Please enter the "<< i+1 << " double number: ";
    while (cin >> m[i] && i < n){
        ++i;
        cout << "Please enter the "<< i+1 << " double number: ";
    }
       
    return i;
}

void Show_array(double m[], int n){
    for (int i=0; i<n; ++i)
        cout << m[i] << "     ";
    cout << endl;
}

void Reverse_array(double m[], int n){
    int i = 0;
    double t;
    while (i < n-i-1){
        t = m[i];
        m[i] = m[n-i-1];
        m[n-i-1] = t;
        ++i;
    }
}