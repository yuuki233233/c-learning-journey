#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//����ͷ�ļ�

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//�ڴ��㹻��
	int arr2[20] = { 0 };
	//�����ڴ�,���ұ����ֱ�ʾ�ֽ�
	memcpy(arr2, arr1, 10*sizeof(int));
	//��ӡ����arr2
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}