#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;//����

	do
	{
		count++;//����
		n = n / 10;
	} while (n);

	printf("%d", count);

	return 0;
}