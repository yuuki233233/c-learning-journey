#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int input = 0;
	int a = 0, b = 0;
	printf("������������,�ɲ鿴���Լ��:");
	scanf("%d%d", &a, &b);

	while (b != 0)
	{
		input++;
		int temp = b;
		b = a % b;
		a = temp;
	}
	printf("���Լ��Ϊ%d\n��ת���Ĵ���Ϊ%d", a, input);
	return 0;
}