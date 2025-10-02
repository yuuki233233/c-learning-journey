#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

void my_strcpy(char* arr1, char* arr2)
{
	assert(arr1 != NULL);
	assert(arr2 != NULL);
	//¿½±´'\0'Ö®Ç°µÄ×Ö·û
	while (*arr1 != '\0')
	{
		*arr2++ = *arr1++;
	}
	
}

int main()
{
	char arr1[] = "hallo world";
	char arr2[20] = { 0 };

	my_strcpy(arr1, arr2);

	printf("%s\n", arr2);
	return 0;
}