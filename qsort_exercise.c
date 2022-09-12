#include<stdlib.h>
#include<stdio.h>
//qsort库函数实现结构体数组排序
struct Stu
{
	char name[20];
	int age;
};

int cmp(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int main()
{
	struct Stu Sarr[3] = { {"zhangsan",20},{"lisi",25},{"wangwu",23}};
	int sz = sizeof(Sarr) / sizeof(Sarr[0]);
	qsort(Sarr, sz, sizeof(Sarr[0]), cmp);
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%s\n", Sarr[i].name);
	}
	return 0;
}
