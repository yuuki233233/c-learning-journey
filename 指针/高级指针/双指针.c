#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 100;
	int* p = &num;
	*p = 200;
	printf("num��ȡֵΪ:%d\n", num);
	
	int **lp = &p;
	**lp = 400;
	printf("num��ȡֵΪ:%d\n", num);

	return 0;
}