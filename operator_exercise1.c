#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//ͳ�ƶ����ƣ����룩1�ĸ���
//ģ2��2��
int count_bit_one(unsigned int n)//����Ҳ����unsigned int
{
	int count = 0;
	while (n)
	{
		if (n%2==1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
//��λ��1��
int Count_Bit_One(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
//n=n&(n-1)ִ��1��ȥ��1����λ1��Ч�����
int COUNT_BIT_ONE(int n)
{
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
	scanf("%d", &a);
	int count1 = count_bit_one(a);
	int count2 = Count_Bit_One(a);
	int count3 = COUNT_BIT_ONE(a);
	printf("%d\n", count1);
	printf("%d\n", count2);
	printf("%d\n", count3);
	system("pause");
	return 0;
}