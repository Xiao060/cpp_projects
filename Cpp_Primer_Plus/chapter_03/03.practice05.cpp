#include<iostream>

int main(){
    using namespace std;
    long long w_population, us_population;

    cout << "Enter the world's population: ";
    cin >> w_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    cout << "The population of the US is " 
         << 100.0 * us_population / w_population 
         << "\% of the world population.";

    return 0;
}