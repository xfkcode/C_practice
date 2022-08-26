//打印1000-2000年之间的闰年
#include <stdio.h>
//闰年判断函数
int is_leap_year(int y)
{
    if((y%4==0&&y%100!=0) || (y%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    int i=0;
    for(i=1000;i<=2000;i++)
    {
        if(is_leap_year(i)==1)
            printf("%d",i);
    }
    return 0;
}
