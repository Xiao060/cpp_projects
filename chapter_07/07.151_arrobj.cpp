#include<iostream>
#include<array>
#include<string>

using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};


void fill(array<double, Seasons>* pa);
void show(const array<double, Seasons>* da);

int main(){
    array<double, Seasons> expenses;
    fill(&expenses);
    show(&expenses);
    return 0;
}


void fill(array<double, Seasons>* pa){
    for (int i=0; i<Seasons; ++i){
        cout << "Enter " << Snames[i] << " expenses: ";
        // 此处 pa 为地址, 所以需要解除引用然后按索引取值
        cin >> (*pa)[i];                     
    }
}
// 补充: 引用(地址)     : 数据 -> 地址 : &数据
//      解除(地址)引用  : 地址 -> 数据 : *地址


void show(const array<double, Seasons>* da){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i=0; i<Seasons; ++i){
        cout << Snames[i] << ": $" << (*da)[i] << endl;
        total += (*da)[i]; 
    }
    cout << "Total Expenses: $" << total << endl;
}