#include<iostream>


int main(){
    using namespace std;

    char ch;
    cout << "Please enter one of the following choice:" << endl 
         << "c) carnivore     p) pianist     t) tree     g)game" << endl;

    bool exit = false;                  // 标志位, 用于结束输入(循环)
    while (!exit && cin.get(ch)){
        switch (ch){
            case 'c' : cout << "Tiger is a carnivore.";
                       exit = true;
                       break;
            case 'p' : cout << "Mozart is a great pianst.";
                       exit = true;            
                       break;
            case 't' : cout << "A maple is a tree.";
                       exit = true;
                       break; 
            case 'g' : cout << "Supper Mario is a great game.";
                       exit = true;
                       break;
            default  : cout << "Please enter a c, p, t, g: ";
                       cin.get();
        }
    }

    return 0;
}