#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	int target = rand() % 100 + 1; //目标
	int guess, attempts = 0; //猜测
	printf("猜数字游戏开始!(0 ~ 100)\n");

	do {
		if (scanf("%d", &guess) != 1) {
			printf("请输入数字!\n");
			while (getchar() != '\n');
			continue;
		}

		attempts++;

		if (guess > target) {
			printf("输入过大\n");
		}
		else if(guess < target) {
			printf("输入过小\n");
		}
		else {
			printf("第%d次猜对了!\n", attempts); break;
		}
	} while (1);

	return 0;
}