#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void find_arr(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			if (*(arr + j) > *(arr + i))
			{
				int tamp = *(arr +j);
				*(arr + j) = *(arr + i);
				*(arr + i) = tamp;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		printf("%d ", *(arr + i));
	}
}

int main()
{
	int arr[] = { 1,3,5,7,9,2,4,6,8,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	find_arr(arr, len);
	return 0;
}