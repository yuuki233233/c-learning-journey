#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 0;
	printf("�����뵹���������Ĳ���");
	scanf("%d", &a);

	//����������ѭ��������,�ڲ�ѭ�������
	for (int i = 0; i < a; i++) {
		for (int j = 1; j <= i; j++) {  //����������,���ϵ��¿ո�����,������(��)
			printf(" ");
		}
		for (int f = 1; f <= a - i; f++) { //�����������,���������μ���,������(��-��)
			printf("%d", f);
		}
		for (int k = a - i - 1; k > 0; k--) {  //�����ұ�����,���������μ��ٳ���4321��,�����÷�for��(��-��-1)
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}