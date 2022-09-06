#include<stdio.h>
//打印二维数组
//参数为数组形式
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	for (i = 0;i < x;i++)
	{
		int j = 0;
		for (j = 0;j < y;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//参数为指针形式
void print2(int (*pa)[5], int x, int y)
{
	int i = 0;
	for (i = 0;i < x;i++)
	{
		int j = 0;
		for (j = 0;j < y;j++)
		{
			//int* p=arr;
			//arr[i]=p[i]=*(arr+i)=*(p+i)
			printf("%d ", *(*(pa + i) + j));
			printf("%d ", (*(pa + i))[j]);
			printf("%d ", pa[i][j]);
			printf("%d ", *(pa[i] + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}