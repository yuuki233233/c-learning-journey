#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Student
{
    char name[20];
    int age;
    int high;
    float weight;
    int id[16];
}s4, s5, s6;
//s4, s5, s6�ǽṹ��ȫ�ֱ���

int main()
{
    struct Student s1 = { "����", 20, 180, 75.5f, 1234567890 };//��ʼ��
    struct Student s2 = { .age = 30, .name = "����", .weight = 80.5f, .high = 177,  .id = 1234567891 };//����˳���ŵ�,ǰ��Ҫ��.
    printf("%s %d %d %.1f %d\n", s1.name, s1.age, s1.high, s1.weight, s1.id);
        //struck Student s3;
        //s1, s2, s3�ǽṹ��ľֲ�����
        return 0;
}