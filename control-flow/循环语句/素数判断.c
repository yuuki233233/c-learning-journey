#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

int main() {
	int num = 0;
	printf("���������1������: ");
	scanf("%d", &num);

	if (num <= 1) {
		printf("�������!�������������1������\n");
		return 1;
	}

	if (num == 2) {
		printf("������\n");
		return 0;
	}

	if (num % 2 == 0) {
		printf("��������\n");
		return 0;
	}

	bool a = true;
	for (int i = 3; i * i < num; i+=2) {
		if (num % i == 0) {
			a = false;
			break;
		}
	}

	if (a) {
		printf("������\n");
	}
	else {
		printf("��������\n");
	}
	return 0;
}