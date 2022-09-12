#include<stdio.h>

void Swap(void* data1,void* data2,int width)
{
	int i = 0;
	for (i=0;i<width;i++)
	{
		char temp = *(char*)data1;
		*(char*)data1 = *(char*)data2;
		*(char*)data2 = temp;
		((char*)data1)++;
		((char*)data2)++;
	}

}

void bubble_sort(void* base,int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		int j = 0;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if ( cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0 )
			{
				//交换
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

//整形比较函数
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//整形数组排序
void test1()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", arr[i]);
	}
}

//构造结构体
struct Stu
{
	char name[20];
	int age;
};
//结构体整形属性比较函数
int cmp_struct_int(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age) - (((struct Stu*)e2)->age);
}
//结构体数组排序
void test2()
{
	struct Stu Sarr[3] = { {"zhangsan",20},{"lisi",15},{"wangwu",12} };
	int sz = sizeof(Sarr) / sizeof(Sarr[0]);
	bubble_sort(Sarr, sz, sizeof(Sarr[0]), cmp_struct_int);
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%d ", Sarr[i].age);
	}
}

int main()
{
	test1();
	printf("\n");
	test2();
	return 0;
}