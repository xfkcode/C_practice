#include<stdio.h>
#include<string.h>
//�ַ������򣨵ݹ鷨��
//1.�滻���ַ�
//2.β�ַ���'\n'
//3.�ݹ�����ڲ��ַ���
//4.�滻β�ַ�
void reverse(char arr[])
{
	char temp = arr[0];
	int len = strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr+1)>=2)
		reverse(arr + 1);
	arr[len - 1] = temp;
}
int main()
{
	char arr[] = "bit";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}