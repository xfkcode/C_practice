#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ�����Ƶ�����λ��ż��λ
void print(int a)
{
	int i = 0;
	printf("����λ:\n");
	for (i = 30;i >= 0;i-=2)
	{
		printf("%d", (a >> i) & 1);
	}
	printf("\n");
	printf("ż��λ:\n");
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