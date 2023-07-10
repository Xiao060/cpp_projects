#include<iostream>

using namespace std;

int main(void) {
    int i = 40;
    float x = 839.21f;
    printf("|%d|%5d|%-5d|%5.3d|%-5.3d|\n", i, i, i, i, i);
    printf("|%f|%20f|%20.2f|%-20.2f|\n", x, x, x, x);
    return 0;
}