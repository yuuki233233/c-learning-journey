#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct S
{
	int a;
	int* arr;
};

int main()
{
	//�����ڴ�
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		perror("malloc");
		return 1;
	}

	//�����������ڴ�
	ps->arr = (int*)malloc(5 * sizeof(int));
	if (ps->arr == NULL)
	{
		perror("malloc");
		return 1;
	}

	//ʹ��
	ps->a = 100;
	for (int i = 0; i < 5; i++)
	{
		ps->arr[i] = i + 1;
	}

	//���������С
	int* ptr = (int*)realloc(ps, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}

	//ʹ��
	for (int i = 5; i < 10; i++)
	{
		ps->arr[i] = 1 + i;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}

	//�ͷ�
	free(ps);
	ps = NULL;

	return 0;
}