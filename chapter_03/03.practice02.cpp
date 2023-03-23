#include<iostream>

int main(){
    using namespace std;
    int ychi, ycun, pounds;

    cout << "请输入身高、体重: ";
    cin >> ychi >> ycun >> pounds;

    int h_ycun = ychi * 12 + ycun;
    cout << "你的身高为 " << h_ycun << " 英寸" << endl;
    double height = h_ycun * 0.0254;
    double weight = pounds / 2.2;
    cout << "你的身高是 " << height << " 米, " 
         << "体重是 " << weight << " 千克\n";
    cout << "你的身体BMI为" << weight / (height * height) << endl;

    return 0;
}