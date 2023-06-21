#include<iostream>
#include<string>

using namespace std;

struct member{
    string name;
    double money;
};

/*
cin >> 变量;                    // 读取时会自动跳过空白符, 然后读取到空白符结束

ch = cin.get();                 // 读取输入流中的第一个字符
cin.get(ch)                     // 读取输入流中的第一个字符

cin.get(字符数组, 字符数目)      // 读取到换行符结束
getline(cin, string对象)        // 读取到换行符结束, 并且将输入流中的换行符丢弃

// 输入 数字 后如果要输入 字符串 需要把换行符丢弃

*/


int main(){

    int num;
    cout << "请输入捐献者数目: ";
    cin >> num;                   // cin 读取整数, 最后的换行符位于输入流第1位
    cin.get();                    // 丢弃输入流中的换行符, 否则第6行读取失败

    member* p = new member [num];

    for (int i=0; i<num; ++i){
        cout << "请输入第" << i+1 << "个捐献者的姓名: ";
        getline(cin, p[i].name);
        cout << "请输入第" << i+1 << "个捐献者的捐款数额: ";
        cin >> p[i].money;
        cin.get();
    }

    cout << "重要捐款人: " << endl;
    for (int i=0; i<num; ++i){
        if ((p+i)->money > 10000)
            cout << (p+i)->name <<endl;
    }
    
    cout << "其他捐款人: " << endl;
    for (int i=0; i<num; ++i){
        if ((p+i)->money <= 10000)
            cout << (p+i)->name << endl;
    }

    return 0;
}