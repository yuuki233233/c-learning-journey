#define _CRT_SECURE_NO_WARNINGS
#include<time.h>
#include<stdlib.h>
#include"game.h"

void sta()
{
	printf("*********************\n");
	printf("****   1. play   ****\n");
	printf("****   0. Exit   ****\n");
	printf("*********************\n");
}

void game()
{
	//������Ϸ
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	//��ʼ����Ϸ
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');

	//��������
	SetMine(mine, ROW, COL);

	//��ӡ��Ϸ
	//InputBorad(mine, ROW, COL);
	InputBorad(show, ROW, COL);

	//��������
	FindMine(mine, show, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		sta();
		printf("��ѡ��ѡ��:>");
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
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}