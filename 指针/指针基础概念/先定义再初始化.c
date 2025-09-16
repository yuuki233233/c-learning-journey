#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;//定义int类型的变量a

	int* p;    //先定义指针变量

	p = &a;    //将变量a的地址赋值给变量p,后面指针变量p指向变量a

	*p = 20;   //指向a后,*p的地址与a的地址相同,可修改
	printf("%d\n", *p);

	return 0;
}