#include<iostream>

using namespace std;

double cube(double a);
double refube(double &ra);

int main(){

    double x = 3.0;

    cout << cube(x) << " = cube of " << x << endl;
    cout << refube(x) << " = cube of " << x << endl;

    return 0;
}


double cube(double a){
    a *= a * a;
    return a;
}

double refube(double &ra){
    ra *= ra * ra;
    return ra;
}