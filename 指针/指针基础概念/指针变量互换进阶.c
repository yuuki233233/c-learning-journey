#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void swap(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("����ǰa = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("������a = %d, b = %d\n", a, b);

	return 0;
}