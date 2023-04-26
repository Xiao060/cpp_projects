#include<iostream>
#include<string>

using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] =  {"Spring", "Summer", "Fall", "Winter"};

struct expense{
    double money[Seasons];
};


void fill(expense * pa);
void show(expense * da);

int main(){
    expense * expenses = new expense;
    fill(expenses);
    show(expenses);

    return 0;
}


void fill(expense * pa){
    for (int i=0; i<Seasons; ++i){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> pa->money[i];                  
    }
}

void show(expense * da){
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i=0; i<Seasons; ++i){
        cout << Snames[i] << ": $" << da->money[i] << endl;
        total += da->money[i]; 
    }
    cout << "Total Expenses: $" << total << endl;
}