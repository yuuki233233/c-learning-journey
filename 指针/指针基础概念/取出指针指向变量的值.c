#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 20;

	int* p = &num;

	//��ָ��ָ��ı�����ֵ��value
	int value = *p;

	printf("%d\n", value);
	return 0;
}