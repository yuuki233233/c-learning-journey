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

	//д�ļ�
	fputs("hello world\n", ps);
	fputs("hello bit\n", ps);

	//�ر��ļ�
	fclose(ps);
	ps = NULL;

	return 0;
}