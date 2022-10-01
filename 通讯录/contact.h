#pragma once

#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SAVE
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放一个信息
	int size;//记录当前已经有的元素个数
	int capacity;//当前通讯录的最大容量
};

//函数声明
void InitContcat(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void DestroyContact(struct Contact* ps);
void SaveConcat(struct Contact* ps);
void LoadConcat(struct Contact* ps);
