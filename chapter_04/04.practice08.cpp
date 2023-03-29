#include<iostream>
#include<string>

using namespace std;

struct pizzaType{
    string name;
    int diameter;
    double weight;
};

int main(){

    pizzaType* pizza = new pizzaType;
    
    cout << "Enter the diameter of pizza: ";
    cin >> pizza->diameter;
    // cin 跳过空白字符从第一个与类型匹配的项 读取到 最后一个匹配的项 结束, 
    // 其余东西保存在输入流中
    // 故读取半径后输入流里的第一项为 \n, 需要使用 cin.get() 跳过这个换行符
    cin.get();                  
    cout << "Enter the name of pizza company: ";
    getline(cin, pizza->name);
    cout << "Enter the weight of pizza: ";
    cin >> pizza->weight;

    cout << "Company: " << pizza->name << endl;
    cout << "Diameter: " << pizza->diameter << endl;
    cout << "Weight: " << pizza->weight << endl;

    return 0;
}