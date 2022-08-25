//模拟用户登录，最多三次
#include <stdio.h>
#include <string.h>
int main()
{
    int i=0;
    char password[]={0};
    for(i=1;i<3;i++)
    {
        printf("请输入密码：>");
        scanf("%s",password);
        if (strcmp(password,"123456")==0)
        {
            printf("登陆成功");
            break;
        }
    }
    if (i==3)
        printf("登录失败\n");  
    return 0;
}