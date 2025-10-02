#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = "hallo ";//追加空间要足够大
	char arr2[] = "world";

	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}