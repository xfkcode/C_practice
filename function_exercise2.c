#include<stdio.h>
//交换数组
void Swap(int arr1[], int arr2[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d", arr[i]);
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 8,9,5,3,4,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	Swap(arr1, arr2, sz);
	Print(arr1, sz);
	printf("\n");
	Print(arr2, sz);
	return 0;
}
