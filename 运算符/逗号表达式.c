#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = (a = b + 10, a, b = a + 1);

	printf("%d\n", c);

	return 0;
}