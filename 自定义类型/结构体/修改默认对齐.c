#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(1)//����Ĭ�϶�����Ϊ1
struct S
{
	char c1;
	int i;
	char c2;
};
#pragma pack()//ȡ�����õĶ���������ԭΪĬ��
int main()
{
	//����Ľ����ʲô��
	printf("%d\n", sizeof(struct S));
	return 0;
}