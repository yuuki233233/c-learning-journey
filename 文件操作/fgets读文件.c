#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//���ļ�
	FILE* ps = fopen("test.txt", "w");
	if (ps == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ�
	char arr[10] = { 0 };
	//����19�����ټ����������ֱ������\0�ٻ���
	while (fgets(arr, 20, ps) != NULL)
	{
		fgets(arr, 10, ps);
	}

	//�ر��ļ�
	fclose(ps);
	ps = NULL;

	return 0;
}