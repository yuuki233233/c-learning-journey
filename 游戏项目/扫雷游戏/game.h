#pragma once
#include<stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define lei 10

//��ʼ��
void InitBorad(char arr[ROWS][COLS], int rows, int cols, int set);

//��ӡ
void InputBorad(char arr[ROWS][COLS], int row, int col);

//��������
void SetMine(char arr[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);