#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 0, b = 1;
	printf("%d %d ", a, b);

	do {
		int max = a + b;
		printf("%d ", max);

		a = b;
		b = max;
	} while (1);

	return 0;
}