//打印100-200之间的素数
#include <stdio.h>
#include <math.h>
//判断素数函数，若为素输出1，否则输出0
int is_prime(int a)
{
    int j=0;
    for(j=2;j<a;j++)
    //for(j=2;j<=sqrt(a);j++)//优化
    {
        if(a%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int i=0;
    for(i=100;i<=200;i++)
    {
        if (is_prime(i)==1)
            printf("%d",i);
    }
    return 0;
}
