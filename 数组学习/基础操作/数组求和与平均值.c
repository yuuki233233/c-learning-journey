#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int sum = 0;
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("������5������:\n");
	for (int i = 0; i < len; i++)
	{
		printf("�������%d������:> ",i + 1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("��������ܺ�Ϊ:%d\n", sum);
	printf("���������ƽ����Ϊ:%.2f\n", (float)sum / len);
	return 0;
}