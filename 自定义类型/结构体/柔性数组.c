#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct S
{
	int n;
	int arr[0];
};

int main()
{
	//printf("%d", sizeof(struct S));4
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	if (ps == NULL)
	{
		perror("malloc");
		return 1;
	}
	//��ֵ
	ps->n = 100;
	for (int i = 0; i < 5; i++)
	{
		ps->arr[i] = 1 + i;
	}
	//�����ռ�
	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}

	//�ͷ�
	free(ps);
	ps = NULL;
	return 0;
}