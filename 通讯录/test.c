#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"
void menu()
{
	printf("***************************\n");
	printf("**  1.add      2.del     **\n");
	printf("**  3.search   4.modify  **\n");
	printf("****      5.show       ****\n");
	printf("****      0.exit       ****\n");
	printf("***************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContcat(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//添加通讯信息
			AddContact(&con);
			break;
		case DEL:
			//删除通讯信息
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}