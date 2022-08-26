//写一个函数，每调用一次，就会将num的值加1
//传址调用练习
#include <stdio.h>
void Add(int* p)
{
    (*p)++;//++优先级高于*
}
int main()
{
    int num=0;
    Add(&num);
    printf("num=%d\n",num);
    Add(&num);
    printf("num=%d\n",num);
    return 0;
}
