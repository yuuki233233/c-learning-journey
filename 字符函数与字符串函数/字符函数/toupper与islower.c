#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

int main()
{
	int i = 0;
	char arr[] = "Hallo World";
	while (arr[i] != '\0')
	{
		if (islower(arr[i]))//�ж��Ƿ���Сд��ĸ,�������ε��ã����Ƽ�
		{
			arr[i] = toupper(arr[i]);//arr[i] -= 32;
		}
		i++;
	}
	printf("%s\n", arr);//HALLO WORLD
	return 0;
}