#include<iostream>
#include<string>
using namespace std;

struct CandyBar{
    string brand;               // std::string, 需要使用名称空间 
    double weight;
    int calorie;
};

int main(){

    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}