#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[3][5] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		printf("�������ά�����%d��ֵ:>\n",i + 1);
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("��ӡ��ά�����ֵ\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}