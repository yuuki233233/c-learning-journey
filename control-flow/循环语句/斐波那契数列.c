#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 0;
	printf("请输入你要输入的项: ");
	scanf("%d", &n);

	int a = 0, b = 1;
	if (n <= 1) printf("%d\n", a);
	if (n <= 2) printf("%d\n", b);

	int num = 2;
	for (int i = 1; i <= n; i++) {
		int max = a + b;
		printf("%d\n", max);

	    a = b;
		b = max;
	}
	return 0;
}