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

	int ch = 0;
	for (ch = 'a'; ch < 'z'; ch++)
	{
		//�����ַ�
		fputc(ch, ps);
	}

	//�ر��ļ�
	fclose(ps);
	ps = NULL;

	return 0;
}