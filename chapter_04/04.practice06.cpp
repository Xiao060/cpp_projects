#include<iostream>
#include<string>
using namespace std;

struct CandyBar{
    string brand;               // std::string, 需要使用名称空间 
    double weight;
    int calorie;
};

int main(){

    CandyBar snack;

    cout << "Enter the brand: ";
    getline(cin, snack.brand);
    cout << "Enter the weight: ";
    cin >> snack.weight;
    cout << "Enter the calorie: ";
    cin >> snack.calorie;


    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;

    return 0;
}