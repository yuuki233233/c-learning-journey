#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//������鳤��
	int len = sizeof(arr) / sizeof(arr[0]);
	//memmove�﷨ʹ��
	memmove(arr + 3, arr, 5 * sizeof(int));
	//��ӡ
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}