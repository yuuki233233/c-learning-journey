#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int target = rand() % 100 + 1; //Ŀ��
	int guess, attempts = 0; //�²�
	printf("��������Ϸ��ʼ!(0 ~ 100)\n");

	do {
		if (scanf("%d", &guess) != 1) {
			printf("����������!\n");
			while (getchar() != '\n');
			continue;
		}

		attempts++;

		if (guess > target) {
			printf("�������\n");
		}
		else if(guess < target) {
			printf("�����С\n");
		}
		else {
			printf("��%d�β¶���!\n", attempts); break;
		}
	} while (1);

	return 0;
}