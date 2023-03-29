#include<iostream>

int main(){
    using namespace std;

    int x;
    // 此处 << 优先级大于 =/>/< , 故要用括号括起来再输出
    cout << "The expression x = 100 has the value " << (x=100) << endl;
    cout << "Now x = " << x << endl;
    cout << "The expression x < 3 has the value " << (x<3) << endl;
    cout << "The expression x > 3 has the value " << (x>3) << endl;
    // 此处 cout 输出默认为 int, 需要通过 cout.setf() 设置关系表达式输出为布尔型
    cout.setf(ios_base::boolalpha);
    // cout << !1 << endl;
    cout << "The expression x < 3 has the value " << (x<3) << endl;
    cout << "The expression x > 3 has the value " << (x>3) << endl;

    return 0;
}