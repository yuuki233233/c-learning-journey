#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;//����int���͵ı���a

	int* p;    //�ȶ���ָ�����

	p = &a;    //������a�ĵ�ַ��ֵ������p,����ָ�����pָ�����a

	*p = 20;   //ָ��a��,*p�ĵ�ַ��a�ĵ�ַ��ͬ,���޸�
	printf("%d\n", *p);

	return 0;
}