#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int dayOfWeek = 0;
	do {
		printf("��������������ڼ�,����-1�˳�: ");
		if (scanf("%d", &dayOfWeek) != 1) {
			printf("��������Ч����\n");
			while (getchar() != '\n') {
				continue;
			}
		}

		if (dayOfWeek == -1)break;

		switch (dayOfWeek) {
		case 1: printf("�����տ�ʼ,����!\n"); break;
		case 2: printf("����ѧϰ��\n"); break;
		case 3: printf("һ�ܹ�����!\n"); break;
		case 4: printf("��ĩ������\n"); break;
		case 5: printf("�������ĩ��!\n"); break;
		case 6: printf("��ĩ���!\n"); break;
		case 7: printf("��Ϣ��,׼���µ�һ��\n"); break;
		default:printf("��������Ч����\n");
		}
	} while (1);

	return 0;
}