#include<iostream>
using namespace std;

int main(){
    double w, h;
    cin >> h >> w;

    double BMI;
    BMI = w / (h * h);
    cout << BMI << endl;

    if (BMI < 18.5){
        cout << "瘦";
    }else if (18.5 <= BMI && BMI <= 24){
        cout << "正常";
    }else{
        cout << "肥";
    }



    return 0;
}