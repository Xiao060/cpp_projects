#include<iostream>

using namespace std;

int main(){
    int sum = 0, score;
    int d80=0, x60=0;

    for (int i=0; i<10; ++i){
        cout << "请输入第" << i+1 << "位同学的成绩: ";
        cin >> score;
        if (score >= 80)
            ++d80;
        if (score < 60)
            ++x60;
        sum += score;
    }

    cout << "80分以上人数: " << d80 << endl
         << "不及格人数: " << x60 << endl
         << "平均成绩: " << sum/10.0 << endl;
        
    return 0;
}