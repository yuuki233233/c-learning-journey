#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("������5������");
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; i++)
	{
		printf("�������%d������:> ", i + 1);
		if (scanf("%d", &arr[i]) != 1)
		{
			printf("����������!\n");
			while (getchar() != '\n');
			i--;
			continue;
		}
	}
	printf("�����������Ϊ:> ");
	for (int j = 0; j < len; j++)
	{
		printf("%d ", arr[j]);
	}
	return 0;
}