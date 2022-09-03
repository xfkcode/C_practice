#include<stdio.h>
//计算一个数的每位之和（递归）
//bit_sun(1729)
//bit_sun(172)+1729%10
//bit_sun(17)+172%10
//bit_sun(1)+17%10
//bit_sun(0)+1%10
int bit_sum(int a)
{   
	if (a)
	{
		int ans = 0;
		ans += a % 10;
		if (a / 10 > 0)
		{
			ans += bit_sum(a / 10);
			return ans;
		}
		return ans;
	}
	return a;
}
int main()
{
	int a = 11;
	int ret = bit_sum(a);
	printf("%d\n", ret);
	return 0;
}