#include<stdio.h>
#include<stdlib.h>

struct s
{
	int n;
	int arr[];//���������Ա
};

struct t
{
	int nt;
	int* arrt;
};

int main()
{
	//����һ��������
	printf("%d\n", sizeof(struct s));//4Byte
	struct s* p = (struct s*)malloc(sizeof(struct s) + 10 * sizeof(int));
	printf("%d\n", sizeof(struct s));//4Byte,��̬�����ڴ��struct s���ʹ�С����
	p->n = 10;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	free(p);
	p = NULL;

	//�������Ա�
	printf("\n");
	printf("%d\n", sizeof(struct t));
	struct t* ps = malloc(sizeof(struct t));
	ps->nt = 10;
	ps->arrt = (int*)malloc(10 * sizeof(int));
	int j = 0;
	for (j = 0;j < 10;j++)
	{
		ps->arrt[j] = j;
		printf("%d ", ps->arrt[j]);
	}
	free(ps->arrt);
	ps->arrt = NULL;
	free(ps);
	ps = NULL;
	return 0;
}