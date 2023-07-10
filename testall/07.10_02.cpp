#include<stdio.h>

int main(){
    int i;
    float f;
    double d;

    scanf("%d-%f-%lf", &i, &f, &d);

    printf("%d\n%f\n%lf", i, f, d);

    return 0;
}