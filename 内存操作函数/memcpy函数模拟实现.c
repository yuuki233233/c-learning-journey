#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>//ʹ��assert������ͷ�ļ�

void* my_memcpy(void* arr2, void* arr1, int num)
{
	//�ж��Ƿ�Ϊ��ָ��
	assert(arr1 && arr2);

	void* n = arr2;
	//����40���ֽڣ�����1�ξͼ�1��
	while (num--)
	{
		//ǿת��char*���ͣ���Ϊֻռһ���ֽ�
		//��arr2�ĵ��ֽ�=arr1�ĵ��ֽ�
		*(char*)arr2 = *(char*)arr1;

		//������(��char*���͵�ǰ����)��������һ���ֽ�
		arr1 = (char*)arr1 + 1;
		arr2 = (char*)arr2 + 1;
	}
	return n;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };

	void* ret = my_memcpy(arr2, arr1, 40);//����ʵ��

	//��ӡ����arr2
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}