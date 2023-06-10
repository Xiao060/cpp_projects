#include<iostream>

using namespace std;

int main(){
    int num[5][5];

    for (int i=0; i<5; ++i){
        for (int j=0; j<i; ++j)
            num[i][j] = i+1-j;

        for (int k=i; k<5; ++k)
            num[i][k] = 1;
    }


    for (int i=0; i<5; ++i){
        for (int j=0; j<5; ++j)
            cout << num[i][j] << " ";
        cout << endl;
    }

    return 0;
}