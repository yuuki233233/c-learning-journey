#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int find_round(char* c, char* ch)
{
	int tmp[200] = { 0 };
	strcpy(tmp, c);
	strcat(tmp, c);
	return strstr(tmp, ch) != NULL;
}

int main()
{
	char c[] = "hallo";
	char* ch = "lloha";
	int ret = find_round(c, ch);
	if (ret == 1)
	{
		printf("����ת���ַ�");
	}
	else
	{
		printf("������ת���ַ�");
	}
	return 0;
}