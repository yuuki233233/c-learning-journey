#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strstrͷ�ļ�

char* my_strstr(char* str1, char* str2)
{
	const char* s1 = NULL;
	const char* s2 = NULL;//��s1��s2��Ϊ��ָ��
	const char* cur = str1;//���curָ��ָ���׵�ַ������ص��ϴβ���str1�ĵط�

	if (*str2 == '\0')//���������str2û���ַ�
	{
		return (char*)str1;//��ֱ�ӷ���str1���׵�ַ
	}

	while (*cur)//��*curΪ'\0'�˳�ѭ��,'\0'��ASCLL��ֵΪ0
	{
		s1 = cur;
		s2 = str2;//��s1��s2������Ԫ�ص�ַ

		while (*s1 != '\0' && *s2 != '0' && *s1 == *s2)
		{
			s1++;
			s2++;//������Ԫ���Ƿ���ͬ
			return (char*)cur;//���ҵ������ͬʱ������
		}
		cur++;//����������ʱ��ʹcur��--����һλ��������һ��
	}
	return NULL;//���������������ؿ�ָ��

}

int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "cdef";
	char* ret = my_strstr(arr1, arr2);//����ʵ��
	if (ret == NULL)
		printf("û�ҵ�\n");
	else
		printf("%s\n", ret);
	return 0;
}