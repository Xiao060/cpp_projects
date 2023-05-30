#include<iostream>

using namespace std;

int main(){
    double score;

    cout << "请输入成绩: ";
    cin >> score;

    if (score >= 90 && score <= 100)
        cout << "A(优秀)" << endl;
    else if (score >= 80 && score <= 89)
        cout << "B(良好)" << endl;
    else if (score >= 70 && score <= 79)
        cout << "C(中等)" << endl;
    else if (score >= 60 && score <= 69)
        cout << "D(合格)" << endl;

    return 0;
}