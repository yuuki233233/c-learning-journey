#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void str(char* ch, int len, int x)
{
	int time = x % len;//�������ѭ��
	for (int i = 0; i < time; i++)
	{
		char tap = ch[0];//����һ�������������ַ�
		int j = 0;
		for ( j = 0; j < len - 1 ; j++)
		{
			ch[j] = ch[j + 1];//����λ��
		}
		ch[j] = tap;//�����Ŀ�λ���������ַ��ı���
	}
}

int main()
{
	char ch[] = "asdfg";
	int len = strlen(ch);//���ַ�������
	str(ch, len, 6);
	printf("%s\n", ch);

	return 0;
}