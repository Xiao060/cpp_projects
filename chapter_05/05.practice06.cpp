#include<iostream>

const int Month = 12;

int main(){
    using namespace std;

    const char* month[Month] = {"January", "February", "March", "April",
                                "May","June", "July", "August", "September",
                                "October", "November", "December"};

    int num[3][Month];

    int sum=0, peryear;

    for (int i=0; i<3; i++){
        cout << "Please enter the num of book sold in the NO." << i+1 << " year: " << endl;

        for (int j=0; j<Month; j++){
            cout << month[j] << ": ";
            cin >> num[i][j];
        }
    } 

    for (int i=0; i<3; i++){
        peryear = 0;
        for (int j=0; j<Month; j++){
            peryear += num[i][j];
        }
        sum += peryear;
        cout << "The num of book sold is " << peryear <<  " in NO." << i+1 << " year" << endl;
    }

    cout << "The sum of book sold is " << sum << " in the three years" << endl;

    return 0;
}
