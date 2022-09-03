#include<stdio.h>
#include<string.h>
//×Ö·û´®ÄæĞò£¨µİ¹é·¨£©
//1.Ìæ»»Ê××Ö·û
//2.Î²×Ö·ûÖÃ'\n'
//3.µİ¹é½øÈëÄÚ²ã×Ö·û´®
//4.Ìæ»»Î²×Ö·û
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