#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0, m = 0;
	printf("��ֱ���������A������B�ĸ���\n");
	int arrA[1000], arrB[1000];
	scanf("%d%d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		printf("����A�ĵ�%dֵΪ:> ",i + 1);
		scanf("%d", &arrA[i]);
	}

	for (int i = 0; i < m; i++)
	{
		printf("����B�ĵ�%dֵΪ:> ", i + 1);
		scanf("%d", &arrB[i]);
	}

	printf("\n����A��ֵΪ:> ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arrA[i]);
	}

	printf("\n����B��ֵΪ:> ");
	for (int i = 0; i < m; i++)
	{
		printf("%d ", arrB[i]);
	}
	printf("\n");

	printf("�ϲ��������Ϊ:> ");
	int a = 0, b = 0;
	while (a < n && b < m)
	{
		if (arrA[a] < arrB[b])
		{
			printf("%d ", arrA[a]);
			a++;
		}
		else
		{
			printf("%d ", arrB[b]);
			b++;
		}
	}

	while (a < n)
	{
		printf("%d ", arrA[a]);
		a++;
	}

	while (b < m)
	{
		printf("%d ", arrB[b]);
		b++;
	}
	return 0;
}