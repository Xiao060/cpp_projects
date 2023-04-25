#include<iostream>
long double probability(unsigned, unsigned);


int main(){
    using namespace std;

    double total1, choices1, total2, choices2;
    cout << "请分别输入总数1, 选择数1, 总数2, 选择数2: ";

    while ((cin >> total1 >> choices1 >> total2 >> choices2) 
            && choices1 <= total1 && choices2 <= total2){
        cout << "You have one chance in "
             << probability(total1, choices1) * probability(total2, choices2)
             << " of winning.\n"
             << "Next two numbers (q to quit): ";
    }

    cout << "bye\n";

    return 0;
}


long double probability(unsigned numbers, unsigned picks){

    long double result = 1.0;
    long double n;
    unsigned p;

    for (n=numbers, p=picks; p > 0; --n, --p)
        result = result * n /p;
    
    return result;
}