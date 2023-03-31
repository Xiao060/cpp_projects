#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct car{
    string name;
    int year;
};

int main(){

    int num;
    cout << "How many cars do you wish to catalog: ";
    cin >> num;

    cin.get();

    car* p = new car[num]; 

    for (int i=0; i<num; i++){
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, (p+i)->name);
        cout << "Please enter the year made: ";
        cin >> (p+i)->year;
        cin.get();
    }

    cout << "Here is your collection:\n";
    
    for(int i=0; i<num; i++)
        cout << (p+i)->year << " " << (p+i)->name << endl;

    return 0;
}