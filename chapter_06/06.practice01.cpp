#include<iostream>
#include<cctype>

int main(){
    using namespace std;

    char ch;
    cout << "请输入内容: ";

    while (cin.get(ch)){
        if (ch == '@')
            break;
        else if (isdigit(ch))
            continue;
        else if (islower(ch))
            cout << char (toupper(ch));
        else if (isupper(ch))
            cout << char (tolower(ch));
        else 
            cout << ch;
    }

    return 0;
}


/* 修改版
int main(){
    using namespace std;

    char ch;
    cout << "请输入内容: ";

    while(cin.get(ch)){
        if (ch == '@')
            break
        else if (isdigit(ch))
            continue;
        else if (islower(ch))
            ch = toupper(ch);
        els eif (isupper(ch))
            ch = tolower(ch);

        cout << ch;
    }



    return 0;
}

*/