#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>	

//ͨ����ַ�����ı�a��b��ֵ	
void swap(int* x, int* y)
{
	int tamp = *x;
	*x = *y;
	*y = tamp;
}

int main()
{
	int a = 0, b = 0;
	scanf("%d%d", &a, &b);
	printf("����ǰ��ֵa = %d , b = %d\n", a, b);

	swap(&a, &b);

	printf("�������ֵa = %d , b = %d\n", a, b);

	return 0;
}
