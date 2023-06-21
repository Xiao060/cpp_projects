#include<iostream>
#include<fstream>
#include<cstdlib>

const int LIMIT = 5;

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);

int main(){
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()){
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter the focal lengths of your telescope objective in mm: ";
    cin >> objective;

    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT << " eyepiece:\n";
    for (int i=0; i<LIMIT; ++i){
        cout << "Eyepiece #" << i+1 << ": ";
        cin >> eps[i];
    }

    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);

    cout << "Done\n";

    return 0;
}


void file_it(ostream & os, double fo, const double fe[], int n){
    ios_base::fmtflags initial;
    // setf() 返回函数调用前的格式化设置, 类型为 ios_base::fmtflags 
    initial = os.setf(ios_base::fixed);     // 使用定点表示法
    os.precision(0);

    os << "Focal length of objective: " << fo << " mm\n";

    os.setf(ios::showpoint);        // 显示小数点
    os.precision(1);                // 设置小数精度为 1 位   

    os.width(13);                   // 设置下一次输出字符串的宽度
    os << "f.1. eyepiece";

    os.width(15);
    os << "magnification" << endl;

    for (int i=0; i<n; ++i){
        os.width(13);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }

    os.setf(initial);               // 参数为 21 行调用 setf() 得到的格式化设置
}
