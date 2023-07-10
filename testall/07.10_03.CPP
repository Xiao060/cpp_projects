#include<stdio.h>

int main() {
	int x1, y1, x2, y2, x3, y3;

	printf("Enter first fraction: ");
	scanf("%d/%d", &x1, &y1);

	printf("Enter second fraction: ");
	scanf("%d/%d", &x2, &y2);

	y3 = y1 * y2;
	x3 = x1 * y2 + x2 * y1;
	printf("The sum is %d/%d\n", x3, y3);

    int m, n;
    if (x3 > y3){
        m = y3;
        n = x3;
    }else{
        m = x3;
        n = y3;
    }

    int t;
    while(m != 0){
        t = m;
        m = n % m;
        n = t;
    }

    printf("分子分母最大公约数为: %d\n", n);

    printf("化简后的结果为: %d/%d\n", x3/n, y3/n);


	return 0;
}