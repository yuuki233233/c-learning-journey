#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("���������ķ���(0 ~ 100)֮��,����ѯ����:");
	int score = 0;
	if(scanf("%d", &score) != 1)
	{
		printf("����:��������Ч����!\n");
		return 1;
	}

	if (score >= 90 && score <= 100)
	{
		printf("��������Ϊ����");
	}
	else if (score >= 80 && score < 90)
	{
		printf("��������Ϊ����");
	}
	else if (score >= 70 && score < 80)
	{
		printf("��������Ϊ�е�");
	}
	else if (score >= 60 && score < 70)
	{
		printf("��������Ϊ����");
	}
	else if (score < 60)
	{
		printf("��������Ϊ������");
	}
	else
	{
		printf("������ķ�����Ч");
	}
	return 0;
}