//file: if.c

#include <stdio.h>

int main(void)
{
	double grade;

	printf("������� �Է�: ");
	scanf_s("%lf", &grade);

	if(grade >= 4.0)
		printf("�Ｚ�� ������ �� �ֽ��ϴ�.\n");

	printf("������ �����մϴ�.\n");

	return 0;

}