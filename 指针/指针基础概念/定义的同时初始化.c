#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//����int���͵ı���
	int num = 10;

	//����һ��ָ�����p
	//��������num�ĵ�ַ��ֵ��ָ�����p,ʹ��ָ�����pָ�����num
	int* p = &num;

	printf("%d\n", *p);
	return 0;
}