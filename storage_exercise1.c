#include<stdio.h>
//判断计算机字节序（大端/小端）
int check_sys()
{
	int a = 1;
	//char* p = (char*)&a;
	return *(char*)&a;
}
int main()
{
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}