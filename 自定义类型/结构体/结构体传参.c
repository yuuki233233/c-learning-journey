#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Stu 
{
	int arr[100];
	int i;
	double d;
};

//�ǵ�ַ����
void my_struct1(struct Stu x)
{
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", x.arr[i]);
	}
	printf("\n");
	printf("%lf\n", x.d);
	printf("%d\n", x.i);
}

//��ַ����
void my_struct2(const struct Stu* x)
{
	for (int i = 0; i < 5; i++)
	{
		//x->(ָ��)arr[i]
		printf("%d ", x->arr[i]);
	}
	printf("\n");
	printf("%lf\n", x->d);
	printf("%d\n", x->i);
}

int main()
{
	struct Stu s = { {1,2,3,4,5},100,23.33 };
	my_struct1(s);
	my_struct2(&s);

	return 0;
}