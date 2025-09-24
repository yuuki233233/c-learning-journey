#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int x, int y)
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

int div(int x, int y)
{
	return x / y;
}

int main()
{
	int(*p)(int, int) = add;
	int(*ps[4])(int, int) = { add,sub,mul,div };
	printf("请输入两个整数并进行加减乘除:");
	int n = 0, m = 0;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < 4; i++)
	{
		int ret = ps[i](n, m);
		printf("%d ", ret);
	}
	return 0;
}