#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

double divide(double x, double y)
{
	if (y == 0)
	{
		printf("����:��������Ϊ��!\n");
		return -1;
	}
	return x / y;
}
int main()
{
	int a = 0, b = 0;
	printf("������a��b��ֵ:> ");
	scanf("%d %d", &a, &b);

	printf("���:>%d\n", Add(a, b));
	printf("���:>%d\n", sub(a, b));
	printf("���:>%d\n", mul(a, b));
	printf("���:>%.2lf\n", divide(a, b));
	return 0;
}