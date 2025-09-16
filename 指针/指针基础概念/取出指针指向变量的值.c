#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 20;

	int* p = &num;

	//将指针指向的变量赋值给value
	int value = *p;

	printf("%d\n", value);
	return 0;
}