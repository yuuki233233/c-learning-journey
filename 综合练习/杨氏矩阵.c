#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int find_num(int arr[][3], int x, int y, int n)
{
	int i = 0;
	int j = y - 1;
	while (i < x && j >= 0)
	{

		if (arr[i][j] < n)
		{
			i++;
		}
		else if (arr[i][j] > n)
		{
			j--;
		}
		else
		{
			return 1;//����1���ҵ�
		}
	}
	
	return 0;//û�ҵ�
}

int main()
{
	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int len = sizeof(arr) / sizeof(arr[0]);

	int ret = find_num(arr, 3, 3, 5);
	//�������ж��Ƿ��ҵ�
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}

	return 0;
}