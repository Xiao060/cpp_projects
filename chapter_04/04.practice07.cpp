#include<iostream>
#include<string>

using namespace std;

struct pizzaType{
    string name;
    int diameter;
    double weight;
};

int main(){

    pizzaType pizza;

    cout << "Enter the name of pizza company: ";
    getline(cin, pizza.name);
    cout << "Enter the diameter of pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> pizza.weight;

    cout << "Company: " << pizza.name << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;

    return 0;
}