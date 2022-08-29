//冒泡排序bubble_sort
//两两元素比较，不满足升序交换，遍历所有元素
#include <stdio.h>
void bubble_sort(int* arr,int sz)
//数组传参是指针地址（首元素地址&arr[0]）
{
    int flag=1;//优化
    //冒泡排序的趟数n-1
    int i=0;
    for(i=0;i<sz-1;i++)
    {
        //每一趟冒泡排序比较n-1-i次
        int j=0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
        //优化
        if(flag==1)
            break;
    }
}
int main()
{
    int arr[]={5,8,6,4,3,7,10,2,9};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}