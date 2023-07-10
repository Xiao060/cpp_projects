#include<stdio.h>
#include<math.h>
#include<typeinfo>
#include<iostream>

using namespace std;

int main() {
	int x3, y3;

	printf("Enter x3 and y3: ");
	scanf("%d %d", &x3, &y3);

    int m, n;
    m = fmin(x3, y3);
    n = fmax(x3, y3);

    int t;
    while(m != 0){
        t = m;
        m = n % m;
        n = t;  
        cout << m << " " << n << endl;
    }

    printf("分子分母最大公约数为: %d\n", n);

	return 0;
}