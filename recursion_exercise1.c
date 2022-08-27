//输入一个无符号整数，逐位打印
//print(123)
//print(12) 3
//print(1) 2 3
#include <stdio.h>
void print(int num)
{
    if(num>9)
        print(num/10);
    printf("%d\n",num%10);
}
int main()
{
    unsigned int num=0;
    scanf("%d",&num);
    print(num);
    return 0;
}