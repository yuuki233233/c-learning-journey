#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


	int main()
	{
		do{
		printf("���������ķ���(0 ~ 100)֮��,����ѯ����,����-1�˳�:");
		int score = 0;
		if (scanf("%d", &score) != 1)
		{
			printf("����:��������Ч����!\n");
			return 1;
		}

		if (-1 == score) break;

		if (score >= 90 && score <= 100)
		{
			printf("��������Ϊ����\n");
		}
		else if (score >= 80 && score < 90)
		{
			printf("��������Ϊ����\n");
		}
		else if (score >= 70 && score < 80)
		{
			printf("��������Ϊ�е�\n");
		}
		else if (score >= 60 && score < 70)
		{
			printf("��������Ϊ����\n");
		}
		else if (score < 60)
		{
			printf("��������Ϊ������\n");
		}
		else
		{
			printf("������ķ�����Ч\n");
		}
	}while(1);
	return 0;
}