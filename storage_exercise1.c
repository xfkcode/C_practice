#include<stdio.h>
//�жϼ�����ֽ��򣨴��/С�ˣ�
int check_sys()
{
	int a = 1;
	//char* p = (char*)&a;
	return *(char*)&a;
}
int main()
{
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
		printf("С��\n");
	else
		printf("���\n");
	return 0;
}