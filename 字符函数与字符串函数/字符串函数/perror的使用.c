#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	//fopen�Զ�����ʽ���ļ������ļ������ڣ��ʹ�ʧ��

	//���ļ�����pf������pf
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		//���ļ������ڣ���ӡ����
		perror("zhangsan");
		return 1;
	}

	//�ر�pf
	fclose(pf);

	return 0;
}