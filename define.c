//file: define.c

#include <stdio.h>

#define KPOP 50000000 //���� ��ũ�� ���
#define PI 3.14
#define PRT printf("����\n");

int main(void)
{
	double radius = 2.83;

	printf("��: %d\n", KPOP);
	printf("�� ����: %f\n", radius * radius * PI);
	PRT;

	return 0;
}