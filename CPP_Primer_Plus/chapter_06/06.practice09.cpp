#include<iostream>
#include<fstream>
#include<string>
using namespace std;


struct member{
    string name;
    double money;
};


int main(){
    
    
    ifstream file;
    file.open("practice09.txt");

    int num;
    file >> num;
    file.get();

    member* p = new member[num];

    for (int i=0; i<num; ++i){
        getline(file, p[i].name);
        file >> p[i].money;
        file.get();
        // cout << p[i].name << "   " << p[i].money << endl;
    }

    cout << "重要捐款人:\n";
    for (int i=0; i<num; ++i){
        if (p[i].money > 10000)
            cout << p[i].name << endl;
    }

    cout << "其他捐款人:\n";
    for (int i=0; i<num; ++i){
        if (p[i].money <= 10000)
            cout << p[i].name << endl;
    }


    return 0;
}