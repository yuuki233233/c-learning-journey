#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int year = 0;

	do {
		printf("���������,����-1���˳�ѭ��: ");

		if (scanf("%d", &year) != 1) {
			printf("������Ч,��������Ч���:\n");
			while (getchar() != '\n');
			continue;
		}

		if (year == -1) {
			printf("�������\n");
			break;
		}

		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
			printf("����Ϊ����\n");
		}
		else {
			printf("��������\n");
		}
	} while (1);

	return 0;
}