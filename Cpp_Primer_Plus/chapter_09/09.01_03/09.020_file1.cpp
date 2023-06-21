// 标准头文件声明用 < >
#include <iostream>

// 自定义头文件声明用 " "
#include "09.010_coordin.h"

using namespace std;

int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers(q to quit): ";
    }

    cout << "Bye!\n";

    return 0;
}