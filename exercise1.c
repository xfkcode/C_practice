//welcome to C world!
//w#################!
//we###############d!
//       ...
//welcome to C world!
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char arr1[]={"welcome to C world!"};
    char arr2[]={"###################"};
    int left=0;
    int right=sizeof(arr1)/sizeof(arr1[0])-2;
    //int right=strlen(arr1)-1;
    while(left<=right)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);//休息一秒
        //system("cls");//清空屏幕
        left++;
        right--;
    }
    return 0;
}