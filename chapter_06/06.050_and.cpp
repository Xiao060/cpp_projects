#include<iostream>

const int ArSize = 6;

int main(){
    using namespace std;

    float naaq[ArSize];

    cout << "Enter the NAQQs (New Age Awareness Quotients) of\n"
         << "your neighbors. Program terminates when you make\n"
         << ArSize << " entries or enter a negative value.\n";

    float temp;
    cout << "First value: ";
    cin >> temp;

    int i = 0;
    while (i<ArSize && temp>=0){
        naaq[i] = temp;
        ++i;
        if (i < ArSize){
            cout << "Next value: ";
            cin >> temp;
        }
    }

    if (i == 0)
        cout << "No data--bye\n";
    else{
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j=0; j<i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count << " of your neighbors have greater awareness of\n"
             << "the New Age than you do.\n";
    }

    return 0;
}