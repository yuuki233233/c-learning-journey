#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strstrͷ�ļ�

int main()
{
	char arr1[] = "yuuki@Outlook.com";
	char s[100] = { 0 };
	strcpy(s, arr1);//����ͬһ����Ҫ���ҵ��ַ���

	const char* arr2 = "@.";//������Ҫȥ�����ַ�
	char* ret = NULL;//��һ����ָ�����strtok���ص��ַ���

	for (ret = strtok(s, arr2); ret != NULL; ret = strtok(NULL, arr2))//������Ҫ��ָ�����
	{
		printf("%s\n", ret);
	}
	return 0;
}