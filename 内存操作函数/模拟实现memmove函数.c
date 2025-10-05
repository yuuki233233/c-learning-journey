#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//��ϣ��src���޸ģ�ǰ���const
void* my_memmove(void* dest,const void* src, int sz)
{
	assert(dest && src);
	void* s = src;
	if (dest < src)
	{
		while (sz--)
		{
			//ǰ > ��
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//ǰ < ��
		while (sz--)
		{
			*((char*)dest + sz) = *((char*)src + sz);
		}
	}
	
	return s;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	void* set = my_memmove(arr + 3, arr, 5 * sizeof(int));

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}