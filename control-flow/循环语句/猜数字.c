#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("**********************************\n");
	printf("***        1. play             ***\n");
	printf("***        0. exit             ***\n");
	printf("**********************************\n");

}

void game()
{
	int gurss = 0;
	int ret = rand() % 100 + 1;
	int num = 0;

	while (1)
	{
		num++;
		printf("������Ҫ�µ���:>");
		scanf("%d", &gurss);

		if (gurss > ret)
		{
			printf("�´���\n");
		}
		else if (gurss < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ����%d�¶���\n",num);
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}