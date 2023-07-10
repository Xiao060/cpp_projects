#include<stdio.h>

int main(){
    double t;
    printf("Enter Fahrenheit temperature: ");
    scanf("%lf", &t);

    double c = (t - 32) * 5 / 9;
    printf("Celsius equivalent: %.1lf", c);

    return 0;
}