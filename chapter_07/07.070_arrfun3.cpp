#include<iostream>

const int Max = 5;
using namespace std;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);


int main(){
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);

    if (size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();

    return 0;
}




int fill_array(double ar[], int limit){

    double temp;
    int i;           // 因为最后要返回输入的元素个数, 所以变量不能写在 for 循环中

    for (i=0; i<limit; ++i){
        cout << "Enter value #" << (i+1) << ": ";
        // 输入内容错误, 结束程序前需要把输入流中的东西清空, 防止后续输入出问题
        if (!(cin >> temp)){                    
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }else if (temp < 0){
            cout << "Input end.\n";
            break; 
        }

        ar[i] = temp;
    }

    return i;
}


// 此函数显示数组内容, 不需要修改, 为防止程序无意中修改数据, 建议使用 const 声明
void show_array(const double ar[], int n){
    for (int i=0; i<n; ++i){
        cout << "Property #" << (i+1) << ": $" << ar[i] << endl;
    }
}


void revalue(double r, double ar[], int n){
    for (int i=0; i<n; ++i)
        ar[i] *= r;
}