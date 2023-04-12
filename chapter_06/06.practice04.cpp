#include<iostream>

const int strSize = 20;
struct bop {
    char fullname[strSize];
    char title[strSize];
    char bopname[strSize];
    int preference;           // 值为 0, 1, 2 分别代表 真实姓名, 头衔, 秘密姓名
};

const int Size = 5;
const bop bops[Size] = {
                  {"Wimp Macho", "aaa", "a1", 0},
                  {"Raki Rhodes", "bbb", "b2", 1},
                  {"Celia Laiter", "ccc", "c2", 2},
                  {"Hoppy Hipman", "ddd", "d2", 0},
                  {"Pat Hand", "eee", "e2", 1}};

int main(){
    using namespace std;

    cout << "Benevolent Order of Programmers Report" << endl
         << "a.display by name     b.display by title      c.display by bopname        d.display by preference        q.quit" << endl
         << "Enter your choice: ";

    char ch;
    while (cin.get(ch)){
        if (ch == 'q'){
            cout << "Bye!";
            break;
        }
                
        // 简化switch内部的循环结构
        switch (ch) {               
            case 'a' :  for (int i=0; i < Size; ++i) 
                            cout << bops[i].fullname << endl;
                        break;
            case 'b' :  for (int i=0; i < Size; ++i) 
                            cout << bops[i].title << endl;
                        break;
            case 'c' :  for (int i=0; i < Size; ++i) 
                            cout << bops[i].bopname << endl;
                        break;
            case 'd' :  for (int i=0; i < Size; ++i) {
                            int n = bops[i].preference;
                            if (n == 0) cout << bops[i].fullname << endl;
                            else if (n == 1) cout << bops[i].title << endl;
                            else cout << bops[i].bopname <<endl;
                        }
                        break;
        }
        cout << "Next choice: ";
        cin.get();
    }

    return 0;
}



/* 简化 switch 结构中的循环结构    
        for (int i=0; i < Size; ++i){
            switch (ch) {               
                case 'a' :  cout << bops[i].fullname << endl;
                            break;
                case 'b' :  cout << bops[i].title << endl;
                            break;
                case 'c' :  cout << bops[i].bopname << endl;
                            break;
                case 'd' :  int n = bops[i].preference;
                            if (n == 0) cout << bops[i].fullname << endl;
                            else if (n == 1) cout << bops[i].title << endl;
                            else cout << bops[i].bopname <<endl;
                            break;
            }
        }   
*/