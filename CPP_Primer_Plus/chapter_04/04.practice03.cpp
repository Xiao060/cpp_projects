#include<iostream>
#include<cstring>

int main(){
    using namespace std;

    char fname[20];
    char lname[20];

    cout << "Enter your first name: ";
    cin.getline(fname, 20);
    cout << "Enter your last name: ";
    cin.getline(lname, 20);

    cout << "Here's the information in a single string: " 
         << lname << ", " << fname;

    return 0;
}