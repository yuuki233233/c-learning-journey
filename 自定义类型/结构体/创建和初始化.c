#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct book
{
	char name[20];
	char author[20];
	float price;
	char id[13];
};

int main()
{
	//���սṹ���Ա��˳���ʼ��
	struct book b1 = { "PengGe_C Yuyan","PengGe",49.9, "QWE"};
	//������ӡ
	printf("%s ", b1.name);
	printf("%s ", b1.author);
	printf("%.1f ", b1.price);
	printf("%s ", b1.id);

	printf("\n");
	//һ���Դ�ӡ
	printf("%s %s %.1f %s\n", b1.name, b1.author, b1.price, b1.id);

	//����ָ����˳���ʼ��
	struct book b2 = { .id = "RTY", .price = 8.8, .author = "PengGe", .name = "PengGe_C" };

	//һ���Դ�ӡ
	printf("%s %s %.1f %s\n", b2.name, b2.author, b2.price, b2.id);

	return 0;
}