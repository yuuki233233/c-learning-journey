#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int arr[] = { 6,3,8,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("��ӡǰ������Ԫ��:");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("��ӡ�������Ԫ��:");
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - 1; j++)//len-1Ϊi��ǰһλ,�����ڵ�Ԫ�ؽ��бȽϴ�С
		{
			if (arr[j] < arr[i])//�������Ԫ����j��
			{
			    int max = arr[j];//�����Ϊarr[j],Ȼ����н���
				arr[j] = arr[i];
				arr[i] = max;
			}
		}
	}
	for (int i = 0; i < len; i++)//������,��ӡԪ��
	{
		printf("%d ", arr[i]);
	}
	return 0;
}