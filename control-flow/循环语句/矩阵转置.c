#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	printf("�������Ϊ:> ");
	scanf("%d", &n);

	int m = 0;
	printf("�������Ϊ:> ");
	scanf("%d", &m);

	int arr[n][m];

	int i = 0, j = 0;
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			printf("��%d�е�%d��Ϊ:> ",i + 1,j + 1);
			scanf("%d", & arr[i][j]);
		}
		printf("\n");
	}

	printf("����ת��Ϊ:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}