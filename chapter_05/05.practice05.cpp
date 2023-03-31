#include<iostream>
#include<string>

const int Month = 12;

int main(){
    using namespace std;

    /*
    string month[Month] = {"January", "February", "March", "April",
                           "May","June", "July", "August", "September",
                           "October", "November", "December"};
    */

    const char* month[Month] = {"January", "February", "March", "April",
                                "May","June", "July", "August", "September",
                                "October", "November", "December"};

    int num[Month];
    int sum = 0;

    cout << "Enter the nums of book to sell:\n";
    for (int i=0; i<Month; i ++){
        cout << month[i] << ": ";
        cin >> num[i];
    }

    // 计算总数的过程可以在输入时直接完成
    for (int i=0; i<Month; i++){
        // cout << month[i] << ": " << num[i] << endl;
        sum += num[i];
    }

    cout << "The sum of books to sell is " << sum << endl; 

    return 0;
}