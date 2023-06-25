// #define _CRT_SECURE_NO_WARNINGS //忽略安全检测，不然使用scanf会报错
#include<stdio.h>
#include<stdlib.h>

void itoa(int a, char* s)
{
	//int i,n;
	////char m = '0';
	//for (i = 0; i < 4; i++)
	//{
	//	n=a % 10;
	//	s[i] = 48 + n;
	//	a = a / 10;
	//}
	//for (i = 0; i <4; i++)
	//{ 
	//	printf("%c", s[i]);
	//}
	printf("%d", a);
}
int main()
{
	int i=4567;
	char a[10];
	//printf("请输入数字:\n");
	//scanf("%d", &i);
	itoa(i,a);
	//puts(a);
	return 0;
}
