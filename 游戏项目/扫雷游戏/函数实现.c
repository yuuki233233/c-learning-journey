#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void InitBorad(char arr[ROWS][COLS], int rows, int cols, int set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void InputBorad(char arr[ROWS][COLS], int row, int col)
{
	printf("--ɨ����Ϸ��ʼ--\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = lei;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

int GetFind(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y + 1] + mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y + 1] + mine[x][y - 1] + mine[x + 1][y + 1] + mine[x + 1][y] + mine[x + 1][y - 1] - 8*'0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win < row * col - lei)
	{
		printf("������Ҫ��ѯ������:>");
		int x = 0, y = 0;
		scanf("%d%d", &x, &y);

		if (x > 0 && x < row && y > 0 && y < col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�,����ը����\n");
				InputBorad(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetFind(mine, x, y);
				show[x][y] = count + '0';
				InputBorad(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�����������Ч,����������\n");
		}
	}
	if (win == row * col - lei)
	{
		printf("��ϲ��,���׳ɹ�\n");
		InputBorad(mine, ROW, COL);
	}
	
}