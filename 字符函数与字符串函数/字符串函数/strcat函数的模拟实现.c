#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//����ֵΪchar*����������ҲΪchar*
char* my_strcat(char* dest, const char* src)//const����Դ���ݣ���ֹ���޸�
{
	assert(dest && src);
	//����dest�׵�ַ
	char* ret = dest;
	//1.��Ŀ��ռ�\0
	while (*dest != '\0')
		dest++;
	//2.����
	while (*dest++ = *src++)
		;//�����
	return ret;//�����ķ���ֵΪ������Ԫ�أ���������������´�ӡ��ȫ
}
int main()
{
	char arr1[20] = "hallo ";//׷�ӿռ�Ҫ�㹻��
	char arr2[] = "world";

	char* s = my_strcat(arr1, arr2);//��������Ϊchar*
	printf("%s\n", arr1);
	printf("%s\n", s);
	printf("%s\n", my_strcat(arr1, arr2));//arr1�Ѿ�Ϊhallo world����arr2���кϲ�����Ϊhallo worldworld

	return 0;
}