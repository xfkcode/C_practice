#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ͳ����������������ͬλ�ĸ���
//�����1����
int get_diff_bit(int a, int b)
{
	int n = a ^ b;
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int count=get_diff_bit(a, b);
	printf("%d", count);
	return 0;
}