#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Add(int a, int b, int* sub, int* mul, int* div)
{
	*sub = a - b;
	*mul = a * b;
	if (b != 0)
	{
		*div = a / b;
	}
	else
	{
		*div = 0;
		printf("��������Ϊ��!\n");
	}
	return a + b;
}

int main()
{
	printf("�����������������мӼ��˳�:>");
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int sub = 0, mul = 0, div = 0;

	int sum = Add(a, b, &sub, &mul, &div);
	printf("���Ϊ:%d\n", sum);
	printf("���Ϊ:%d\n", sub);
	printf("���Ϊ:%d\n", mul);
	printf("���Ϊ:%d\n", div);

	return 0;
}