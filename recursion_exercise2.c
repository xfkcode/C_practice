//不创建临时变量，输出字符串长度
//lenstr('bit')
//1+lenstr('it')
//1+1+lenstr('t')
//1+1+1+lenstr('')
//1+1+1+0
//3
#include <stdio.h>
int lenstr(char* arr)
{
    if(*arr!='\0')
        return 1+lenstr(arr+1);
    else
        return 0;
}
int main()
{
    char arr[]="bit";
    int length_str=lenstr(arr);
    printf("string length is:%d",length_str);
    return 0;
}