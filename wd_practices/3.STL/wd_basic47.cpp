#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {3, 2, 7, 5, 6, 1, 9, 4, 8, 10};
    int x;

    for (auto i = v.begin(); i<v.end(); ++i)
        *i *= 2 ;
    
    for (auto i = v.cbegin(); i<v.cend(); ++i)
        cout << *i << " ";
    cout << endl;

    return 0;
}