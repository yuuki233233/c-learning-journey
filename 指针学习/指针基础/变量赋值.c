#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char a = 10;
	printf("�޸�ǰ,����a��ֵ:%d\n", a);

	char* p = &a;
	*p = 20;
	printf("�޸ĺ�,����a��ֵ:%d\n", a);

	return 0;
}
