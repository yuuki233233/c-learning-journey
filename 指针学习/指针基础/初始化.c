#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 10;

	int* p = &num;

	printf("%d\n", *p);
	return 0;
 }