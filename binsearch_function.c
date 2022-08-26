//二分查找函数
//在一个有序数组中查找具体的某个数
//找到了返回下标，否则返回-1
#include <stdio.h>
//二分查找函数
int binary_search(int arr[],int k,int sz)
{
    //int sz=sizeof(arr)/sizeof(arr[0]);无法在函数内部求数组长度
    //数组是指针形式传入函数
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]<k)
        {
            left=mid+1;
        }
        else if(arr[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int ret=binary_search(arr,k,sz);
    if(ret==-1)
        printf("找不到指定数字\n");
    else 
        printf("找到了，下标是:%d",ret);
    return 0;
}
