#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//���ļ�(���ڵ������)
	FILE* ps = fopen("test.txt", "r");
	if (ps == NULL)
	{
		perror("fopen");
		return 1;
	}

	//���ļ�
	int ch = 0;
	while ((ch = fgetc(ps)) != EOF)
	{
		printf("%c", ch);
	}

	//�ر��ļ�
	fclose(ps);
	ps = NULL;

	return 0;
}