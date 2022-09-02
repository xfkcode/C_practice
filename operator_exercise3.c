#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印二进制的奇数位和偶数位
void print(int a)
{
	int i = 0;
	printf("奇数位:\n");
	for (i = 30;i >= 0;i-=2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	printf("偶数位:\n");
	for (i = 31;i >= 1;i -= 2)
	{
		printf("%d", (a >> i) & 1);
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}