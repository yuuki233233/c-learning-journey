#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 4;
	int b = 2;
	printf("����ǰa = %d  b = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("������a = %d  b = %d\n", a, b);
	return 0;
}