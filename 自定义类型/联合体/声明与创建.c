#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���������͵�����
union Un
{
	char c;
	int i;
};

int main()
{
	//����������Ķ���
	union Un u = { 0 };
	//���������С
	printf("%zd\n", sizeof(u));

	return 0;
}