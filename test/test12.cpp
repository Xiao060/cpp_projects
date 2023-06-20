#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> x = {2, 4, 6, 6};

    x[1] = 15;

    for (int i=0; i<4; ++i)
        cout << x[i] << endl;

    return 0;
}