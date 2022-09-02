#include <stdio.h>
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d",arr[i]);
	}
}
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left<right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr, sz);//��ʼ��Ϊȫ0
	Print(arr, sz);//��ӡ
	Reverse(arr, sz);//����
	Print(arr, sz);
	return 0;
}