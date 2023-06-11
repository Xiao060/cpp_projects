#include<iostream>

using namespace std;

int main(){
    double score, max, min;

    cout << "请输入学生成绩: ";
    cin >> score;
    max = min = score;

    cout << "请输入学生成绩: ";
    while (cin >> score && score >= 0){
        if (score > max)
            max = score;

        if (score < min)
            min = score; 
        
        cout << "请输入学生成绩: ";
    }

    cout << "最高成绩: " << max << endl
         << "最低成绩: " << min << endl;

    return 0;
}

